#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIDNGNILOAF_NIMOMCPNPMN;
namespace System { class String; }

#define AIDNGNILOAF___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9C950)
#define AIDNGNILOAF___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET UNITYSDK_OFFSET(0xEB9C9E0)

inline static constexpr unsigned int AIDNGNILOAF___c__DisplayClass3_0_TypeDefinitionIndex = 72942;

	class AIDNGNILOAF___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::UInt32 missionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDNGNILOAF___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMCVInfo_b__0(::AIDNGNILOAF_NIMOMCPNPMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIDNGNILOAF_NIMOMCPNPMN*))((::PBYTE)hIl2Cpp + AIDNGNILOAF___C__DISPLAYCLASS3_0__GETMCVINFO_B__0_OFFSET))(this, a1);
		}

	};
