#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CspProviderFlags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x3D3B3B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D3B200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3D3B1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3D3B150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x3D3B340)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspParameters_TypeDefinitionIndex = 10940;

	class CspParameters : public ::System::Object
	{
	public:
		::System::Int32 ProviderType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ProviderName; // 0x18
		::System::String* KeyContainerName; // 0x20
		::System::Int32 KeyNumber; // 0x28
		::System::Int32 m_flags; // 0x2C

		::System::Void _ctor(::System::Int32 A438FC36B5125E4E, ::System::String* BD558FD4ADD98C64, ::System::String* B6CA9FEFBF2EE616)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_OFFSET))(this, A438FC36B5125E4E, BD558FD4ADD98C64, B6CA9FEFBF2EE616);
		}

		::System::Void _ctor_1(::System::Int32 E0EC87D426E17F00, ::System::String* A202759CB8AFB9F4, ::System::String* A1BFD644E7426E79, ::System::Security::Cryptography::CspProviderFlags ABDE0F2A254CEB88)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_1_OFFSET))(this, E0EC87D426E17F00, A202759CB8AFB9F4, A1BFD644E7426E79, ABDE0F2A254CEB88);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_2_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Security::Cryptography::CspProviderFlags E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspProviderFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_3(::System::Int32 A438FC36B5125E4E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS__CTOR_3_OFFSET))(this, A438FC36B5125E4E);
		}
	};
}
