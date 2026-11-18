#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENNFKLCFDGP_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14183420)
#define ENNFKLCFDGP_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14183900)
#define ENNFKLCFDGP_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x141837A0)
#define ENNFKLCFDGP_HCOFGLPHLBF_OFFSET UNITYSDK_OFFSET(0x14183830)
#define ENNFKLCFDGP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x141835E0)
#define ENNFKLCFDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x141833E0)

inline static constexpr unsigned int ENNFKLCFDGP_TypeDefinitionIndex = 63237;

class ENNFKLCFDGP : public ::KBGGKIJMICI
{
public:
	::System::Int32 KBKLFMGFGDF; // 0x38

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + ENNFKLCFDGP__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNFKLCFDGP_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNFKLCFDGP_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNFKLCFDGP_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void HCOFGLPHLBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ENNFKLCFDGP_HCOFGLPHLBF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNFKLCFDGP_GPGLNOBDBGJ_OFFSET))(this);
	}
};
