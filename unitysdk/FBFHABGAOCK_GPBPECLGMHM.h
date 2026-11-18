#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define FBFHABGAOCK_GPBPECLGMHM_KGMKNABDNLG_OFFSET UNITYSDK_OFFSET(0x17138AC0)
#define FBFHABGAOCK_GPBPECLGMHM_LLIOMLCHHCJ_OFFSET UNITYSDK_OFFSET(0x17138F70)
#define FBFHABGAOCK_GPBPECLGMHM__CTOR_OFFSET UNITYSDK_OFFSET(0x17138AB0)

inline static constexpr unsigned int FBFHABGAOCK_GPBPECLGMHM_TypeDefinitionIndex = 67659;

class FBFHABGAOCK_GPBPECLGMHM : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::System::String* EENKGIMOCEO; // 0x18
	::DJPBMMDAFKB FNCIDGGOECA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_GPBPECLGMHM__CTOR_OFFSET))(this);
	}

	::System::Void KGMKNABDNLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_GPBPECLGMHM_KGMKNABDNLG_OFFSET))(this);
	}

	::System::Void LLIOMLCHHCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_GPBPECLGMHM_LLIOMLCHHCJ_OFFSET))(this);
	}
};
