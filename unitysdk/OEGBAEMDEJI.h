#pragma once
#include "unitysdk/unitysdk.h"
class KLJDOJPBEJC;
namespace RPG::GameCore { class TaskContext; }

#define OEGBAEMDEJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2C910)
#define OEGBAEMDEJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE2C940)

inline static constexpr unsigned int OEGBAEMDEJI_TypeDefinitionIndex = 54956;

	class OEGBAEMDEJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KLJDOJPBEJC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KLJDOJPBEJC*))((::PBYTE)hIl2Cpp + OEGBAEMDEJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGBAEMDEJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
