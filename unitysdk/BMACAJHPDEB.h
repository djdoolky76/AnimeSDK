#pragma once
#include "unitysdk/unitysdk.h"
class BBMOMCMBINK;
namespace RPG::GameCore { class SetBossPluralityHP; }
namespace RPG::GameCore { class TaskContext; }

#define BMACAJHPDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x18B60A10)
#define BMACAJHPDEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B60C10)
#define BMACAJHPDEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B60CA0)

inline static constexpr unsigned int BMACAJHPDEB_TypeDefinitionIndex = 57594;

	class BMACAJHPDEB
	{
	public:
		::BBMOMCMBINK* LBPOJPEOAKG; // 0x28
		// static const ::System::Object PAEKJECBJHC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + BMACAJHPDEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACAJHPDEB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACAJHPDEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
