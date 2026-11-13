#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;
class KBKPHGAKHOG;

#define KMGPBHOKFKI_CTOR_OFFSET UNITYSDK_OFFSET(0x18F75970)
#define KMGPBHOKFKI_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x18F75E80)
#define KMGPBHOKFKI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x18F75980)

inline static constexpr unsigned int KMGPBHOKFKI_TypeDefinitionIndex = 61649;

	class KMGPBHOKFKI : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::KBKPHGAKHOG* IOJDPGIIDIC; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::KBKPHGAKHOG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::KBKPHGAKHOG*))((::PBYTE)hIl2Cpp + KMGPBHOKFKI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGPBHOKFKI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGPBHOKFKI_HCOFMFKFMDK_OFFSET))(this);
		}

	};
