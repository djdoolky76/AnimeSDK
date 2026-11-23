#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0x3BB9B40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET UNITYSDK_OFFSET(0x3BB9CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3BBA310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3BBA450)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET UNITYSDK_OFFSET(0x3BBA560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3BBB1F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x3BBB2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x3BBBBB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x3BBBEB0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1Internal_TypeDefinitionIndex = 11153;

	class SHA1Internal : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _H; // 0x10
		::System::UInt64 count; // 0x18
		::Il2CppArray<::System::Byte>* _ProcessingBuffer; // 0x20
		::System::Int32 _ProcessingBufferCount; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* buff; // 0x30

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALIZE_OFFSET))(this);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* EFD90D39604601F6, ::System::Int32 A985F8C5DF08C68A, ::System::Int32 B1F2419A701C8F03)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHCORE_OFFSET))(this, EFD90D39604601F6, A985F8C5DF08C68A, B1F2419A701C8F03);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::UInt32 B0A56A8B8381106F)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F);
		}

		static ::System::Void InitialiseBuff(::Il2CppArray<::System::UInt32>* A548CD70BEDE481C, ::Il2CppArray<::System::Byte>* AF4717A1A80FD60F, ::System::UInt32 B0A56A8B8381106F)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_INITIALISEBUFF_OFFSET))(A548CD70BEDE481C, AF4717A1A80FD60F, B0A56A8B8381106F);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_HASHFINAL_OFFSET))(this);
		}

		::System::Void AddLength(::System::UInt64 A96B867D8BBB8B00, ::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915, ::System::Int32 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_ADDLENGTH_OFFSET))(this, A96B867D8BBB8B00, F6C2EBBDFCAEF915, EB211B01816ACA79);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFinalBlock(::Il2CppArray<::System::Byte>* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_PROCESSFINALBLOCK_OFFSET))(this, FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		static ::System::Void FillBuff(::Il2CppArray<::System::UInt32>* A548CD70BEDE481C)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1INTERNAL_FILLBUFF_OFFSET))(A548CD70BEDE481C);
		}
	};
}
