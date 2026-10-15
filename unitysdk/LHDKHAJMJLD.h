#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDoingRoundData; }

#define LHDKHAJMJLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AA540)
#define LHDKHAJMJLD_EGBKLPJMFPI_OFFSET UNITYSDK_OFFSET(0xB6AA670)
#define LHDKHAJMJLD_ELLBBKJFDFI_OFFSET UNITYSDK_OFFSET(0xB6AA710)
#define LHDKHAJMJLD_FJHEAGHANNL_OFFSET UNITYSDK_OFFSET(0xB6AA7A0)
#define LHDKHAJMJLD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB6AA590)
#define LHDKHAJMJLD_IMGCJAEDHJF_OFFSET UNITYSDK_OFFSET(0xB6AA8C0)
#define LHDKHAJMJLD_JAPGDOHBGGE_OFFSET UNITYSDK_OFFSET(0xB6AA820)
#define LHDKHAJMJLD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB6AA550)
#define LHDKHAJMJLD_MPJHFAHDDDD_OFFSET UNITYSDK_OFFSET(0xB6AAA00)
#define LHDKHAJMJLD_OFDPBELBBCB_OFFSET UNITYSDK_OFFSET(0xB6AA5E0)
#define LHDKHAJMJLD_PBBGECIINAM_OFFSET UNITYSDK_OFFSET(0xB6AA960)

inline static constexpr unsigned int LHDKHAJMJLD_TypeDefinitionIndex = 76624;

	class LHDKHAJMJLD : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDoingRoundData* APPIHABBCGK; // 0x10
		::System::Void _ctor(::RPG::Client::ChimeraDoingRoundData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OFDPBELBBCB(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_OFDPBELBBCB_OFFSET))(this, a1, a2);
		}

		::System::Void EGBKLPJMFPI(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_EGBKLPJMFPI_OFFSET))(this, a1, a2);
		}

		::System::Void ELLBBKJFDFI(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_ELLBBKJFDFI_OFFSET))(this, a1, a2);
		}

		::System::Void FJHEAGHANNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_FJHEAGHANNL_OFFSET))(this, a1);
		}

		::System::Void JAPGDOHBGGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_JAPGDOHBGGE_OFFSET))(this, a1);
		}

		::System::Void IMGCJAEDHJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_IMGCJAEDHJF_OFFSET))(this, a1);
		}

		::System::Void PBBGECIINAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_PBBGECIINAM_OFFSET))(this, a1);
		}

		::System::Void MPJHFAHDDDD(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LHDKHAJMJLD_MPJHFAHDDDD_OFFSET))(this, a1, a2, a3);
		}

	};
