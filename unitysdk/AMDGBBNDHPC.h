#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMDGBBNDHPC_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x11BC3960)
#define AMDGBBNDHPC_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x11BC3CE0)
#define AMDGBBNDHPC_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x11BC3D70)
#define AMDGBBNDHPC_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0x11BC3E00)
#define AMDGBBNDHPC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x11BC3B20)
#define AMDGBBNDHPC__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC38A0)

inline static constexpr unsigned int AMDGBBNDHPC_TypeDefinitionIndex = 44390;

class AMDGBBNDHPC : public ::KBGGKIJMICI
{
public:
	::System::Int32 KKGGACLGGPN; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AMDGBBNDHPC__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDGBBNDHPC_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDGBBNDHPC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDGBBNDHPC_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDGBBNDHPC_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + AMDGBBNDHPC_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
	}
};
