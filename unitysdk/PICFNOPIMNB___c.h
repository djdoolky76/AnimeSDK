#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PICFNOPIMNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB84D40)
#define PICFNOPIMNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB84D70)
#define PICFNOPIMNB___C___GETBUFFEDAVATARSDISPLAYDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0xCB84D80)
#define PICFNOPIMNB___C___GETBUFFEDAVATARSDISPLAYDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0xCB84D90)

inline static constexpr unsigned int PICFNOPIMNB___c_TypeDefinitionIndex = 53029;

	class PICFNOPIMNB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x718A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x718A8);
		}

		static ::System::Func_2<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x718B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICFNOPIMNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetBuffedAvatarsDisplayData_b__8_0(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C___GETBUFFEDAVATARSDISPLAYDATA_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetBuffedAvatarsDisplayData_b__8_1(::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData))((::PBYTE)hIl2Cpp + PICFNOPIMNB___C___GETBUFFEDAVATARSDISPLAYDATA_B__8_1_OFFSET))(this, a1);
		}

	};
