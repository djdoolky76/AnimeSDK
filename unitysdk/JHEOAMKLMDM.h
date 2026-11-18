#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HPOJPBMEICH;
class KFGGFDDILAG;
namespace MoleMole::Battle { class Entity; }

#define JHEOAMKLMDM_BFAIKBLGJMG_OFFSET UNITYSDK_OFFSET(0x165AA6A0)
#define JHEOAMKLMDM_CFBGCJLONPM_OFFSET UNITYSDK_OFFSET(0x165AAC50)

inline static constexpr unsigned int JHEOAMKLMDM_TypeDefinitionIndex = 87652;

class JHEOAMKLMDM : public ::System::Object
{
public:
	static ::System::Boolean BFAIKBLGJMG(::HPOJPBMEICH* DFMKILICPFB, ::System::Int32 AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::KFGGFDDILAG* NBENLHJGNFN)
	{
		return ((::System::Boolean(*)(::HPOJPBMEICH*, ::System::Int32, ::MoleMole::Battle::Entity*, ::KFGGFDDILAG*))((::PBYTE)hIl2Cpp + JHEOAMKLMDM_BFAIKBLGJMG_OFFSET))(DFMKILICPFB, AELLPLBJELA, KECKGDFIALJ, NBENLHJGNFN);
	}

	static ::System::Boolean CFBGCJLONPM(::HPOJPBMEICH* DFMKILICPFB, ::System::Int32 AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::KFGGFDDILAG* NBENLHJGNFN)
	{
		return ((::System::Boolean(*)(::HPOJPBMEICH*, ::System::Int32, ::MoleMole::Battle::Entity*, ::KFGGFDDILAG*))((::PBYTE)hIl2Cpp + JHEOAMKLMDM_CFBGCJLONPM_OFFSET))(DFMKILICPFB, AELLPLBJELA, KECKGDFIALJ, NBENLHJGNFN);
	}
};
