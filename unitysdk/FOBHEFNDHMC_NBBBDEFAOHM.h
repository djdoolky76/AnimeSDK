#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FIPBHKNPGHP.h"

class LNDAFDMCAKO;
class PMFINBMNPCK;
class PNHPELCKOHH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOBHEFNDHMC_NBBBDEFAOHM_OELCBMKHKHH_OFFSET UNITYSDK_OFFSET(0x1E10EAA0)
#define FOBHEFNDHMC_NBBBDEFAOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10EA90)

inline static constexpr unsigned int FOBHEFNDHMC_NBBBDEFAOHM_TypeDefinitionIndex = 94444;

class FOBHEFNDHMC_NBBBDEFAOHM : public ::System::Object
{
public:
	::PMFINBMNPCK* HPEMFJDOAKL; // 0x10
	::PNHPELCKOHH* GEEHGDABNJF; // 0x18
	::LNDAFDMCAKO* LIBKIGOMIJA; // 0x20
	::System::Int32 ECAFPALMHLI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHEFNDHMC_NBBBDEFAOHM__CTOR_OFFSET))(this);
	}

	::System::Void OELCBMKHKHH(::System::Collections::Generic::List_1<::FIPBHKNPGHP>* HKGNKCHDEFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FIPBHKNPGHP>*))((::PBYTE)hIl2Cpp + FOBHEFNDHMC_NBBBDEFAOHM_OELCBMKHKHH_OFFSET))(this, HKGNKCHDEFG);
	}
};
