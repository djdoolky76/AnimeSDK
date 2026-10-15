#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleRouteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIHDJCNMJOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D254F60)
#define OIHDJCNMJOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D255530)
#define OIHDJCNMJOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2550D0)
#define OIHDJCNMJOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2549D0)
#define OIHDJCNMJOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D254C60)
#define OIHDJCNMJOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D255170)
#define OIHDJCNMJOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2551C0)
#define OIHDJCNMJOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D254FA0)
#define OIHDJCNMJOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D254C00)
#define OIHDJCNMJOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D254DD0)
#define OIHDJCNMJOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D255030)
#define OIHDJCNMJOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D254950)

inline static constexpr unsigned int OIHDJCNMJOJ_TypeDefinitionIndex = 11445;

	class OIHDJCNMJOJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>**)UnitySDK::FromName("", "OIHDJCNMJOJ")->GetStaticField(0x46E50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OIHDJCNMJOJ")->GetStaticField(0x46E58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OIHDJCNMJOJ")->GetStaticField(0x46E60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OIHDJCNMJOJ")->GetStaticField(0x109A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OIHDJCNMJOJ")->GetStaticField(0x109A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleRouteConfigRow*>(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleRouteConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleRouteConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleRouteConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleRouteConfigRow*))((::PBYTE)hIl2Cpp + OIHDJCNMJOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
