#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGBNIGPJPO;
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHHGDAFEKKD_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xCF43590)
#define CHHGDAFEKKD_AHBJHKPHOKC_OFFSET UNITYSDK_OFFSET(0xCF436C0)
#define CHHGDAFEKKD_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF437F0)
#define CHHGDAFEKKD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF437E0)
#define CHHGDAFEKKD_DBCJCOGGODF_OFFSET UNITYSDK_OFFSET(0xCF43120)
#define CHHGDAFEKKD_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xCF42BC0)
#define CHHGDAFEKKD_KADJIDHNIEM_OFFSET UNITYSDK_OFFSET(0xCF42F30)

inline static constexpr unsigned int CHHGDAFEKKD_TypeDefinitionIndex = 48643;

	class CHHGDAFEKKD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_DEIAMJBMIJC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "CHHGDAFEKKD")->GetStaticField(0x2C090);
		}

		static ::System::Int32* StaticGet_BJFDNCIIEJH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHHGDAFEKKD")->GetStaticField(0x9410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHGDAFEKKD_CCTOR_OFFSET))();
		}

		static ::System::Void EGFCFCBHJJP(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_EGFCFCBHJJP_OFFSET))(a1);
		}

		static ::EnviromentSystem::EnviromentProfile* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::COGBNIGPJPO* AHBJHKPHOKC(::System::String* a1)
		{
			return ((::COGBNIGPJPO*(*)(::System::String*))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_AHBJHKPHOKC_OFFSET))(a1);
		}

		static ::System::Void DBCJCOGGODF(::System::String* a1, ::EnviromentSystem::EnviromentProfile* a2)
		{
			return ((::System::Void(*)(::System::String*, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_DBCJCOGGODF_OFFSET))(a1, a2);
		}

		static ::EnviromentSystem::EnviromentProfile* KADJIDHNIEM(::System::String* a1)
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CHHGDAFEKKD_KADJIDHNIEM_OFFSET))(a1);
		}

	};
