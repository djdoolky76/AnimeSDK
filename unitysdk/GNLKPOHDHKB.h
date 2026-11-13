#pragma once
#include "unitysdk/unitysdk.h"
class CKGKLNPPAKB;
namespace RPG::GameCore { class TaskContext; }

#define GNLKPOHDHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1879A870)
#define GNLKPOHDHKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1879A8A0)

inline static constexpr unsigned int GNLKPOHDHKB_TypeDefinitionIndex = 54512;

	class GNLKPOHDHKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CKGKLNPPAKB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CKGKLNPPAKB*))((::PBYTE)hIl2Cpp + GNLKPOHDHKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLKPOHDHKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
