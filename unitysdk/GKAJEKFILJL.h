#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniquePropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKAJEKFILJL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE2D180)
#define GKAJEKFILJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE2D750)
#define GKAJEKFILJL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE2D2F0)
#define GKAJEKFILJL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE2CBD0)
#define GKAJEKFILJL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE2CE60)
#define GKAJEKFILJL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE2D390)
#define GKAJEKFILJL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE2D3E0)
#define GKAJEKFILJL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE2D1C0)
#define GKAJEKFILJL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE2CE00)
#define GKAJEKFILJL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE2CFD0)
#define GKAJEKFILJL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE2D250)
#define GKAJEKFILJL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE2CB50)

inline static constexpr unsigned int GKAJEKFILJL_TypeDefinitionIndex = 13110;

	class GKAJEKFILJL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>**)UnitySDK::FromName("", "GKAJEKFILJL")->GetStaticField(0x16AB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GKAJEKFILJL")->GetStaticField(0x16AB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKAJEKFILJL")->GetStaticField(0x16AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKAJEKFILJL")->GetStaticField(0x4D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKAJEKFILJL")->GetStaticField(0x4D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>*(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::UniquePropRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::UniquePropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + GKAJEKFILJL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKAJEKFILJL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKAJEKFILJL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKAJEKFILJL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKAJEKFILJL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::UniquePropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UniquePropRow*))((::PBYTE)hIl2Cpp + GKAJEKFILJL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
