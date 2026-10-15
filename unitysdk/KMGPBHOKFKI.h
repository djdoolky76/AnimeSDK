#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;
class KBKPHGAKHOG;

#define KMGPBHOKFKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5564A0)
#define KMGPBHOKFKI_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB5569A0)
#define KMGPBHOKFKI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB5564B0)

	class KMGPBHOKFKI : public ::EFNJLACKEDH
	{
	public:
		::KBKPHGAKHOG* IOJDPGIIDIC; // 0x18
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x20
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
