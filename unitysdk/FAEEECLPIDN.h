#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define FAEEECLPIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1565BD00)
#define FAEEECLPIDN_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x1565BDD0)
#define FAEEECLPIDN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1565BD10)
#define FAEEECLPIDN_PPIAIMIJMFB_OFFSET UNITYSDK_OFFSET(0x1565BE10)

inline static constexpr unsigned int FAEEECLPIDN_TypeDefinitionIndex = 60343;

	class FAEEECLPIDN : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Boolean INJJGMIGFFD; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + FAEEECLPIDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEEECLPIDN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEEECLPIDN_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void PPIAIMIJMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEEECLPIDN_PPIAIMIJMFB_OFFSET))(this);
		}

	};
