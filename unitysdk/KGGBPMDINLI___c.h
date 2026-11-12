#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KGGBPMDINLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC70E80)
#define KGGBPMDINLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC70EB0)
#define KGGBPMDINLI___C___BUILDCONFIGS_B__13_2_OFFSET UNITYSDK_OFFSET(0xBC70F10)
#define KGGBPMDINLI___C___CHECKAHABUFFEDAVATAROBTAINED_B__11_0_OFFSET UNITYSDK_OFFSET(0xBC70EC0)

inline static constexpr unsigned int KGGBPMDINLI___c_TypeDefinitionIndex = 64185;

	class KGGBPMDINLI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::SeriesSkillConfig, ::System::UInt32>** StaticGet___9__13_2()
		{
			return (::System::Func_2<::RPG::AvatarSystem::SeriesSkillConfig, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C230);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C238);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGBPMDINLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGBPMDINLI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckAhaBuffedAvatarObtained_b__11_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + KGGBPMDINLI___C___CHECKAHABUFFEDAVATAROBTAINED_B__11_0_OFFSET))(this, a1);
		}

		::System::UInt32 __BuildConfigs_b__13_2(::RPG::AvatarSystem::SeriesSkillConfig a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillConfig))((::PBYTE)hIl2Cpp + KGGBPMDINLI___C___BUILDCONFIGS_B__13_2_OFFSET))(this, a1);
		}

	};
