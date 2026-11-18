#pragma once
#include "unitysdk/unitysdk.h"

class HGAAPGADLAM;

#define NNLHKIIEDJL_KCJLCMFGLDA_OFFSET UNITYSDK_OFFSET(0x18AE5E20)
#define NNLHKIIEDJL_NAACDDELELA_OFFSET UNITYSDK_OFFSET(0x18AE5EA0)
#define NNLHKIIEDJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE5E10)
#define NNLHKIIEDJL__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE5DF0)

inline static constexpr unsigned int NNLHKIIEDJL_TypeDefinitionIndex = 7846;

class NNLHKIIEDJL
{
public:
	static ::System::Boolean* StaticGet_MBPJGNPKGLF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NNLHKIIEDJL_TypeDefinitionIndex)->GetStaticField(0x3A80);
	}
	::HGAAPGADLAM* HBPHHDPBPBG; // 0x10
	::HGAAPGADLAM* PMAFNAHMCOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHKIIEDJL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNLHKIIEDJL__CCTOR_OFFSET))();
	}

	::HGAAPGADLAM* KCJLCMFGLDA()
	{
		return ((::HGAAPGADLAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHKIIEDJL_KCJLCMFGLDA_OFFSET))(this);
	}

	static ::HGAAPGADLAM* NAACDDELELA()
	{
		return ((::HGAAPGADLAM*(*)())((::PBYTE)hIl2Cpp + NNLHKIIEDJL_NAACDDELELA_OFFSET))();
	}
};
