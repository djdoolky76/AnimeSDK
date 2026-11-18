#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHLLIMBNFLF.h"

#define FHHGPOMNNCE_CMLLNOGGHFI_AGPEMOEJDOD_OFFSET UNITYSDK_OFFSET(0x171493B0)
#define FHHGPOMNNCE_CMLLNOGGHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x171493A0)

inline static constexpr unsigned int FHHGPOMNNCE_CMLLNOGGHFI_TypeDefinitionIndex = 43228;

class FHHGPOMNNCE_CMLLNOGGHFI : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_CMLLNOGGHFI__CTOR_OFFSET))(this);
	}

	::System::Boolean AGPEMOEJDOD(::CHLLIMBNFLF HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::CHLLIMBNFLF))((::PBYTE)hIl2Cpp + FHHGPOMNNCE_CMLLNOGGHFI_AGPEMOEJDOD_OFFSET))(this, HFMHOELKCAJ);
	}
};
