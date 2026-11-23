#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define CINEMACHINETOUCHINPUTMAPPER_E8B386AACB86A1AA_OFFSET UNITYSDK_OFFSET(0x2A3BE70)
#define CINEMACHINETOUCHINPUTMAPPER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2A3BF70)
#define CINEMACHINETOUCHINPUTMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x2A3C020)

inline static constexpr unsigned int CinemachineTouchInputMapper_TypeDefinitionIndex = 18308;

class CinemachineTouchInputMapper : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single TouchSensitivityX; // 0x20
	::System::Single TouchSensitivityY; // 0x24
	::System::String* TouchXInputMapTo; // 0x28
	::System::String* TouchYInputMapTo; // 0x30

	::System::Single E8B386AACB86A1AA(::System::String* B39C7935DB5DA332)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_E8B386AACB86A1AA_OFFSET))(this, B39C7935DB5DA332);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER__CTOR_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_F328E4D8818B1E12_OFFSET))(this);
	}
};
