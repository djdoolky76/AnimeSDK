#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGDPIAOLDPB_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0xFF6EC40)
#define BGDPIAOLDPB_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0xFF6F270)
#define BGDPIAOLDPB_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0xFF6F1E0)
#define BGDPIAOLDPB_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0xFF6F300)
#define BGDPIAOLDPB_JFELOJLHDGB_OFFSET UNITYSDK_OFFSET(0xFF6F3E0)
#define BGDPIAOLDPB_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0xFF6EF10)
#define BGDPIAOLDPB__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6EB00)

inline static constexpr unsigned int BGDPIAOLDPB_TypeDefinitionIndex = 69466;

class BGDPIAOLDPB : public ::KBGGKIJMICI
{
public:
	::System::Int32 LLDMOGGEDOD; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BGDPIAOLDPB__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void JFELOJLHDGB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BGDPIAOLDPB_JFELOJLHDGB_OFFSET))(this, KOIBHLHLMFC);
	}
};
