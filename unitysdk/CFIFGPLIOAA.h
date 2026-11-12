#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_SetEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CFIFGPLIOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xD5FBDC0)
#define CFIFGPLIOAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5FC1B0)
#define CFIFGPLIOAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD5FBDF0)
#define CFIFGPLIOAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD5FC160)
#define CFIFGPLIOAA_TICK_OFFSET UNITYSDK_OFFSET(0xD5FC100)

inline static constexpr unsigned int CFIFGPLIOAA_TypeDefinitionIndex = 53395;

	class CFIFGPLIOAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + CFIFGPLIOAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIFGPLIOAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFIFGPLIOAA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIFGPLIOAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIFGPLIOAA_DISPOSE_OFFSET))(this);
		}

	};
