#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMPLKJPGNIP_EIPOPBPHDNP.h"
#include "unitysdk/LMFGEDJIFIO.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define GMPLKJPGNIP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D03AE0)

inline static constexpr unsigned int GMPLKJPGNIP_TypeDefinitionIndex = 73061;

class GMPLKJPGNIP : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::MoleMole::HollowChessboard::HollowCell, ::LMFGEDJIFIO>* MOLPNNBFNJG; // 0x10
	::GMPLKJPGNIP_EIPOPBPHDNP ELCILEBAIJM; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID LKDJGGNEEAL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPLKJPGNIP__CTOR_OFFSET))(this);
	}
};
