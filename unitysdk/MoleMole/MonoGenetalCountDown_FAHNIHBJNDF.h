#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGenetalCountDown; }

#define MOLEMOLE_MONOGENETALCOUNTDOWN_FAHNIHBJNDF_ABCHAGDKGDJ_OFFSET UNITYSDK_OFFSET(0x12B647A0)
#define MOLEMOLE_MONOGENETALCOUNTDOWN_FAHNIHBJNDF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B64740)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGenetalCountDown_FAHNIHBJNDF_TypeDefinitionIndex = 69935;

	class MonoGenetalCountDown_FAHNIHBJNDF : public ::System::Object
	{
	public:
		::MoleMole::MonoGenetalCountDown* KLHPEBKNIFB; // 0x10
		::System::Int32 MDLNMDJMMJP; // 0x18
		::System::Boolean MHNOIDBLDDP; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 DMIAICJPPDL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_FAHNIHBJNDF__CTOR_OFFSET))(this);
		}

		::System::Void ABCHAGDKGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENETALCOUNTDOWN_FAHNIHBJNDF_ABCHAGDKGDJ_OFFSET))(this);
		}
	};
}
