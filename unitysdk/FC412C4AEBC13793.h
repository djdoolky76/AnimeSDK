#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E10662EDBE1169DC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define FC412C4AEBC13793_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x2108D20)
#define FC412C4AEBC13793_E698F62D7C842C84_OFFSET UNITYSDK_OFFSET(0x2108CB0)
#define FC412C4AEBC13793_FDA4118AD042439E_OFFSET UNITYSDK_OFFSET(0x2108C20)
#define FC412C4AEBC13793__CTOR_OFFSET UNITYSDK_OFFSET(0x20AF980)

inline static constexpr unsigned int FC412C4AEBC13793_TypeDefinitionIndex = 8718;

class FC412C4AEBC13793 : public ::E10662EDBE1169DC
{
public:
	::System::String* A1AD49ABC0442489; // 0x30

	::System::Boolean A1E97155B145443C(::System::UInt64 F5AEFA05C9F71B82, ::System::String* F79B4D487F303AB2, ::UnityEngine::Vector3 B78356FBC32D74BD, ::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 BE38C169EB1E684C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FC412C4AEBC13793_A1E97155B145443C_OFFSET))(this, F5AEFA05C9F71B82, F79B4D487F303AB2, B78356FBC32D74BD, EB211B01816ACA79, BE38C169EB1E684C);
	}

	::System::Void FDA4118AD042439E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC412C4AEBC13793_FDA4118AD042439E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC412C4AEBC13793__CTOR_OFFSET))(this);
	}

	::System::String* E698F62D7C842C84()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC412C4AEBC13793_E698F62D7C842C84_OFFSET))(this);
	}
};
