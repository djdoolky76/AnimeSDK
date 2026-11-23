#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x3B8B190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x3B8B190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3B8B200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x3B8B280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x3B8B240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricAlgorithm_TypeDefinitionIndex = 11137;

	class AsymmetricAlgorithm : public ::System::Object
	{
	public:
		::System::Int32 KeySizeValue; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM__CTOR_OFFSET))(this);
		}

		::System::String* ToXmlString(::System::Boolean A8C4FBC67474989C)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_TOXMLSTRING_OFFSET))(this, A8C4FBC67474989C);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_DISPOSE_1_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FromXmlString(::System::String* ED4509AD4A414C3C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICALGORITHM_FROMXMLSTRING_OFFSET))(this, ED4509AD4A414C3C);
		}
	};
}
