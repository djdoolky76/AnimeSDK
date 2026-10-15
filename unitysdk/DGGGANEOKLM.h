#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGGGANEOKLM;
class EEOKELPPECF;
namespace System { class Object; }

#define DGGGANEOKLM_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD334B0)
#define DGGGANEOKLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD32F70)
#define DGGGANEOKLM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD33710)
#define DGGGANEOKLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD33650)
#define DGGGANEOKLM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD33540)
#define DGGGANEOKLM_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1DD2E450)
#define DGGGANEOKLM_GDCGKGHFECN_OFFSET UNITYSDK_OFFSET(0x1DD2E050)
#define DGGGANEOKLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD33660)
#define DGGGANEOKLM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1DD2E250)
#define DGGGANEOKLM_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1DD2E350)
#define DGGGANEOKLM_MPDLGBHIFHF_OFFSET UNITYSDK_OFFSET(0x1DD2E3E0)

inline static constexpr unsigned int DGGGANEOKLM_TypeDefinitionIndex = 6563;

	class DGGGANEOKLM : public ::System::Object
	{
	public:
		::EEOKELPPECF* JNEDOMGOMCC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGANEOKLM_CTOR_OFFSET))(this);
		}

		static ::DGGGANEOKLM* GDCGKGHFECN()
		{
			return ((::DGGGANEOKLM*(*)())((::PBYTE)hIl2Cpp + DGGGANEOKLM_GDCGKGHFECN_OFFSET))();
		}

		::System::Void MPDLGBHIFHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGANEOKLM_MPDLGBHIFHF_OFFSET))(this);
		}

		::System::Single MNGGAOFNGIP(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGGGANEOKLM_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGGGANEOKLM_FHAPPCADGCE_OFFSET))(this, a1);
		}

		static ::System::Single BBNJCKPKPDN(::DGGGANEOKLM* a1)
		{
			return ((::System::Single(*)(::DGGGANEOKLM*))((::PBYTE)hIl2Cpp + DGGGANEOKLM_BBNJCKPKPDN_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGGGANEOKLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGANEOKLM_GETHASHCODE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGGANEOKLM_HADOHLNHHGB_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::DGGGANEOKLM* a1, ::DGGGANEOKLM* a2)
		{
			return ((::System::Boolean(*)(::DGGGANEOKLM*, ::DGGGANEOKLM*))((::PBYTE)hIl2Cpp + DGGGANEOKLM_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::DGGGANEOKLM* a1, ::DGGGANEOKLM* a2)
		{
			return ((::System::Boolean(*)(::DGGGANEOKLM*, ::DGGGANEOKLM*))((::PBYTE)hIl2Cpp + DGGGANEOKLM_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
