#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }
namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CBC_OFFSET UNITYSDK_OFFSET(0x1FD37260)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CFB_OFFSET UNITYSDK_OFFSET(0x1FD37400)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CHECKINPUT_OFFSET UNITYSDK_OFFSET(0x1FD37800)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CTS_OFFSET UNITYSDK_OFFSET(0x1FD377B0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD37090)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALDECRYPT_OFFSET UNITYSDK_OFFSET(0x1FD38360)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALENCRYPT_OFFSET UNITYSDK_OFFSET(0x1FD37FB0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FD36F70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_CANREUSETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FD370F0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1FD370E0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1FD37100)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_KEEPLASTBLOCK_OFFSET UNITYSDK_OFFSET(0x1FD37B80)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1FD37110)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_INTERNALTRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1FD37BA0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_OFB_OFFSET UNITYSDK_OFFSET(0x1FD37760)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_RANDOM_OFFSET UNITYSDK_OFFSET(0x1FD37D70)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD36FE0)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_THROWBADPADDINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FD37E40)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x1FD37930)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1FD38680)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FD37120)
#define MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD36C00)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricTransform_21397A8CF24E469D_TypeDefinitionIndex = 2471;

	class SymmetricTransform_21397A8CF24E469D : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* workout; // 0x10
		::System::Security::Cryptography::SymmetricAlgorithm* algo; // 0x18
		::Il2CppArray<::System::Byte>* workBuff; // 0x20
		::Il2CppArray<::System::Byte>* temp; // 0x28
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x30
		::Il2CppArray<::System::Byte>* temp2; // 0x38
		::System::Boolean lastBlock; // 0x40
		::System::Boolean m_disposed; // 0x41
		::System::Boolean encrypt; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 FeedBackByte; // 0x44
		::System::Int32 BlockSizeByte; // 0x48
		::System::Security::Cryptography::PaddingMode padmode; // 0x4C

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, ::System::Boolean encryption, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D__CTOR_OFFSET))(this, symmAlgo, encryption, rgbIV);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALIZE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Boolean get_CanReuseTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_CANREUSETRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void Transform(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORM_OFFSET))(this, input, output);
		}

		::System::Void CBC(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CBC_OFFSET))(this, input, output);
		}

		::System::Void CFB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CFB_OFFSET))(this, input, output);
		}

		::System::Void OFB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_OFB_OFFSET))(this, input, output);
		}

		::System::Void CTS(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CTS_OFFSET))(this, input, output);
		}

		::System::Void CheckInput(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_CHECKINPUT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Boolean get_KeepLastBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_GET_KEEPLASTBLOCK_OFFSET))(this);
		}

		::System::Int32 InternalTransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_INTERNALTRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::System::Void Random(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_RANDOM_OFFSET))(this, buffer, start, length);
		}

		::System::Void ThrowBadPaddingException(::System::Security::Cryptography::PaddingMode padding, ::System::Int32 length, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_THROWBADPADDINGEXCEPTION_OFFSET))(this, padding, length, position);
		}

		::Il2CppArray<::System::Byte>* FinalEncrypt(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALENCRYPT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::Il2CppArray<::System::Byte>* FinalDecrypt(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_FINALDECRYPT_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SYMMETRICTRANSFORM_21397A8CF24E469D_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}
	};
}
