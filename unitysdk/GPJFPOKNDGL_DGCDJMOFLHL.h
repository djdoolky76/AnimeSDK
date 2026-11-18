#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define GPJFPOKNDGL_DGCDJMOFLHL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x17ADD430)
#define GPJFPOKNDGL_DGCDJMOFLHL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17ADD4D0)
#define GPJFPOKNDGL_DGCDJMOFLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD420)

inline static constexpr unsigned int GPJFPOKNDGL_DGCDJMOFLHL_TypeDefinitionIndex = 46172;

class GPJFPOKNDGL_DGCDJMOFLHL : public ::System::Object
{
public:
	::HOCDHMEPPEG OLOGMMGAPCB; // 0x10
	::HOCDHMEPPEG DEAPFEBCKKJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJFPOKNDGL_DGCDJMOFLHL__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GPJFPOKNDGL_DGCDJMOFLHL_AAHMACBDCPN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LIDNPLMPHAL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GPJFPOKNDGL_DGCDJMOFLHL_LIDNPLMPHAL_OFFSET))(this, KOIBHLHLMFC);
	}
};
