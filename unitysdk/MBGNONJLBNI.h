#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;

#define MBGNONJLBNI_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x1D6A4850)
#define MBGNONJLBNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4920)
#define MBGNONJLBNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4910)

inline static constexpr unsigned int MBGNONJLBNI_TypeDefinitionIndex = 93304;

class MBGNONJLBNI : public ::System::Object
{
public:
	static ::MBGNONJLBNI** StaticGet_NJLLMPCDOEB()
	{
		return (::MBGNONJLBNI**)Il2CppClass::FromTypeDefinitionIndex(MBGNONJLBNI_TypeDefinitionIndex)->GetStaticField(0x52630);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGNONJLBNI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGNONJLBNI__CCTOR_OFFSET))();
	}

	::ANAPNFPOMNG* NLCHKEPJAJE(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ANAPNFPOMNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBGNONJLBNI_NLCHKEPJAJE_OFFSET))(this, OBNIAHNMHPF);
	}
};
