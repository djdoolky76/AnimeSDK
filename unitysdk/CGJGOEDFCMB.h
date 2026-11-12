#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGJGOEDFCMB;
namespace System { class Random; }

#define CGJGOEDFCMB_CIIGGPAMEIO_OFFSET UNITYSDK_OFFSET(0x1EF1B060)
#define CGJGOEDFCMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF1B070)
#define CGJGOEDFCMB_DBNKCOKCFPJ_OFFSET UNITYSDK_OFFSET(0x1EF1B3C0)
#define CGJGOEDFCMB_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1EF1B190)
#define CGJGOEDFCMB_LELEMBPNHIB_OFFSET UNITYSDK_OFFSET(0x1EF1B6A0)
#define CGJGOEDFCMB_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EF1B510)
#define CGJGOEDFCMB_OOCHBIFMPJM_OFFSET UNITYSDK_OFFSET(0x1EF1B010)
#define CGJGOEDFCMB_PLPIEBGMNON_OFFSET UNITYSDK_OFFSET(0x1EF1B180)

inline static constexpr unsigned int CGJGOEDFCMB_TypeDefinitionIndex = 6565;

	class CGJGOEDFCMB : public ::System::Object
	{
	public:
		::System::Random* KFBFGALBKNM; // 0x10
		::Il2CppArray<::System::UInt32>* POPCJHHIOBI; // 0x18
		::System::Int32 ILBLEOEGDEN; // 0x20
		::System::Byte CMEFOFJOFFC; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single OICDAMJLDIK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_CTOR_OFFSET))(this);
		}

		static ::CGJGOEDFCMB* OOCHBIFMPJM(::CGJGOEDFCMB* a1)
		{
			return ((::CGJGOEDFCMB*(*)(::CGJGOEDFCMB*))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_OOCHBIFMPJM_OFFSET))(a1);
		}

		static ::System::Void CIIGGPAMEIO(::CGJGOEDFCMB* a1)
		{
			return ((::System::Void(*)(::CGJGOEDFCMB*))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_CIIGGPAMEIO_OFFSET))(a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::UInt32 DBNKCOKCFPJ(::System::Single a1, ::System::Byte a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Byte))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_DBNKCOKCFPJ_OFFSET))(this, a1, a2);
		}

		::System::Single LELEMBPNHIB(::System::UInt32 a1, ::System::Byte a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_LELEMBPNHIB_OFFSET))(this, a1, a2);
		}

		::System::Int32 PLPIEBGMNON()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJGOEDFCMB_PLPIEBGMNON_OFFSET))(this);
		}

	};
