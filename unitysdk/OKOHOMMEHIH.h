#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleTutorialDynamicValueParam; }
namespace RPG::GameCore { class DefineTutorialDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OKOHOMMEHIH_BFIIPOPNCDM_OFFSET UNITYSDK_OFFSET(0x178992F0)
#define OKOHOMMEHIH_CTOR_OFFSET UNITYSDK_OFFSET(0x17898EC0)
#define OKOHOMMEHIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17898EF0)
#define OKOHOMMEHIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17898F30)
#define OKOHOMMEHIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x178996B0)

inline static constexpr unsigned int OKOHOMMEHIH_TypeDefinitionIndex = 59304;

	class OKOHOMMEHIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineTutorialDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineTutorialDynamicValue*))((::PBYTE)hIl2Cpp + OKOHOMMEHIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOHOMMEHIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOHOMMEHIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* BFIIPOPNCDM(::RPG::GameCore::BattleTutorialDynamicValueParam* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleTutorialDynamicValueParam*))((::PBYTE)hIl2Cpp + OKOHOMMEHIH_BFIIPOPNCDM_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOHOMMEHIH_ONTASKRESET_OFFSET))(this);
		}

	};
