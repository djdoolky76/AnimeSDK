#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class OAFCCICMILM;

#define AAGOJHOBGBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D7B0)
#define AAGOJHOBGBC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84D7C0)

inline static constexpr unsigned int AAGOJHOBGBC_TypeDefinitionIndex = 43369;

	class AAGOJHOBGBC : public ::System::Object
	{
	public:
		::OAFCCICMILM* CKJLAAOFGCC; // 0x10
		::FDPALAEIHPB* MBKIEFPKECG; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + AAGOJHOBGBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGOJHOBGBC_INITIALIZE_OFFSET))(this);
		}

	};
