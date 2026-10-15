#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;
class KKPNEOIKLJG;

#define DDKICGOLIGF_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E39F0)
#define DDKICGOLIGF_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xE4E3B70)
#define DDKICGOLIGF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE4E3A00)
#define DDKICGOLIGF__START_B__4_0_OFFSET UNITYSDK_OFFSET(0xE4E3BB0)

	class DDKICGOLIGF : public ::EFNJLACKEDH
	{
	public:
		::KKPNEOIKLJG* IKIOEJGPAJE; // 0x18
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x20
		::System::Boolean INJJGMIGFFD; // 0x28
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2, ::KKPNEOIKLJG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*, ::KKPNEOIKLJG*))((::PBYTE)hIl2Cpp + DDKICGOLIGF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKICGOLIGF_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKICGOLIGF_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void _Start_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKICGOLIGF__START_B__4_0_OFFSET))(this);
		}

	};
