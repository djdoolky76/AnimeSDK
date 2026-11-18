#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class KJKCHBONANM;

#define OLMDMKAAKHL_JHMKILKMJFI_OFFSET UNITYSDK_OFFSET(0xFB980C0)
#define OLMDMKAAKHL_LKAEJGAPLMJ_OFFSET UNITYSDK_OFFSET(0xFB986B0)
#define OLMDMKAAKHL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xFB98650)
#define OLMDMKAAKHL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xFB98060)
#define OLMDMKAAKHL__CTOR_OFFSET UNITYSDK_OFFSET(0xFB986A0)

inline static constexpr unsigned int OLMDMKAAKHL_TypeDefinitionIndex = 50455;

class OLMDMKAAKHL : public ::System::Object
{
public:
	::KJKCHBONANM* NDEBPJFBHHK; // 0x10
	::System::Single GPDCBHEPDGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMDMKAAKHL__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single LLBEKEFONPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLMDMKAAKHL_PLPONJAKNEB_OFFSET))(this, LLBEKEFONPC);
	}

	::System::Boolean JHMKILKMJFI(::UnityEngine::Vector4& HGENMIBAKDN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + OLMDMKAAKHL_JHMKILKMJFI_OFFSET))(this, HGENMIBAKDN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMDMKAAKHL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void LKAEJGAPLMJ(::KJKCHBONANM* JIHDHGPNHGI)
	{
		return ((::System::Void(*)(::PVOID, ::KJKCHBONANM*))((::PBYTE)hIl2Cpp + OLMDMKAAKHL_LKAEJGAPLMJ_OFFSET))(this, JIHDHGPNHGI);
	}
};
