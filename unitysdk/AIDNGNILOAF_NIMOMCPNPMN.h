#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define AIDNGNILOAF_NIMOMCPNPMN_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA1E40)
#define AIDNGNILOAF_NIMOMCPNPMN_EQUALS_OFFSET UNITYSDK_OFFSET(0xEBA1C50)
#define AIDNGNILOAF_NIMOMCPNPMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEBA1D10)

	class AIDNGNILOAF_NIMOMCPNPMN : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::UInt32 BPINLJHDPKH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDNGNILOAF_NIMOMCPNPMN_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIDNGNILOAF_NIMOMCPNPMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDNGNILOAF_NIMOMCPNPMN_GETHASHCODE_OFFSET))(this);
		}

	};
