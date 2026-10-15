#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIDOJDHNGJ.h"
#include "unitysdk/LNMEGEABJHF.h"
namespace System { class String; }

#define IOOLOCFOFDM_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x1C5087A0)
#define IOOLOCFOFDM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C508750)
#define IOOLOCFOFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5089D0)
#define IOOLOCFOFDM_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0x1C503FB0)
#define IOOLOCFOFDM_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1C5089C0)
#define IOOLOCFOFDM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C503560)
#define IOOLOCFOFDM_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x1C5035E0)
#define IOOLOCFOFDM_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x1C508930)

inline static constexpr unsigned int IOOLOCFOFDM_TypeDefinitionIndex = 41619;

	class IOOLOCFOFDM : public ::EFIDOJDHNGJ
	{
	public:
		::System::String* BPKKKMOCFIP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_CLEAR_OFFSET))(this);
		}

		::System::Void EOCEFJFIJLK(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_EOCEFJFIJLK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* BDJPPIMOJBH(::LNMEGEABJHF a1)
		{
			return ((::System::String*(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Char PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::String* IOIFPHAMFDF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOLOCFOFDM_LKEFCMNJDJI_OFFSET))(this);
		}

	};
