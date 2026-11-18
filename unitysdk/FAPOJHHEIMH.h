#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOHHIICFBPC;
class GIPCMLEONLI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAPOJHHEIMH_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x11AB3D30)
#define FAPOJHHEIMH_FELMIJKPANK_OFFSET UNITYSDK_OFFSET(0x11AB39D0)
#define FAPOJHHEIMH_FJHKALHIJDJ_OFFSET UNITYSDK_OFFSET(0x11AB3C20)
#define FAPOJHHEIMH_PHIKBNCEKNM_OFFSET UNITYSDK_OFFSET(0x11AB3B90)
#define FAPOJHHEIMH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x11AB3F50)
#define FAPOJHHEIMH__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB3900)

inline static constexpr unsigned int FAPOJHHEIMH_TypeDefinitionIndex = 82336;

class FAPOJHHEIMH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GIPCMLEONLI*>* LNCPFHFENMK; // 0x10
	::System::Collections::Generic::List_1<::GIPCMLEONLI*>* PMGNEPJOJAE; // 0x18
	::System::Boolean JODHKHDPAHN; // 0x20
	::System::Boolean ABIBNALHOPC; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOJHHEIMH__CTOR_OFFSET))(this);
	}

	::System::Void FELMIJKPANK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_FELMIJKPANK_OFFSET))(this);
	}

	::System::Void PHIKBNCEKNM(::GIPCMLEONLI* JJKPDAMGJDM)
	{
		return ((::System::Void(*)(::PVOID, ::GIPCMLEONLI*))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_PHIKBNCEKNM_OFFSET))(this, JJKPDAMGJDM);
	}

	::System::Void FJHKALHIJDJ(::GIPCMLEONLI* JJKPDAMGJDM)
	{
		return ((::System::Void(*)(::PVOID, ::GIPCMLEONLI*))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_FJHKALHIJDJ_OFFSET))(this, JJKPDAMGJDM);
	}

	::System::Boolean COHDMPBBMPO(::FOHHIICFBPC* HNMLKGAINKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::FOHHIICFBPC*))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_COHDMPBBMPO_OFFSET))(this, HNMLKGAINKL);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}
};
