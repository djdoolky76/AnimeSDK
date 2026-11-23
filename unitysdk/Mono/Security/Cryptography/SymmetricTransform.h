#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET UNITYSDK_OFFSET(0x3CF9FF0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET UNITYSDK_OFFSET(0x3CFA170)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x3CFA400)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET UNITYSDK_OFFSET(0x3CFA3B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3CFA5A0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET UNITYSDK_OFFSET(0x3CFA610)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET UNITYSDK_OFFSET(0x3CFA950)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x3CFACB0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1678550)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET UNITYSDK_OFFSET(0x3CFBA70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x3CFAD20)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET UNITYSDK_OFFSET(0x3CFAF10)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET UNITYSDK_OFFSET(0x3CFAF60)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3CFB030)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3CFB0A0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x3CFB1F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x3CFB510)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3CFB5E0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3CFB760)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricTransform_TypeDefinitionIndex = 10747;

	class SymmetricTransform : public ::System::Object
	{
	public:
		::System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x10
		::System::Boolean encrypt; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 BlockSizeByte; // 0x1C
		::Il2CppArray<::System::Byte>* temp; // 0x20
		::Il2CppArray<::System::Byte>* temp2; // 0x28
		::Il2CppArray<::System::Byte>* workBuff; // 0x30
		::Il2CppArray<::System::Byte>* workout; // 0x38
		::System::Security::Cryptography::PaddingMode padmode; // 0x40
		::System::Int32 FeedBackByte; // 0x44
		::System::Boolean m_disposed; // 0x48
		::System::Boolean lastBlock; // 0x49
		::System::Byte _padding1[0x6];
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x50

		::System::Void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode F5B33D06A6A6D3C1, ::System::Int32 A96B867D8BBB8B00, ::System::Int32 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_THROWBADPADDINGEXCEPTION_OFFSET))(this, F5B33D06A6A6D3C1, A96B867D8BBB8B00, EB211B01816ACA79);
		}

		::Il2CppArray<::System::Byte>* FinalEncrypt(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALENCRYPT_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>* FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_INTERNALTRANSFORMBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Void OFB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_OFB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::Il2CppArray<::System::Byte>* FinalDecrypt(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALDECRYPT_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>* FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void CBC(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CBC_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::System::Boolean get_KeepLastBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_KEEPLASTBLOCK_OFFSET))(this);
		}

		::System::Void CFB(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CFB_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::System::Void Random(::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915, ::System::Int32 BC37316376A565D9, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_RANDOM_OFFSET))(this, F6C2EBBDFCAEF915, BC37316376A565D9, A96B867D8BBB8B00);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_FINALIZE_OFFSET))(this);
		}

		::System::Void CTS(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CTS_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* F4B3A157CE4CC26F, ::System::Boolean A3CC5519DC5E6E5C, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM__CTOR_OFFSET))(this, F4B3A157CE4CC26F, A3CC5519DC5E6E5C, A424CDF1AD9A5133);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_CHECKINPUT_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		::System::Void Transform(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::Il2CppArray<::System::Byte>* B7269378254B3BAC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_TRANSFORM_OFFSET))(this, AF4717A1A80FD60F, B7269378254B3BAC);
		}
	};
}
