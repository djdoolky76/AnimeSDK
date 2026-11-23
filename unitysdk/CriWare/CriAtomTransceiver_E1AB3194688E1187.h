#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define CRIWARE_CRIATOMTRANSCEIVER_E1AB3194688E1187_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define CRIWARE_CRIATOMTRANSCEIVER_E1AB3194688E1187__CTOR_OFFSET UNITYSDK_OFFSET(0x2ACB140)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomTransceiver_E1AB3194688E1187_TypeDefinitionIndex = 19178;

	class CriAtomTransceiver_E1AB3194688E1187 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_E1AB3194688E1187__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt16 F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_E1AB3194688E1187_INVOKE_OFFSET))(this, F5AEFA05C9F71B82);
		}
	};
}
