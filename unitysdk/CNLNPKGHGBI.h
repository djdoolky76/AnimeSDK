#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLKFBHJONFL;
namespace System { class String; }

#define CNLNPKGHGBI_AJNLHLCGPBE_OFFSET UNITYSDK_OFFSET(0x159E8A10)
#define CNLNPKGHGBI_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x159E8D40)
#define CNLNPKGHGBI__CTOR_OFFSET UNITYSDK_OFFSET(0x159E8A00)

inline static constexpr unsigned int CNLNPKGHGBI_TypeDefinitionIndex = 92498;

class CNLNPKGHGBI : public ::System::Object
{
public:
	::System::String* ONOAGAPJNCG; // 0x10
	::HLKFBHJONFL* JKHIHIBHDPH; // 0x18
	::System::Int32 IOJMEHCNGJA; // 0x20
	::System::Int32 PMGFIHJAJHL; // 0x24
	::System::Int32 MEPPPBCICGO; // 0x28
	::System::Boolean CGFLLPOCDJM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNPKGHGBI__CTOR_OFFSET))(this);
	}

	::System::Int32 AJNLHLCGPBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNPKGHGBI_AJNLHLCGPBE_OFFSET))(this);
	}

	::System::Int32 EAOFNOLGMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNPKGHGBI_EAOFNOLGMFG_OFFSET))(this);
	}
};
