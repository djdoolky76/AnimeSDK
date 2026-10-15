#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class GBNPHKMEIHA;
namespace RPG::GameCore { class TaskContext; }

#define GEDMIMLNPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x159C4C70)
#define GEDMIMLNPHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C4D50)

inline static constexpr unsigned int GEDMIMLNPHN_TypeDefinitionIndex = 55429;

	class GEDMIMLNPHN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GBNPHKMEIHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GBNPHKMEIHA*))((::PBYTE)hIl2Cpp + GEDMIMLNPHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMIMLNPHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
