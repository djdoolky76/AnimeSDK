#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHMAEJLGNAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBE5090)
#define CHMAEJLGNAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBE5610)
#define CHMAEJLGNAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBE5200)
#define CHMAEJLGNAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBE4B40)
#define CHMAEJLGNAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBE4DD0)
#define CHMAEJLGNAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBE52A0)
#define CHMAEJLGNAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBE52F0)
#define CHMAEJLGNAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBE50D0)
#define CHMAEJLGNAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBE4D70)
#define CHMAEJLGNAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBE4F40)
#define CHMAEJLGNAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBE5160)
#define CHMAEJLGNAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBE4AC0)

inline static constexpr unsigned int CHMAEJLGNAG_TypeDefinitionIndex = 12744;

	class CHMAEJLGNAG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CHMAEJLGNAG")->GetStaticField(0x3CF50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>**)UnitySDK::FromName("", "CHMAEJLGNAG")->GetStaticField(0x3CF58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHMAEJLGNAG")->GetStaticField(0x3CF60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHMAEJLGNAG")->GetStaticField(0xC310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHMAEJLGNAG")->GetStaticField(0xC311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarUltraSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHMAEJLGNAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMAEJLGNAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHMAEJLGNAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHMAEJLGNAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHMAEJLGNAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarUltraSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + CHMAEJLGNAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
