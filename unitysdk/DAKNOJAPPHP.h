#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNPOMIAMOI;
class JLJJIKLHADM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class FJAMFCDJKAL_2;

#define DAKNOJAPPHP_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1EBE4650)
#define DAKNOJAPPHP_AOHMKOAFBKB_OFFSET UNITYSDK_OFFSET(0x1EBE45E0)
#define DAKNOJAPPHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBE4440)
#define DAKNOJAPPHP_DNPAAMPDELP_OFFSET UNITYSDK_OFFSET(0x1EBE4900)
#define DAKNOJAPPHP_FLHNGDLANDC_1_OFFSET UNITYSDK_OFFSET(0x1EBE4820)
#define DAKNOJAPPHP_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1EBE46F0)
#define DAKNOJAPPHP_GHEHMMFGCGI_OFFSET UNITYSDK_OFFSET(0x1EBE4780)
#define DAKNOJAPPHP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1EBE48B0)
#define DAKNOJAPPHP_OKJHELFEGGJ_OFFSET UNITYSDK_OFFSET(0x1EBE4A00)
#define DAKNOJAPPHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE4320)

inline static constexpr unsigned int DAKNOJAPPHP_TypeDefinitionIndex = 28739;

class DAKNOJAPPHP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* CPKBDLCKFEI; // 0x10
	::JLJJIKLHADM* MGKIEAPPNBJ; // 0x18
	::FJAMFCDJKAL_2<::System::UInt32, ::JGNPOMIAMOI*>* EAIPOAFJNNI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKNOJAPPHP__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_DISPOSE_OFFSET))(this);
	}

	::System::Void AOHMKOAFBKB(::System::Int32 MHFELDGOIEJ, ::System::UInt32 AFDNFFLBEHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_AOHMKOAFBKB_OFFSET))(this, MHFELDGOIEJ, AFDNFFLBEHN);
	}

	::System::Void ANPBCLAFCJB(::JGNPOMIAMOI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JGNPOMIAMOI*))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_ANPBCLAFCJB_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void FLHNGDLANDC(::System::UInt32 AFDNFFLBEHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_FLHNGDLANDC_OFFSET))(this, AFDNFFLBEHN);
	}

	::JGNPOMIAMOI* GHEHMMFGCGI(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::JGNPOMIAMOI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_GHEHMMFGCGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void FLHNGDLANDC_1(::JGNPOMIAMOI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JGNPOMIAMOI*))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_FLHNGDLANDC_1_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Boolean DNPAAMPDELP(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_DNPAAMPDELP_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void OKJHELFEGGJ(::System::Int32 MHFELDGOIEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAKNOJAPPHP_OKJHELFEGGJ_OFFSET))(this, MHFELDGOIEJ);
	}
};
