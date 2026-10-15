#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define LEFAHIJNFKL_CCAFOLAEOKK_OFFSET UNITYSDK_OFFSET(0x1DD6E240)
#define LEFAHIJNFKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD6F080)
#define LEFAHIJNFKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6DED0)
#define LEFAHIJNFKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD6E080)
#define LEFAHIJNFKL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DD6DFE0)
#define LEFAHIJNFKL_FMJGDDBCAGA_OFFSET UNITYSDK_OFFSET(0x1DD6EE20)
#define LEFAHIJNFKL_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1DD6E100)
#define LEFAHIJNFKL_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1DD6EB50)
#define LEFAHIJNFKL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DD6DF80)
#define LEFAHIJNFKL_PAMDKBMJCEJ_OFFSET UNITYSDK_OFFSET(0x1DD6EFB0)

	class LEFAHIJNFKL : public ::System::Security::Cryptography::MD5
	{
	public:
		::Il2CppArray<::System::UInt32>* CKCOCCFLIJL; // 0x28
		::Il2CppArray<::System::Byte>* AAPBNCPAEFN; // 0x30
		::Il2CppArray<::System::UInt32>* EGHEGMHDADG; // 0x38
		::System::Int32 KNANCKDNDGC; // 0x40
		::System::Byte _padding0[0x4];
		::System::UInt64 NPBFLDGDPAD; // 0x48
		static ::Il2CppArray<::System::UInt32>** StaticGet_ADLMPMKKAEP()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "LEFAHIJNFKL")->GetStaticField(0x2C960);
		}

		// static const ::System::Object GCCEMOGMMAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEFAHIJNFKL_CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_HASHCORE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_HASHFINAL_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_INITIALIZE_OFFSET))(this);
		}

		::System::Void CCAFOLAEOKK(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_CCAFOLAEOKK_OFFSET))(this, a1, a2);
		}

		::System::Void FMJGDDBCAGA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_FMJGDDBCAGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAMDKBMJCEJ(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + LEFAHIJNFKL_PAMDKBMJCEJ_OFFSET))(this, a1, a2, a3);
		}

	};
