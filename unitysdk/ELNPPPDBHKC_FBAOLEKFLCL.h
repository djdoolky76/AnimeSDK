#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELNPPPDBHKC;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define ELNPPPDBHKC_FBAOLEKFLCL_CCAOPLICGFF_OFFSET UNITYSDK_OFFSET(0x12363600)
#define ELNPPPDBHKC_FBAOLEKFLCL_GBDDAKDDACD_OFFSET UNITYSDK_OFFSET(0x123636D0)
#define ELNPPPDBHKC_FBAOLEKFLCL_NEBIDFJFLFC_OFFSET UNITYSDK_OFFSET(0x123636F0)
#define ELNPPPDBHKC_FBAOLEKFLCL__CTOR_OFFSET UNITYSDK_OFFSET(0x123635F0)

inline static constexpr unsigned int ELNPPPDBHKC_FBAOLEKFLCL_TypeDefinitionIndex = 48238;

class ELNPPPDBHKC_FBAOLEKFLCL : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* COKHBPKODGI; // 0x10
	::ELNPPPDBHKC* AFKKKJKJEIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_FBAOLEKFLCL__CTOR_OFFSET))(this);
	}

	::System::Void CCAOPLICGFF(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_FBAOLEKFLCL_CCAOPLICGFF_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void GBDDAKDDACD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_FBAOLEKFLCL_GBDDAKDDACD_OFFSET))(this);
	}

	::System::Void NEBIDFJFLFC(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_FBAOLEKFLCL_NEBIDFJFLFC_OFFSET))(this, HFMHOELKCAJ);
	}
};
