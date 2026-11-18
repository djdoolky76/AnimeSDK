#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEANGJJIAOI.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define JEANGJJIAOI_FDLKKHGFOCN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1659F4C0)
#define JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1659F540)
#define JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1659F5B0)
#define JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1659F560)
#define JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1659F4B0)
#define JEANGJJIAOI_FDLKKHGFOCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1659F4A0)

inline static constexpr unsigned int JEANGJJIAOI_FDLKKHGFOCN_TypeDefinitionIndex = 92000;

class JEANGJJIAOI_FDLKKHGFOCN : public ::System::Object
{
public:
	::System::Int32 MDPILDGFNHN; // 0x10
	::MoleMole::HollowChessboard::HollowCell IDBEJJEKGDI; // 0x14
	::System::Int32 LKECIIDFBBH; // 0x20
	::JEANGJJIAOI KLHPEBKNIFB; // 0x24
	::System::Int32 LOIHOHKCAHC; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell System_Collections_Generic_IEnumerator_MoleMole_HollowChessboard_HollowCell__get_Current()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCELL__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEANGJJIAOI_FDLKKHGFOCN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
