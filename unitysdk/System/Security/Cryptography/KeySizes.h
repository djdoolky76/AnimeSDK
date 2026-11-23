#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x3BCB2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET UNITYSDK_OFFSET(0x3BCB370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F58DF0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeySizes_TypeDefinitionIndex = 11216;

	class KeySizes : public ::System::Object
	{
	public:
		::System::Int32 m_minSize; // 0x10
		::System::Int32 m_maxSize; // 0x14
		::System::Int32 m_skipSize; // 0x18

		::System::Boolean IsLegal(::System::Int32 E8D5C504FEE1DCC0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET))(this, E8D5C504FEE1DCC0);
		}

		::System::Void _ctor(::System::Int32 A70F1BE5E1251A4A, ::System::Int32 FD9642755CDCB117, ::System::Int32 F68E1281988C68A1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES__CTOR_OFFSET))(this, A70F1BE5E1251A4A, FD9642755CDCB117, F68E1281988C68A1);
		}

		static ::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Security::Cryptography::KeySizes*>* B4EB20878DF3D300, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Security::Cryptography::KeySizes*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET))(B4EB20878DF3D300, F54AF627638DE3C9);
		}
	};
}
