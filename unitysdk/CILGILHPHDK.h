#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIODFGELPEN;
class DFBKEIBIDFJ;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CILGILHPHDK_AOHLIKBCDFL_OFFSET UNITYSDK_OFFSET(0x18DD83D0)
#define CILGILHPHDK_BLIKMOKMJPG_OFFSET UNITYSDK_OFFSET(0x18DD8500)
#define CILGILHPHDK_EIACMKIBBPH_OFFSET UNITYSDK_OFFSET(0x18DD8B10)
#define CILGILHPHDK_GEFPBLPFHLI_OFFSET UNITYSDK_OFFSET(0x18DD8F60)
#define CILGILHPHDK_NCNFEBFEGGN_OFFSET UNITYSDK_OFFSET(0x18DD88E0)
#define CILGILHPHDK__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD83C0)

inline static constexpr unsigned int CILGILHPHDK_TypeDefinitionIndex = 42553;

class CILGILHPHDK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILGILHPHDK__CTOR_OFFSET))(this);
	}

	static ::System::Void AOHLIKBCDFL(::BIODFGELPEN* GGBICJJADDF, ::System::UInt32& NDNCBGMKGFN, ::System::UInt32& JGDAHIOOOKH)
	{
		return ((::System::Void(*)(::BIODFGELPEN*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CILGILHPHDK_AOHLIKBCDFL_OFFSET))(GGBICJJADDF, NDNCBGMKGFN, JGDAHIOOOKH);
	}

	static ::System::Void BLIKMOKMJPG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILGILHPHDK_BLIKMOKMJPG_OFFSET))();
	}

	static ::System::Void NCNFEBFEGGN(::DFBKEIBIDFJ* OMBDOOOMGMI)
	{
		return ((::System::Void(*)(::DFBKEIBIDFJ*))((::PBYTE)hIl2Cpp + CILGILHPHDK_NCNFEBFEGGN_OFFSET))(OMBDOOOMGMI);
	}

	static ::System::Void EIACMKIBBPH(::System::Boolean JKEIGNHKJGD)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CILGILHPHDK_EIACMKIBBPH_OFFSET))(JKEIGNHKJGD);
	}

	static ::System::Void GEFPBLPFHLI(::MoleMole::UIControllerContextBase* MCFFADFBEJH, ::System::Action_1<::System::Action*>* GEINFFNPPBL)
	{
		return ((::System::Void(*)(::MoleMole::UIControllerContextBase*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + CILGILHPHDK_GEFPBLPFHLI_OFFSET))(MCFFADFBEJH, GEINFFNPPBL);
	}
};
