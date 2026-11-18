#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IBMFHIADHDF_CFLAEKNAFKI_FGFNHGBDDJH_OFFSET UNITYSDK_OFFSET(0x1A394E50)
#define IBMFHIADHDF_CFLAEKNAFKI_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x1A394E60)
#define IBMFHIADHDF_CFLAEKNAFKI_PMCJAKMPBMP_OFFSET UNITYSDK_OFFSET(0x1A394EC0)
#define IBMFHIADHDF_CFLAEKNAFKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A394E40)

inline static constexpr unsigned int IBMFHIADHDF_CFLAEKNAFKI_TypeDefinitionIndex = 92091;

class IBMFHIADHDF_CFLAEKNAFKI : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* KCNFHMFDOHI; // 0x18
	::System::Boolean IFGCHNPBEKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMFHIADHDF_CFLAEKNAFKI__CTOR_OFFSET))(this);
	}

	::System::Void FGFNHGBDDJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMFHIADHDF_CFLAEKNAFKI_FGFNHGBDDJH_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMFHIADHDF_CFLAEKNAFKI_KBAFCIJONFJ_OFFSET))(this);
	}

	::System::Void PMCJAKMPBMP(::System::Boolean FLJPINEGKHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBMFHIADHDF_CFLAEKNAFKI_PMCJAKMPBMP_OFFSET))(this, FLJPINEGKHM);
	}
};
