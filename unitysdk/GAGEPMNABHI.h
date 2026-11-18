#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAGEPMNABHI_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0xBB7C080)
#define GAGEPMNABHI_CMKNEGCPMFC_OFFSET UNITYSDK_OFFSET(0xBB7C490)
#define GAGEPMNABHI_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0xBB7C4E0)
#define GAGEPMNABHI_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0xBB7C400)
#define GAGEPMNABHI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0xBB7C240)
#define GAGEPMNABHI__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7C040)

inline static constexpr unsigned int GAGEPMNABHI_TypeDefinitionIndex = 45554;

class GAGEPMNABHI : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + GAGEPMNABHI__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGEPMNABHI_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGEPMNABHI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGEPMNABHI_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void CMKNEGCPMFC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GAGEPMNABHI_CMKNEGCPMFC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGEPMNABHI_GPGLNOBDBGJ_OFFSET))(this);
	}
};
