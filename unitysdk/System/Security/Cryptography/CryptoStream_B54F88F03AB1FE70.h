#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FC967CD7DF340967;
namespace System { template <typename T> class Func_1; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70_F6A029A154C38E1C_OFFSET UNITYSDK_OFFSET(0x3CA4EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CA4F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_B54F88F03AB1FE70_TypeDefinitionIndex = 11699;

	class CryptoStream_B54F88F03AB1FE70 : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::CryptoStream_B54F88F03AB1FE70** StaticGet_FB0A7EB463FA294A()
		{
			return (::System::Security::Cryptography::CryptoStream_B54F88F03AB1FE70**)Il2CppClass::FromTypeDefinitionIndex(CryptoStream_B54F88F03AB1FE70_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::FC967CD7DF340967*>** StaticGet_EF7857B4CDD30F95()
		{
			return (::System::Func_1<::FC967CD7DF340967*>**)Il2CppClass::FromTypeDefinitionIndex(CryptoStream_B54F88F03AB1FE70_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70__CTOR_OFFSET))(this);
		}

		::FC967CD7DF340967* F6A029A154C38E1C()
		{
			return ((::FC967CD7DF340967*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_B54F88F03AB1FE70_F6A029A154C38E1C_OFFSET))(this);
		}
	};
}
