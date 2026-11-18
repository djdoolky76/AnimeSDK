#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANAPNFPOMNG;

#define KPDAEGNMBKD_NLCHKEPJAJE_OFFSET UNITYSDK_OFFSET(0x1A2E05F0)
#define KPDAEGNMBKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2E0890)
#define KPDAEGNMBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E0880)

inline static constexpr unsigned int KPDAEGNMBKD_TypeDefinitionIndex = 84593;

class KPDAEGNMBKD : public ::System::Object
{
public:
	static ::KPDAEGNMBKD** StaticGet_NJLLMPCDOEB()
	{
		return (::KPDAEGNMBKD**)Il2CppClass::FromTypeDefinitionIndex(KPDAEGNMBKD_TypeDefinitionIndex)->GetStaticField(0x4A120);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDAEGNMBKD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDAEGNMBKD__CCTOR_OFFSET))();
	}

	::ANAPNFPOMNG* NLCHKEPJAJE(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ANAPNFPOMNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPDAEGNMBKD_NLCHKEPJAJE_OFFSET))(this, OBNIAHNMHPF);
	}
};
