#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityEquipmentRewardMaterialRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOKILDIHDLF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED01D0)
#define HOKILDIHDLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED0750)
#define HOKILDIHDLF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED0340)
#define HOKILDIHDLF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CECFC80)
#define HOKILDIHDLF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CECFF10)
#define HOKILDIHDLF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED03E0)
#define HOKILDIHDLF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED0430)
#define HOKILDIHDLF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED0210)
#define HOKILDIHDLF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CECFEB0)
#define HOKILDIHDLF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED0080)
#define HOKILDIHDLF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED02A0)
#define HOKILDIHDLF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CECFC00)

inline static constexpr unsigned int HOKILDIHDLF_TypeDefinitionIndex = 11397;

	class HOKILDIHDLF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*>**)UnitySDK::FromName("", "HOKILDIHDLF")->GetStaticField(0x20230);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HOKILDIHDLF")->GetStaticField(0x20238);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HOKILDIHDLF")->GetStaticField(0x20240);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HOKILDIHDLF")->GetStaticField(0x7560);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HOKILDIHDLF")->GetStaticField(0x7561);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*>*(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*>(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEquipmentRewardMaterialRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityEquipmentRewardMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HOKILDIHDLF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKILDIHDLF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOKILDIHDLF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOKILDIHDLF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HOKILDIHDLF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityEquipmentRewardMaterialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEquipmentRewardMaterialRow*))((::PBYTE)hIl2Cpp + HOKILDIHDLF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
