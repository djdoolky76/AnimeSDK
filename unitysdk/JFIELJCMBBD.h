#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PACAPDPIGMM;

#define JFIELJCMBBD_KJCLJKHNNHE_OFFSET UNITYSDK_OFFSET(0x1C35C160)
#define JFIELJCMBBD_MAMNIGKOFLN_OFFSET UNITYSDK_OFFSET(0x1C35C270)
#define JFIELJCMBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35C150)

inline static constexpr unsigned int JFIELJCMBBD_TypeDefinitionIndex = 74145;

class JFIELJCMBBD : public ::System::Object
{
public:
	::PACAPDPIGMM* DFMKILICPFB; // 0x10
	::System::Boolean AKPBNILAGPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIELJCMBBD__CTOR_OFFSET))(this);
	}

	::System::Void KJCLJKHNNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIELJCMBBD_KJCLJKHNNHE_OFFSET))(this);
	}

	::System::Boolean MAMNIGKOFLN(::System::Object* HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFIELJCMBBD_MAMNIGKOFLN_OFFSET))(this, HNOPAJLDCFB);
	}
};
