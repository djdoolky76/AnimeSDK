#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MGHDPFNFMIB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLPOFLANKBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E40AE20)
#define LLPOFLANKBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40B3F0)
#define LLPOFLANKBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E40AF90)
#define LLPOFLANKBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E40A890)
#define LLPOFLANKBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E40AB20)
#define LLPOFLANKBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E40B030)
#define LLPOFLANKBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E40B080)
#define LLPOFLANKBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E40AE60)
#define LLPOFLANKBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E40AAC0)
#define LLPOFLANKBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E40AC90)
#define LLPOFLANKBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E40AEF0)
#define LLPOFLANKBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E40A810)

inline static constexpr unsigned int LLPOFLANKBP_TypeDefinitionIndex = 11293;

	class LLPOFLANKBP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LLPOFLANKBP")->GetStaticField(0x3C590);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LLPOFLANKBP")->GetStaticField(0x3C598);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*>**)UnitySDK::FromName("", "LLPOFLANKBP")->GetStaticField(0x3C5A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LLPOFLANKBP")->GetStaticField(0xC010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LLPOFLANKBP")->GetStaticField(0xC011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*>*(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGHDPFNFMIB*>(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::MGHDPFNFMIB* LMBKNCAIDLC(::RPG::GameCore::DiceCombatDiceType a1)
		{
			return ((::MGHDPFNFMIB*(*)(::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + LLPOFLANKBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLPOFLANKBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LLPOFLANKBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLPOFLANKBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LLPOFLANKBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MGHDPFNFMIB* a1)
		{
			return ((::System::Void(*)(::MGHDPFNFMIB*))((::PBYTE)hIl2Cpp + LLPOFLANKBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
