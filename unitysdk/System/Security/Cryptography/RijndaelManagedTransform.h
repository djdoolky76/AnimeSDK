#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET UNITYSDK_OFFSET(0x3D09AA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET UNITYSDK_OFFSET(0x3D09870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x3D0AB40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3D0AC60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET UNITYSDK_OFFSET(0x3D0AFA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET UNITYSDK_OFFSET(0x3D0AD90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET UNITYSDK_OFFSET(0x3D0BE30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x1678550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x16B0640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x18E4420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET UNITYSDK_OFFSET(0x3D0C530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x3D0C560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET UNITYSDK_OFFSET(0x3D0D8B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET UNITYSDK_OFFSET(0x3D0D8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET UNITYSDK_OFFSET(0x3D0D8D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET UNITYSDK_OFFSET(0x3D0C5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x3D0C710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x3D0CB30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D0CF00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D0D180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x3D0D150)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransform_TypeDefinitionIndex = 10798;

	class RijndaelManagedTransform : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_Sbox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Rcon()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_T()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_TF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iT()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iTF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		::System::Security::Cryptography::CipherMode m_cipherMode; // 0x10
		::System::Security::Cryptography::PaddingMode m_paddingValue; // 0x14
		::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode; // 0x18
		::System::Int32 m_blockSizeBits; // 0x1C
		::System::Int32 m_blockSizeBytes; // 0x20
		::System::Int32 m_inputBlockSize; // 0x24
		::System::Int32 m_outputBlockSize; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* m_encryptKeyExpansion; // 0x30
		::Il2CppArray<::System::Int32>* m_decryptKeyExpansion; // 0x38
		::System::Int32 m_Nr; // 0x40
		::System::Int32 m_Nb; // 0x44
		::System::Int32 m_Nk; // 0x48
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Int32>* m_encryptindex; // 0x50
		::Il2CppArray<::System::Int32>* m_decryptindex; // 0x58
		::Il2CppArray<::System::Int32>* m_IV; // 0x60
		::Il2CppArray<::System::Int32>* m_lastBlockBuffer; // 0x68
		::Il2CppArray<::System::Byte>* m_depadBuffer; // 0x70
		::Il2CppArray<::System::Byte>* m_shiftRegister; // 0x78

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		static ::System::Int32 SubWord(::System::Int32 B35BBBE7E39341A2)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET))(B35BBBE7E39341A2);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 EncryptData(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>*& FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4, ::System::Security::Cryptography::PaddingMode A07B43D97054D03B, ::System::Boolean ECBC375F8B7B2D1C)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4, A07B43D97054D03B, ECBC375F8B7B2D1C);
		}

		static ::System::Int32 MulX(::System::Int32 BB8C609F76620E45)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET))(BB8C609F76620E45);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET))(this);
		}

		static ::System::Int32 rot2(::System::Int32 E6A305882BEE348D)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET))(E6A305882BEE348D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET))();
		}

		::System::Int32 DecryptData(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>*& FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4, ::System::Security::Cryptography::PaddingMode A07B43D97054D03B, ::System::Boolean ECBC375F8B7B2D1C)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4, A07B43D97054D03B, ECBC375F8B7B2D1C);
		}

		::System::Void GenerateKeyExpansion(::Il2CppArray<::System::Byte>* B1D080F3192B401E)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET))(this, B1D080F3192B401E);
		}

		static ::System::Int32 rot3(::System::Int32 E6A305882BEE348D)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET))(E6A305882BEE348D);
		}

		::System::Void Enc(::PVOID FC5B81F99F6D8EBD, ::PVOID A2E1D01A93B49A7D, ::PVOID T, ::PVOID B79DDB6B68F6641C, ::PVOID A97ECA8CEDCB2C14, ::PVOID F6CA7498820BE9F0)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET))(this, FC5B81F99F6D8EBD, A2E1D01A93B49A7D, T, B79DDB6B68F6641C, A97ECA8CEDCB2C14, F6CA7498820BE9F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		static ::System::Int32 rot1(::System::Int32 E6A305882BEE348D)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET))(E6A305882BEE348D);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* B1D080F3192B401E, ::System::Security::Cryptography::CipherMode A84D57260767D5BD, ::Il2CppArray<::System::Byte>* A424CDF1AD9A5133, ::System::Int32 BF1F2AC7F0F9D477, ::System::Int32 A4EB5BF5CD5944AD, ::System::Security::Cryptography::PaddingMode FEAF4447DC612FCE, ::System::Security::Cryptography::RijndaelManagedTransformMode ADED0DF6A29CE4DC)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_1_OFFSET))(this, B1D080F3192B401E, A84D57260767D5BD, A424CDF1AD9A5133, BF1F2AC7F0F9D477, A4EB5BF5CD5944AD, FEAF4447DC612FCE, ADED0DF6A29CE4DC);
		}

		::System::Void Dec(::PVOID F1B48DA4192C253F, ::PVOID BACD0B33BE30AFAC, ::PVOID FA9306A4D37F7018, ::PVOID F80C3A83C1078F8E, ::PVOID A97ECA8CEDCB2C14, ::PVOID F6CA7498820BE9F0)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET))(this, F1B48DA4192C253F, BACD0B33BE30AFAC, FA9306A4D37F7018, F80C3A83C1078F8E, A97ECA8CEDCB2C14, F6CA7498820BE9F0);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5, ::Il2CppArray<::System::Byte>* FA8BB333D6131BE8, ::System::Int32 A9499CC3C978CAF4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5, FA8BB333D6131BE8, A9499CC3C978CAF4);
		}
	};
}
