#pragma once
#include "unitysdk/unitysdk.h"
class CFMJMKKPMEH;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define AGKIILGCIKC_CTOR_OFFSET UNITYSDK_OFFSET(0xF12E5D0)
#define AGKIILGCIKC_NMMBJIBOEFI_OFFSET UNITYSDK_OFFSET(0xF12E8E0)
#define AGKIILGCIKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF12E600)

inline static constexpr unsigned int AGKIILGCIKC_TypeDefinitionIndex = 53826;

	class AGKIILGCIKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CFMJMKKPMEH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CFMJMKKPMEH*))((::PBYTE)hIl2Cpp + AGKIILGCIKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKIILGCIKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean NMMBJIBOEFI(::IAAOMMGICFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAAOMMGICFK*))((::PBYTE)hIl2Cpp + AGKIILGCIKC_NMMBJIBOEFI_OFFSET))(this, a1);
		}

	};
