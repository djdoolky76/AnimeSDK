#pragma once
#include "unitysdk/unitysdk.h"
class OLDNLALHKOH;
namespace RPG::GameCore { class TaskContext; }

#define NKACBGMCEOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2C850)
#define NKACBGMCEOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2C880)
#define NKACBGMCEOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC2C8C0)

inline static constexpr unsigned int NKACBGMCEOM_TypeDefinitionIndex = 53895;

	class NKACBGMCEOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OLDNLALHKOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OLDNLALHKOH*))((::PBYTE)hIl2Cpp + NKACBGMCEOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKACBGMCEOM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKACBGMCEOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
