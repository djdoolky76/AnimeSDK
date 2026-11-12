#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class GBNPHKMEIHA;
namespace RPG::GameCore { class TaskContext; }

#define GEDMIMLNPHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16908530)
#define GEDMIMLNPHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16908610)

inline static constexpr unsigned int GEDMIMLNPHN_TypeDefinitionIndex = 56614;

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
