#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGJGOEDFCMB;
class CIIPKPFKHMF;
namespace System { class Object; }
namespace System { class String; }

#define CIIPKPFKHMF_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DD29820)
#define CIIPKPFKHMF_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD296D0)
#define CIIPKPFKHMF_BPBPHKFHKAN_OFFSET UNITYSDK_OFFSET(0x1DD29560)
#define CIIPKPFKHMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD295E0)
#define CIIPKPFKHMF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD29970)
#define CIIPKPFKHMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD298E0)
#define CIIPKPFKHMF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD29740)
#define CIIPKPFKHMF_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1DD29650)
#define CIIPKPFKHMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD298F0)
#define CIIPKPFKHMF_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1DD295F0)
#define CIIPKPFKHMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD29A60)

inline static constexpr unsigned int CIIPKPFKHMF_TypeDefinitionIndex = 6559;

	class CIIPKPFKHMF : public ::System::Object
	{
	public:
		::CGJGOEDFCMB* JNEDOMGOMCC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_CTOR_OFFSET))(this);
		}

		static ::CIIPKPFKHMF* BPBPHKFHKAN()
		{
			return ((::CIIPKPFKHMF*(*)())((::PBYTE)hIl2Cpp + CIIPKPFKHMF_BPBPHKFHKAN_OFFSET))();
		}

		::System::Single MNGGAOFNGIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_FHAPPCADGCE_OFFSET))(this, a1);
		}

		static ::System::Single BBNJCKPKPDN(::CIIPKPFKHMF* a1)
		{
			return ((::System::Single(*)(::CIIPKPFKHMF*))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::CIIPKPFKHMF* BBNJCKPKPDN_1(::System::Single a1)
		{
			return ((::CIIPKPFKHMF*(*)(::System::Single))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_BBNJCKPKPDN_1_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::CIIPKPFKHMF* a1, ::CIIPKPFKHMF* a2)
		{
			return ((::System::Boolean(*)(::CIIPKPFKHMF*, ::CIIPKPFKHMF*))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::CIIPKPFKHMF* a1, ::CIIPKPFKHMF* a2)
		{
			return ((::System::Boolean(*)(::CIIPKPFKHMF*, ::CIIPKPFKHMF*))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIPKPFKHMF_TOSTRING_OFFSET))(this);
		}

	};
