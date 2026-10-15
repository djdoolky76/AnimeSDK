#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJOILDLGOC;
class EOHOBJGGMNP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EOHOBJGGMNP_AHMKIKJKGCJ_OFFSET UNITYSDK_OFFSET(0x155B6410)
#define EOHOBJGGMNP_BLFJCGIHKLO_OFFSET UNITYSDK_OFFSET(0x155B6220)
#define EOHOBJGGMNP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155B5A80)
#define EOHOBJGGMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x155B5B10)
#define EOHOBJGGMNP_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x155B5B50)
#define EOHOBJGGMNP_HGLPBAFALHJ_OFFSET UNITYSDK_OFFSET(0x155B66D0)
#define EOHOBJGGMNP_IECIGPPKPLH_OFFSET UNITYSDK_OFFSET(0x155B5D50)
#define EOHOBJGGMNP_JIFDPGHJHHN_OFFSET UNITYSDK_OFFSET(0x155B5DA0)
#define EOHOBJGGMNP_JKKLMMGEHHE_OFFSET UNITYSDK_OFFSET(0x155B60D0)
#define EOHOBJGGMNP_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x155B65C0)
#define EOHOBJGGMNP_NKPOPPEGBPO_OFFSET UNITYSDK_OFFSET(0x155B5EB0)
#define EOHOBJGGMNP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x155B5C00)

inline static constexpr unsigned int EOHOBJGGMNP_TypeDefinitionIndex = 72124;

	class EOHOBJGGMNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ANJOILDLGOC*>* KKOLIICPGKK; // 0x10
		::System::Int32 GCODFLGCMAG; // 0x18
		::System::Int32 DJKBKDNIMJA; // 0x1C
		::System::Boolean OIKIFFCNCKF; // 0x20
		::System::Boolean IMAJDDKPKIK; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_CTOR_OFFSET))(this);
		}

		static ::EOHOBJGGMNP* BPLPBPMEODA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::EOHOBJGGMNP*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void EGFCFCBHJJP(::ANJOILDLGOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IECIGPPKPLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_IECIGPPKPLH_OFFSET))(this);
		}

		::ANJOILDLGOC* JIFDPGHJHHN(::System::Boolean a1)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_JIFDPGHJHHN_OFFSET))(this, a1);
		}

		::System::Void AHMKIKJKGCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_AHMKIKJKGCJ_OFFSET))(this);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Int32 HGLPBAFALHJ(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_HGLPBAFALHJ_OFFSET))(this, a1);
		}

		::ANJOILDLGOC* NKPOPPEGBPO()
		{
			return ((::ANJOILDLGOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_NKPOPPEGBPO_OFFSET))(this);
		}

		::ANJOILDLGOC* JKKLMMGEHHE()
		{
			return ((::ANJOILDLGOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_JKKLMMGEHHE_OFFSET))(this);
		}

		::ANJOILDLGOC* BLFJCGIHKLO()
		{
			return ((::ANJOILDLGOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHOBJGGMNP_BLFJCGIHKLO_OFFSET))(this);
		}

	};
