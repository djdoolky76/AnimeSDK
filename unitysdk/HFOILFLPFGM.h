#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFGMBAOFEKD.h"
#include "unitysdk/System/Object.h"

class GHBIDFBNIKN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFOILFLPFGM_FPGAELLCGDB_OFFSET UNITYSDK_OFFSET(0x15DA6730)
#define HFOILFLPFGM_LFFAJJJBJLO_OFFSET UNITYSDK_OFFSET(0x15DA66E0)
#define HFOILFLPFGM_NFNGCOFFFEB_OFFSET UNITYSDK_OFFSET(0x15DA6780)
#define HFOILFLPFGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15DA6690)
#define HFOILFLPFGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6680)

inline static constexpr unsigned int HFOILFLPFGM_TypeDefinitionIndex = 57403;

class HFOILFLPFGM : public ::System::Object
{
public:
	::GHBIDFBNIKN* NEMFGLOCKNO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* LBFFOJIBANF; // 0x18

	::System::Void _ctor(::GHBIDFBNIKN* EDCJHEGHNEN)
	{
		return ((::System::Void(*)(::PVOID, ::GHBIDFBNIKN*))((::PBYTE)hIl2Cpp + HFOILFLPFGM__CTOR_OFFSET))(this, EDCJHEGHNEN);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOILFLPFGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LFFAJJJBJLO(::System::String* INHDAAAMAAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFOILFLPFGM_LFFAJJJBJLO_OFFSET))(this, INHDAAAMAAL);
	}

	::JFGMBAOFEKD FPGAELLCGDB(::System::String* INHDAAAMAAL)
	{
		return ((::JFGMBAOFEKD(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFOILFLPFGM_FPGAELLCGDB_OFFSET))(this, INHDAAAMAAL);
	}

	::JFGMBAOFEKD NFNGCOFFFEB(::System::String* INHDAAAMAAL)
	{
		return ((::JFGMBAOFEKD(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HFOILFLPFGM_NFNGCOFFFEB_OFFSET))(this, INHDAAAMAAL);
	}
};
