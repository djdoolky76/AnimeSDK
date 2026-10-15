#pragma once
#include "unitysdk/unitysdk.h"
class AOMNGKKKCOI;
namespace RPG::GameCore { class TaskContext; }

#define COLGJLMMHCA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBAEA0)
#define COLGJLMMHCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCBAED0)

inline static constexpr unsigned int COLGJLMMHCA_TypeDefinitionIndex = 55561;

	class COLGJLMMHCA
	{
	public:
		// static const ::System::Object CMGOKFBJJKA; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AOMNGKKKCOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AOMNGKKKCOI*))((::PBYTE)hIl2Cpp + COLGJLMMHCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGJLMMHCA_ONTASKBEGIN_OFFSET))(this);
		}

	};
