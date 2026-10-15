#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleFunTitleConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GENJEJMMGFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE3A700)
#define GENJEJMMGFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE3ACD0)
#define GENJEJMMGFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE3A870)
#define GENJEJMMGFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE3A170)
#define GENJEJMMGFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE3A400)
#define GENJEJMMGFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE3A910)
#define GENJEJMMGFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE3A960)
#define GENJEJMMGFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE3A740)
#define GENJEJMMGFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE3A3A0)
#define GENJEJMMGFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE3A570)
#define GENJEJMMGFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE3A7D0)
#define GENJEJMMGFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE3A0F0)

inline static constexpr unsigned int GENJEJMMGFI_TypeDefinitionIndex = 11453;

	class GENJEJMMGFI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*>**)UnitySDK::FromName("", "GENJEJMMGFI")->GetStaticField(0x170E0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GENJEJMMGFI")->GetStaticField(0x170E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GENJEJMMGFI")->GetStaticField(0x170F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GENJEJMMGFI")->GetStaticField(0x56C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GENJEJMMGFI")->GetStaticField(0x56C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*>(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleFunTitleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GENJEJMMGFI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENJEJMMGFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GENJEJMMGFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GENJEJMMGFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GENJEJMMGFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleFunTitleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleFunTitleConfigRow*))((::PBYTE)hIl2Cpp + GENJEJMMGFI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
