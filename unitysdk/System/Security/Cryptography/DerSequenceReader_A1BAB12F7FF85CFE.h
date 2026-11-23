#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8311488A80A8AFC;
namespace System { template <typename T> class Func_1; }
namespace System::Globalization { class FB77E72ECA75A305; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_B8E20C093AD83921_OFFSET UNITYSDK_OFFSET(0x3EFEEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_E67B0022C578C30B_OFFSET UNITYSDK_OFFSET(0x3EFEEF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_F9347BC69B2ADEA7_OFFSET UNITYSDK_OFFSET(0x3EFEF30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EFF180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DerSequenceReader_A1BAB12F7FF85CFE_TypeDefinitionIndex = 15198;

	class DerSequenceReader_A1BAB12F7FF85CFE : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::DerSequenceReader_A1BAB12F7FF85CFE** StaticGet_FB0A7EB463FA294A()
		{
			return (::System::Security::Cryptography::DerSequenceReader_A1BAB12F7FF85CFE**)Il2CppClass::FromTypeDefinitionIndex(DerSequenceReader_A1BAB12F7FF85CFE_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::F8311488A80A8AFC*>** StaticGet_A316828028E81342()
		{
			return (::System::Func_1<::F8311488A80A8AFC*>**)Il2CppClass::FromTypeDefinitionIndex(DerSequenceReader_A1BAB12F7FF85CFE_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_1<::F8311488A80A8AFC*>** StaticGet_A21A03175ECDA192()
		{
			return (::System::Func_1<::F8311488A80A8AFC*>**)Il2CppClass::FromTypeDefinitionIndex(DerSequenceReader_A1BAB12F7FF85CFE_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_1<::System::Globalization::FB77E72ECA75A305*>** StaticGet_FE977689DC02925B()
		{
			return (::System::Func_1<::System::Globalization::FB77E72ECA75A305*>**)Il2CppClass::FromTypeDefinitionIndex(DerSequenceReader_A1BAB12F7FF85CFE_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE__CTOR_OFFSET))(this);
		}

		::F8311488A80A8AFC* B8E20C093AD83921()
		{
			return ((::F8311488A80A8AFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_B8E20C093AD83921_OFFSET))(this);
		}

		::F8311488A80A8AFC* E67B0022C578C30B()
		{
			return ((::F8311488A80A8AFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_E67B0022C578C30B_OFFSET))(this);
		}

		::System::Globalization::FB77E72ECA75A305* F9347BC69B2ADEA7()
		{
			return ((::System::Globalization::FB77E72ECA75A305*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_A1BAB12F7FF85CFE_F9347BC69B2ADEA7_OFFSET))(this);
		}
	};
}
