#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPFEBIAPPCM_GFNLKNAEMGG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPFEBIAPPCM_GKAPFACKBAM_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x18314D40)
#define CPFEBIAPPCM_GKAPFACKBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18314D30)

inline static constexpr unsigned int CPFEBIAPPCM_GKAPFACKBAM_TypeDefinitionIndex = 76951;

class CPFEBIAPPCM_GKAPFACKBAM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* AAPLGHCHAJN; // 0x10
	::CPFEBIAPPCM_GFNLKNAEMGG* FGBNBFHOKAA; // 0x18
	::System::UInt64 LBCNACHKPGB; // 0x20
	::System::UInt32 OCMPLGJGECG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_GKAPFACKBAM__CTOR_OFFSET))(this);
	}

	::System::Boolean AAHMACBDCPN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_GKAPFACKBAM_AAHMACBDCPN_OFFSET))(this, KECKGDFIALJ);
	}
};
