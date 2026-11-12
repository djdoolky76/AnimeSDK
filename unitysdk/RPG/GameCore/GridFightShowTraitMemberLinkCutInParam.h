#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D92D0)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_GET_ROLEIDDOWN_OFFSET UNITYSDK_OFFSET(0xF1D92B0)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_GET_ROLEIDUP_OFFSET UNITYSDK_OFFSET(0xF1D9290)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_SET_ROLEIDDOWN_OFFSET UNITYSDK_OFFSET(0xF1D92C0)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_SET_ROLEIDUP_OFFSET UNITYSDK_OFFSET(0xF1D92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowTraitMemberLinkCutInParam_TypeDefinitionIndex = 59397;

	class GridFightShowTraitMemberLinkCutInParam : public ::System::Object
	{
	public:
		::System::String* AvatarImgUp; // 0x10
		::System::String* AvatarImgDown; // 0x18
		::System::UInt32 _RoleIdDown_k__BackingField; // 0x20
		::System::UInt32 _RoleIdUp_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RoleIdUp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_GET_ROLEIDUP_OFFSET))(this);
		}

		::System::Void set_RoleIdUp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_SET_ROLEIDUP_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleIdDown()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_GET_ROLEIDDOWN_OFFSET))(this);
		}

		::System::Void set_RoleIdDown(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITMEMBERLINKCUTINPARAM_SET_ROLEIDDOWN_OFFSET))(this, a1);
		}

	};
}
