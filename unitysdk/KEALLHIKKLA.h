#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KEALLHIKKLA_JPAGCBDGONB.h"
#include "unitysdk/KEALLHIKKLA_LEIDHLPGBDN.h"

class CCDFJCPDCLB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEALLHIKKLA_ANFFNLNENHM_OFFSET UNITYSDK_OFFSET(0x18A64E50)
#define KEALLHIKKLA_GLKFDBOCPGC_OFFSET UNITYSDK_OFFSET(0x18A64E70)
#define KEALLHIKKLA_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x18A64F10)
#define KEALLHIKKLA_LEKFKMMEOFJ_OFFSET UNITYSDK_OFFSET(0x18A64D40)
#define KEALLHIKKLA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A64C90)

inline static constexpr unsigned int KEALLHIKKLA_TypeDefinitionIndex = 55578;

class KEALLHIKKLA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CAEEFNDBEKK; // 0x10
	::System::Collections::Generic::List_1<::CCDFJCPDCLB*>* ICOFLGMPMLC; // 0x18
	::System::Int32 GDIDPEIICMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA__CTOR_OFFSET))(this);
	}

	::System::Void LEKFKMMEOFJ(::System::Int32 GMKIAPNGFFM, ::CCDFJCPDCLB* PAAKENELHJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CCDFJCPDCLB*))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEKFKMMEOFJ_OFFSET))(this, GMKIAPNGFFM, PAAKENELHJL);
	}

	::KEALLHIKKLA_LEIDHLPGBDN GLKFDBOCPGC(::System::Int32 GMKIAPNGFFM)
	{
		return ((::KEALLHIKKLA_LEIDHLPGBDN(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEALLHIKKLA_GLKFDBOCPGC_OFFSET))(this, GMKIAPNGFFM);
	}

	::System::Int32 ANFFNLNENHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_ANFFNLNENHM_OFFSET))(this);
	}

	::KEALLHIKKLA_JPAGCBDGONB KJGFHDAMHGO()
	{
		return ((::KEALLHIKKLA_JPAGCBDGONB(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_KJGFHDAMHGO_OFFSET))(this);
	}
};
