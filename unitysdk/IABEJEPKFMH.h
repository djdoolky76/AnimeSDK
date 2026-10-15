#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define IABEJEPKFMH_AHIHJJMCHDO_OFFSET UNITYSDK_OFFSET(0x15DEF4E0)
#define IABEJEPKFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DEF150)
#define IABEJEPKFMH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x15DEF520)
#define IABEJEPKFMH_JGLJIPJIBDK_OFFSET UNITYSDK_OFFSET(0x15DEF160)
#define IABEJEPKFMH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15DEF1F0)

inline static constexpr unsigned int IABEJEPKFMH_TypeDefinitionIndex = 60338;

	class IABEJEPKFMH : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Boolean INJJGMIGFFD; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + IABEJEPKFMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean JGLJIPJIBDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABEJEPKFMH_JGLJIPJIBDK_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABEJEPKFMH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void AHIHJJMCHDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABEJEPKFMH_AHIHJJMCHDO_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABEJEPKFMH_HCOFMFKFMDK_OFFSET))(this);
		}

	};
