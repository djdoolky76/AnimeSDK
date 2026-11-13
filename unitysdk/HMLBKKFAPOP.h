#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define HMLBKKFAPOP_BMHFMHCENHI_OFFSET UNITYSDK_OFFSET(0x1A35AD20)
#define HMLBKKFAPOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A35AD10)
#define HMLBKKFAPOP_DPCHJCOFJKN_OFFSET UNITYSDK_OFFSET(0x1A35B4A0)
#define HMLBKKFAPOP_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x1A35B4E0)
#define HMLBKKFAPOP_KLBFBHOPMDH_OFFSET UNITYSDK_OFFSET(0x1A35B1E0)
#define HMLBKKFAPOP_LBBPHPHNKPI_OFFSET UNITYSDK_OFFSET(0x1A35AF20)
#define HMLBKKFAPOP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1A35B3C0)

inline static constexpr unsigned int HMLBKKFAPOP_TypeDefinitionIndex = 61638;

	class HMLBKKFAPOP : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Boolean INJJGMIGFFD; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BMHFMHCENHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_BMHFMHCENHI_OFFSET))(this);
		}

		::System::Void LBBPHPHNKPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_LBBPHPHNKPI_OFFSET))(this);
		}

		::System::Void KLBFBHOPMDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_KLBFBHOPMDH_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void DPCHJCOFJKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_DPCHJCOFJKN_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBKKFAPOP_HCOFMFKFMDK_OFFSET))(this);
		}

	};
