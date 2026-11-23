#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_A08504A585882526_OFFSET UNITYSDK_OFFSET(0x21E44B0)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_BA03C678F193040B_OFFSET UNITYSDK_OFFSET(0x21E4430)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_FB886BA4CB5FDEDC_OFFSET UNITYSDK_OFFSET(0x21E4530)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x21E45B0)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int OthersSettingGroupData_F5628F8349D4A8A6_TypeDefinitionIndex = 8964;

	class OthersSettingGroupData_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::ABC::Game::OthersSettingGroupData_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::ABC::Game::OthersSettingGroupData_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(OthersSettingGroupData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>** StaticGet_BCB5776C6392BCE4()
		{
			return (::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>**)Il2CppClass::FromTypeDefinitionIndex(OthersSettingGroupData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>** StaticGet_E3CEE43317B9E051()
		{
			return (::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>**)Il2CppClass::FromTypeDefinitionIndex(OthersSettingGroupData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>** StaticGet_B8CA52E4DE85C79A()
		{
			return (::System::E891BA3236FD13E7<::ABC::Game::GameSettingEntryData*>**)Il2CppClass::FromTypeDefinitionIndex(OthersSettingGroupData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean A08504A585882526(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_A08504A585882526_OFFSET))(this, A5FB7225DA5C5A9B);
		}

		::System::Boolean FB886BA4CB5FDEDC(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_FB886BA4CB5FDEDC_OFFSET))(this, A5FB7225DA5C5A9B);
		}

		::System::Boolean BA03C678F193040B(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_F5628F8349D4A8A6_BA03C678F193040B_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
