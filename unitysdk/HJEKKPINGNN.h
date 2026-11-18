#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGKLEOOEBCA.h"
#include "unitysdk/System/Object.h"

class OGJNHDLJIBM;
namespace System { class EventArgs; }

#define HJEKKPINGNN_FDPLBGJCJJC_OFFSET UNITYSDK_OFFSET(0x140BB6C0)
#define HJEKKPINGNN_MLKHMMFLNOG_OFFSET UNITYSDK_OFFSET(0x140BB370)
#define HJEKKPINGNN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x140BB2C0)
#define HJEKKPINGNN__CTOR_OFFSET UNITYSDK_OFFSET(0x140BB2B0)

inline static constexpr unsigned int HJEKKPINGNN_TypeDefinitionIndex = 56329;

class HJEKKPINGNN : public ::System::Object
{
public:
	::OGJNHDLJIBM* IACAHMDOGAK; // 0x10
	::CGKLEOOEBCA DOPCAEHHOMA; // 0x18
	::System::Int32 AGOKMCFDJIA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKKPINGNN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKKPINGNN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void MLKHMMFLNOG(::System::Int32 EHDLEOPFKDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJEKKPINGNN_MLKHMMFLNOG_OFFSET))(this, EHDLEOPFKDN);
	}

	::System::Void FDPLBGJCJJC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HJEKKPINGNN_FDPLBGJCJJC_OFFSET))(this, KOIBHLHLMFC);
	}
};
