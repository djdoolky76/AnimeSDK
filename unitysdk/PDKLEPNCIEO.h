#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PDKLEPNCIEO_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x178B94F0)
#define PDKLEPNCIEO_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x178B9410)
#define PDKLEPNCIEO_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x178B9560)
#define PDKLEPNCIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x178B9540)

inline static constexpr unsigned int PDKLEPNCIEO_TypeDefinitionIndex = 42503;

class PDKLEPNCIEO
{
public:
	::System::Int32 OGFPEPEEHLP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKLEPNCIEO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + PDKLEPNCIEO_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKLEPNCIEO_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDKLEPNCIEO_JMDEKPONKMF_OFFSET))(this, JHFKDGBCOBA);
	}
};
