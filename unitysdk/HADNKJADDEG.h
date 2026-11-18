#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class GNKKDGGFNBO;

#define HADNKJADDEG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1816BDE0)
#define HADNKJADDEG_DIIEJDGGOAL_OFFSET UNITYSDK_OFFSET(0x1816BFD0)
#define HADNKJADDEG_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1816BE00)
#define HADNKJADDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1816BDF0)

inline static constexpr unsigned int HADNKJADDEG_TypeDefinitionIndex = 50998;

class HADNKJADDEG : public ::HGOBBALJENJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADNKJADDEG__CTOR_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HADNKJADDEG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADNKJADDEG_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void DIIEJDGGOAL(::GNKKDGGFNBO* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::GNKKDGGFNBO*))((::PBYTE)hIl2Cpp + HADNKJADDEG_DIIEJDGGOAL_OFFSET))(this, HNOPAJLDCFB);
	}
};
