#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define MOMLGOPPNHP_IJGEHBNBIMK_BOJCKALEHEN_OFFSET UNITYSDK_OFFSET(0x177D7950)
#define MOMLGOPPNHP_IJGEHBNBIMK__CTOR_OFFSET UNITYSDK_OFFSET(0x177D7940)

inline static constexpr unsigned int MOMLGOPPNHP_IJGEHBNBIMK_TypeDefinitionIndex = 50862;

class MOMLGOPPNHP_IJGEHBNBIMK : public ::System::Object
{
public:
	::System::Action_2<::MoleMole::EntityHandle, ::System::Boolean>* ALIJOJGCPKN; // 0x10
	::MoleMole::EntityHandle CBNJBECJDHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IJGEHBNBIMK__CTOR_OFFSET))(this);
	}

	::System::Void BOJCKALEHEN(::System::UInt32 KKLNDHIPPIB, ::System::Boolean FOPGFEMGPNO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_IJGEHBNBIMK_BOJCKALEHEN_OFFSET))(this, KKLNDHIPPIB, FOPGFEMGPNO);
	}
};
