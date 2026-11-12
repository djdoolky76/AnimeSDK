#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define GELNKBNABNG_CCAFOLAEOKK_OFFSET UNITYSDK_OFFSET(0x1EF5F4D0)
#define GELNKBNABNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF5FF30)
#define GELNKBNABNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5E930)
#define GELNKBNABNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF5EAC0)
#define GELNKBNABNG_DLMDFPMDBBC_OFFSET UNITYSDK_OFFSET(0x1EF5F5F0)
#define GELNKBNABNG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EF5EA30)
#define GELNKBNABNG_FMJGDDBCAGA_OFFSET UNITYSDK_OFFSET(0x1EF5F160)
#define GELNKBNABNG_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1EF5EB20)
#define GELNKBNABNG_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1EF5EE90)
#define GELNKBNABNG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF5E9D0)
#define GELNKBNABNG_PAMDKBMJCEJ_OFFSET UNITYSDK_OFFSET(0x1EF5FE60)

inline static constexpr unsigned int GELNKBNABNG_TypeDefinitionIndex = 6389;

	class GELNKBNABNG : public ::System::Security::Cryptography::MD5
	{
	public:
		::Il2CppArray<::System::Byte>* AAPBNCPAEFN; // 0x28
		::Il2CppArray<::System::UInt32>* EGHEGMHDADG; // 0x30
		::System::Int32 KNANCKDNDGC; // 0x38
		::System::Byte _padding0[0x4];
		::System::UInt64 NPBFLDGDPAD; // 0x40
		static ::Il2CppArray<::System::UInt32>** StaticGet_ADLMPMKKAEP()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "GELNKBNABNG")->GetStaticField(0x309C0);
		}

		// static const ::System::Object GCCEMOGMMAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNKBNABNG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GELNKBNABNG_CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNKBNABNG_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GELNKBNABNG_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GELNKBNABNG_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNKBNABNG_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELNKBNABNG_INITIALIZE_OFFSET))(this);
		}

		::System::Void CCAFOLAEOKK(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GELNKBNABNG_CCAFOLAEOKK_OFFSET))(this, a1, a2);
		}

		::System::Void DLMDFPMDBBC(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + GELNKBNABNG_DLMDFPMDBBC_OFFSET))(this, a1);
		}

		::System::Void FMJGDDBCAGA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GELNKBNABNG_FMJGDDBCAGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAMDKBMJCEJ(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + GELNKBNABNG_PAMDKBMJCEJ_OFFSET))(this, a1, a2, a3);
		}

	};
