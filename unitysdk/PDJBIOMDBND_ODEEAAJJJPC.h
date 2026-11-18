#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;

#define PDJBIOMDBND_ODEEAAJJJPC_AHJPDHHEGFB_OFFSET UNITYSDK_OFFSET(0x13A8AE40)
#define PDJBIOMDBND_ODEEAAJJJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8AE30)

inline static constexpr unsigned int PDJBIOMDBND_ODEEAAJJJPC_TypeDefinitionIndex = 41132;

class PDJBIOMDBND_ODEEAAJJJPC : public ::System::Object
{
public:
	::IEHMCPFFJLG* GALHCEFMJOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJBIOMDBND_ODEEAAJJJPC__CTOR_OFFSET))(this);
	}

	::System::Boolean AHJPDHHEGFB(::IEHMCPFFJLG* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + PDJBIOMDBND_ODEEAAJJJPC_AHJPDHHEGFB_OFFSET))(this, IMLLDOHDCNC);
	}
};
