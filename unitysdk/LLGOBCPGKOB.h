#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOKOIADHFCN;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define LLGOBCPGKOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7658E0)
#define LLGOBCPGKOB_EFCEMBFHLIG_OFFSET UNITYSDK_OFFSET(0xB765910)
#define LLGOBCPGKOB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB765BA0)
#define LLGOBCPGKOB_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB765BC0)
#define LLGOBCPGKOB_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB765B80)
#define LLGOBCPGKOB_KAOAOCJMMOO_OFFSET UNITYSDK_OFFSET(0xB765B20)
#define LLGOBCPGKOB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB765BB0)
#define LLGOBCPGKOB_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB765BD0)
#define LLGOBCPGKOB_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB765B90)

inline static constexpr unsigned int LLGOBCPGKOB_TypeDefinitionIndex = 74348;

	class LLGOBCPGKOB : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _MaxLevel_k__BackingField; // 0x14
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::Void _ctor(::GOKOIADHFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOKOIADHFCN*))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_CTOR_OFFSET))(this, a1);
		}

		::System::String* EFCEMBFHLIG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_EFCEMBFHLIG_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartySkillConfigRow* KAOAOCJMMOO()
		{
			return ((::RPG::GameCore::TrainPartySkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOBCPGKOB_KAOAOCJMMOO_OFFSET))(this);
		}

	};
