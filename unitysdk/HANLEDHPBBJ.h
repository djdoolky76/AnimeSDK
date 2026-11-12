#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionRogueMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HANLEDHPBBJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E05CA40)
#define HANLEDHPBBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05D550)
#define HANLEDHPBBJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E05CDE0)
#define HANLEDHPBBJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E05CA80)
#define HANLEDHPBBJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E05D2D0)
#define HANLEDHPBBJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E05CE80)
#define HANLEDHPBBJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E05CED0)
#define HANLEDHPBBJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E05CCB0)
#define HANLEDHPBBJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E05D270)
#define HANLEDHPBBJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E05D400)
#define HANLEDHPBBJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E05CD40)
#define HANLEDHPBBJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E05D1F0)

inline static constexpr unsigned int HANLEDHPBBJ_TypeDefinitionIndex = 15326;

	class HANLEDHPBBJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HANLEDHPBBJ")->GetStaticField(0x12E60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HANLEDHPBBJ")->GetStaticField(0x12E68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>**)UnitySDK::FromName("", "HANLEDHPBBJ")->GetStaticField(0x12E70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HANLEDHPBBJ")->GetStaticField(0x3D10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HANLEDHPBBJ")->GetStaticField(0x3D11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HANLEDHPBBJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HANLEDHPBBJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HANLEDHPBBJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionRogueMonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionRogueMonsterRow*))((::PBYTE)hIl2Cpp + HANLEDHPBBJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>(*)())((::PBYTE)hIl2Cpp + HANLEDHPBBJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionRogueMonsterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionRogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HANLEDHPBBJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
