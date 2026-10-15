#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;
class KKPNEOIKLJG;

#define DDKICGOLIGF_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E2FB0)
#define DDKICGOLIGF_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xE4E3130)
#define DDKICGOLIGF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE4E2FC0)
#define DDKICGOLIGF__START_B__4_0_OFFSET UNITYSDK_OFFSET(0xE4E3170)

inline static constexpr unsigned int DDKICGOLIGF_TypeDefinitionIndex = 60339;

	class DDKICGOLIGF : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::KKPNEOIKLJG* IKIOEJGPAJE; // 0x20
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
