#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IJHOJLILAOK;
namespace RPG::GameCore { class TaskContext; }

#define LBHMGNIODKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8D880)
#define LBHMGNIODKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE8D990)
#define LBHMGNIODKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE8D890)
#define LBHMGNIODKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE8D940)
#define LBHMGNIODKO_TICK_OFFSET UNITYSDK_OFFSET(0xBE8D9D0)

inline static constexpr unsigned int LBHMGNIODKO_TypeDefinitionIndex = 59411;

	class LBHMGNIODKO : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJHOJLILAOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJHOJLILAOK*))((::PBYTE)hIl2Cpp + LBHMGNIODKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHMGNIODKO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBHMGNIODKO_TICK_OFFSET))(this, a1);
		}

	};
