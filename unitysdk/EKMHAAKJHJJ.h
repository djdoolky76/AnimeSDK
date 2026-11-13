#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireHealConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKMHAAKJHJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F123900)
#define EKMHAAKJHJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F123ED0)
#define EKMHAAKJHJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F123A70)
#define EKMHAAKJHJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F123370)
#define EKMHAAKJHJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F123600)
#define EKMHAAKJHJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F123B10)
#define EKMHAAKJHJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F123B60)
#define EKMHAAKJHJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F123940)
#define EKMHAAKJHJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F1235A0)
#define EKMHAAKJHJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F123770)
#define EKMHAAKJHJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1239D0)
#define EKMHAAKJHJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F1232F0)

inline static constexpr unsigned int EKMHAAKJHJJ_TypeDefinitionIndex = 13577;

	class EKMHAAKJHJJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EKMHAAKJHJJ")->GetStaticField(0x49160);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EKMHAAKJHJJ")->GetStaticField(0x49168);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*>**)UnitySDK::FromName("", "EKMHAAKJHJJ")->GetStaticField(0x49170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EKMHAAKJHJJ")->GetStaticField(0xE280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EKMHAAKJHJJ")->GetStaticField(0xE281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireHealConfigRow*>(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBonfireHealConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBonfireHealConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBonfireHealConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBonfireHealConfigRow*))((::PBYTE)hIl2Cpp + EKMHAAKJHJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
