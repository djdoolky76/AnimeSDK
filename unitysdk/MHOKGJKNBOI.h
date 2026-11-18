#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHOKGJKNBOI_PFNIIMHIBGF_OFFSET UNITYSDK_OFFSET(0x14DE7100)
#define MHOKGJKNBOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE7060)

inline static constexpr unsigned int MHOKGJKNBOI_TypeDefinitionIndex = 54985;

class MHOKGJKNBOI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CCKDILBMNPG; // 0x10
	::System::Single CEDNBLOEINL; // 0x18
	::System::Single LMCCBPEEPPB; // 0x1C
	::MoleMole::Level::RatingType LNELAFFCDDA; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* LGIEFOBAADH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MHOKGJKNBOI__CTOR_OFFSET))(this, LGIEFOBAADH);
	}

	::System::Void PFNIIMHIBGF(::System::Single OGFNGHEHLGH, ::MoleMole::Level::RatingType& NILNNELOMCG, ::System::Single& PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + MHOKGJKNBOI_PFNIIMHIBGF_OFFSET))(this, OGFNGHEHLGH, NILNNELOMCG, PMGFIHJAJHL);
	}
};
