#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBJBHFINOOG_KAOPLFCLKEE.h"
#include "unitysdk/JGELKBLKFHE.h"

namespace System { class Action; }

#define IBJBHFINOOG_BJDOAGJPHMM_OFFSET UNITYSDK_OFFSET(0x140D80F0)
#define IBJBHFINOOG_JBKKNMFADPN_OFFSET UNITYSDK_OFFSET(0x140D7F80)
#define IBJBHFINOOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x140D7F70)
#define IBJBHFINOOG__CTOR_OFFSET UNITYSDK_OFFSET(0x140D7F60)

inline static constexpr unsigned int IBJBHFINOOG_TypeDefinitionIndex = 65336;

class IBJBHFINOOG : public ::JGELKBLKFHE
{
public:
	static ::System::Int32* StaticGet_HHEGANCPILH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IBJBHFINOOG_TypeDefinitionIndex)->GetStaticField(0x137E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJBHFINOOG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBJBHFINOOG__CCTOR_OFFSET))();
	}

	::System::Boolean JBKKNMFADPN(::System::Action* ANFIMABPLIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IBJBHFINOOG_JBKKNMFADPN_OFFSET))(this, ANFIMABPLIG);
	}

	::IBJBHFINOOG_KAOPLFCLKEE BJDOAGJPHMM(::System::Int32 NACGJJKHEJE)
	{
		return ((::IBJBHFINOOG_KAOPLFCLKEE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBJBHFINOOG_BJDOAGJPHMM_OFFSET))(this, NACGJJKHEJE);
	}
};
