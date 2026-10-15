#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define AIDNGNILOAF_NIMOMCPNPMN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9CC30)
#define AIDNGNILOAF_NIMOMCPNPMN_EQUALS_OFFSET UNITYSDK_OFFSET(0xEB9CA40)
#define AIDNGNILOAF_NIMOMCPNPMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEB9CB00)

inline static constexpr unsigned int AIDNGNILOAF_NIMOMCPNPMN_TypeDefinitionIndex = 72941;

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
