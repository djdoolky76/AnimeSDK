#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFCEJEJINK.h"
class LHKHLOPJPAO;

#define AHMABLPCOBF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB878E0)
#define AHMABLPCOBF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEB87940)
#define AHMABLPCOBF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xEB878F0)

inline static constexpr unsigned int AHMABLPCOBF_TypeDefinitionIndex = 78269;

	class AHMABLPCOBF : public ::KNFCEJEJINK
	{
	public:
		::LHKHLOPJPAO* MKKLHFCCCNF; // 0x18
		::System::Single LLNIGIGFCEA; // 0x20
		::System::Void _ctor(::LHKHLOPJPAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHKHLOPJPAO*))((::PBYTE)hIl2Cpp + AHMABLPCOBF_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMABLPCOBF_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHMABLPCOBF_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
