#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/MD4_4757080B31DFFE01.h"

#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_DECODE_OFFSET UNITYSDK_OFFSET(0x1FBC5590)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_ENCODE_OFFSET UNITYSDK_OFFSET(0x1FBC52E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_FF_OFFSET UNITYSDK_OFFSET(0x1FBC5500)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_F_OFFSET UNITYSDK_OFFSET(0x1FBC54C0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_GG_OFFSET UNITYSDK_OFFSET(0x1FBC5530)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_G_OFFSET UNITYSDK_OFFSET(0x1FBC54D0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1FBC47B0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1FBC51A0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HH_OFFSET UNITYSDK_OFFSET(0x1FBC5560)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_H_OFFSET UNITYSDK_OFFSET(0x1FBC54E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBC4690)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_MD4TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FBC4900)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_PADDING_OFFSET UNITYSDK_OFFSET(0x1FBC5450)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_ROL_OFFSET UNITYSDK_OFFSET(0x1FBC54F0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC45E0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4Managed_35870A104F527439_TypeDefinitionIndex = 2458;

	class MD4Managed_35870A104F527439 : public ::Mono::Security::Cryptography::MD4_4757080B31DFFE01
	{
	public:
		// static const ::System::Int32 S11 = 0x3; // 0x0
		// static const ::System::Int32 S12 = 0x7; // 0x0
		// static const ::System::Int32 S13 = 0xB; // 0x0
		// static const ::System::Int32 S14 = 0x13; // 0x0
		// static const ::System::Int32 S21 = 0x3; // 0x0
		// static const ::System::Int32 S22 = 0x5; // 0x0
		// static const ::System::Int32 S23 = 0x9; // 0x0
		// static const ::System::Int32 S24 = 0xD; // 0x0
		// static const ::System::Int32 S31 = 0x3; // 0x0
		// static const ::System::Int32 S32 = 0x9; // 0x0
		// static const ::System::Int32 S33 = 0xB; // 0x0
		// static const ::System::Int32 S34 = 0xF; // 0x0
		::Il2CppArray<::System::Byte>* digest; // 0x28
		::Il2CppArray<::System::UInt32>* count; // 0x30
		::Il2CppArray<::System::Byte>* buffer; // 0x38
		::Il2CppArray<::System::UInt32>* x; // 0x40
		::Il2CppArray<::System::UInt32>* state; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* array, ::System::Int32 ibStart, ::System::Int32 cbSize)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HASHCORE_OFFSET))(this, array, ibStart, cbSize);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HASHFINAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Padding(::System::Int32 nLength)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_PADDING_OFFSET))(this, nLength);
		}

		::System::UInt32 F(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_F_OFFSET))(this, x, y, z);
		}

		::System::UInt32 G(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_G_OFFSET))(this, x, y, z);
		}

		::System::UInt32 H(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_H_OFFSET))(this, x, y, z);
		}

		::System::UInt32 ROL(::System::UInt32 x, ::System::Byte n)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_ROL_OFFSET))(this, x, n);
		}

		::System::Void FF(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_FF_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void GG(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_GG_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void HH(::System::UInt32& a, ::System::UInt32 b, ::System::UInt32 c, ::System::UInt32 d, ::System::UInt32 x, ::System::Byte s)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_HH_OFFSET))(this, a, b, c, d, x, s);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* output, ::Il2CppArray<::System::UInt32>* input)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_ENCODE_OFFSET))(this, output, input);
		}

		::System::Void Decode(::Il2CppArray<::System::UInt32>* output, ::Il2CppArray<::System::Byte>* input, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_DECODE_OFFSET))(this, output, input, index);
		}

		::System::Void MD4Transform(::Il2CppArray<::System::UInt32>* state, ::Il2CppArray<::System::Byte>* block, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4MANAGED_35870A104F527439_MD4TRANSFORM_OFFSET))(this, state, block, index);
		}
	};
}
