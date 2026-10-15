#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBackSkillExtraDescConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLKKFBIPICN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBF55E0)
#define CLKKFBIPICN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBF5BB0)
#define CLKKFBIPICN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBF5750)
#define CLKKFBIPICN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBF5050)
#define CLKKFBIPICN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBF52E0)
#define CLKKFBIPICN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBF57F0)
#define CLKKFBIPICN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBF5840)
#define CLKKFBIPICN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBF5620)
#define CLKKFBIPICN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBF5280)
#define CLKKFBIPICN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBF5450)
#define CLKKFBIPICN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBF56B0)
#define CLKKFBIPICN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBF4FD0)

inline static constexpr unsigned int CLKKFBIPICN_TypeDefinitionIndex = 13543;

	class CLKKFBIPICN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLKKFBIPICN")->GetStaticField(0x3DA70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>**)UnitySDK::FromName("", "CLKKFBIPICN")->GetStaticField(0x3DA78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLKKFBIPICN")->GetStaticField(0x3DA80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLKKFBIPICN")->GetStaticField(0xE830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLKKFBIPICN")->GetStaticField(0xE831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLKKFBIPICN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKFBIPICN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLKKFBIPICN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLKKFBIPICN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLKKFBIPICN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBackSkillExtraDescConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*))((::PBYTE)hIl2Cpp + CLKKFBIPICN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
