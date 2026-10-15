#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDoingRoundData; }

#define LHDKHAJMJLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A3900)
#define LHDKHAJMJLD_EGBKLPJMFPI_OFFSET UNITYSDK_OFFSET(0xB6A3A30)
#define LHDKHAJMJLD_ELLBBKJFDFI_OFFSET UNITYSDK_OFFSET(0xB6A3AD0)
#define LHDKHAJMJLD_FJHEAGHANNL_OFFSET UNITYSDK_OFFSET(0xB6A3B60)
#define LHDKHAJMJLD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB6A3950)
#define LHDKHAJMJLD_IMGCJAEDHJF_OFFSET UNITYSDK_OFFSET(0xB6A3C80)
#define LHDKHAJMJLD_JAPGDOHBGGE_OFFSET UNITYSDK_OFFSET(0xB6A3BE0)
#define LHDKHAJMJLD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB6A3910)
#define LHDKHAJMJLD_MPJHFAHDDDD_OFFSET UNITYSDK_OFFSET(0xB6A3DC0)
#define LHDKHAJMJLD_OFDPBELBBCB_OFFSET UNITYSDK_OFFSET(0xB6A39A0)
#define LHDKHAJMJLD_PBBGECIINAM_OFFSET UNITYSDK_OFFSET(0xB6A3D20)

inline static constexpr unsigned int LHDKHAJMJLD_TypeDefinitionIndex = 76623;

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
