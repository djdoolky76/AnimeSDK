#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMNEMKAGLAN.h"

class DNGEKLMPBAC;
namespace MoleMole::Config { class ConfigUIEndFunctionNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOIEHMMDJMP_DCIBHCJKHIC_OFFSET UNITYSDK_OFFSET(0x15679740)
#define LOIEHMMDJMP_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x156797C0)
#define LOIEHMMDJMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15679550)

inline static constexpr unsigned int LOIEHMMDJMP_TypeDefinitionIndex = 50351;

class LOIEHMMDJMP : public ::NMNEMKAGLAN
{
public:
	// static const ::System::Int32 NPIGNHPELJF = -0x2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* KGKBANCLOHN; // 0x18

	::System::Void _ctor(::DNGEKLMPBAC* ECKMPOAABAL, ::MoleMole::Config::ConfigUIEndFunctionNode* MLIAJIKBDFN)
	{
		return ((::System::Void(*)(::PVOID, ::DNGEKLMPBAC*, ::MoleMole::Config::ConfigUIEndFunctionNode*))((::PBYTE)hIl2Cpp + LOIEHMMDJMP__CTOR_OFFSET))(this, ECKMPOAABAL, MLIAJIKBDFN);
	}

	::System::Void DCIBHCJKHIC(::System::Int32 AMECHBAOPII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOIEHMMDJMP_DCIBHCJKHIC_OFFSET))(this, AMECHBAOPII);
	}

	::System::Boolean PAJNCNHJDKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIEHMMDJMP_PAJNCNHJDKM_OFFSET))(this);
	}
};
