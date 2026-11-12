#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/EDDOMNACGOI.h"
namespace System { class String; }

#define FLBLAACKBPO_ADLBDODCLEE_OFFSET UNITYSDK_OFFSET(0x3E970F0)
#define FLBLAACKBPO_AIBMGHMKOOL_OFFSET UNITYSDK_OFFSET(0x3E97580)
#define FLBLAACKBPO_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3E97650)
#define FLBLAACKBPO_BEJAJNEFHIB_1_OFFSET UNITYSDK_OFFSET(0x1EF3FC70)
#define FLBLAACKBPO_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x3E97400)
#define FLBLAACKBPO_CNDCBFBFOBK_OFFSET UNITYSDK_OFFSET(0x2168550)
#define FLBLAACKBPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E97040)
#define FLBLAACKBPO_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E970F0)
#define FLBLAACKBPO_CTOR_OFFSET UNITYSDK_OFFSET(0x3E96F50)
#define FLBLAACKBPO_GNKABPNFDOF_OFFSET UNITYSDK_OFFSET(0x1C80)
#define FLBLAACKBPO_HOPOFDNNBIO_OFFSET UNITYSDK_OFFSET(0x1670)
#define FLBLAACKBPO_KAAIOAMNKCN_OFFSET UNITYSDK_OFFSET(0x3E97430)
#define FLBLAACKBPO_KJFCMKCICLE_OFFSET UNITYSDK_OFFSET(0x1B3A0)
#define FLBLAACKBPO_LKKMHHFCBHB_OFFSET UNITYSDK_OFFSET(0x3E97230)
#define FLBLAACKBPO_MDDMNNJKFNB_OFFSET UNITYSDK_OFFSET(0x3E97510)
#define FLBLAACKBPO_NBBEMNGKEFD_OFFSET UNITYSDK_OFFSET(0x3E97330)
#define FLBLAACKBPO_NLLNDOMAFCP_OFFSET UNITYSDK_OFFSET(0x3E97340)
#define FLBLAACKBPO_NMNFABIPILI_OFFSET UNITYSDK_OFFSET(0x3E974D0)
#define FLBLAACKBPO_ODKIPLLELCO_OFFSET UNITYSDK_OFFSET(0x3E974A0)
#define FLBLAACKBPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E97640)

inline static constexpr unsigned int FLBLAACKBPO_TypeDefinitionIndex = 6394;

	struct alignas(4) FLBLAACKBPO
	{
		::RPG::MVector3 BNAEGKCODPA; // 0x10
		::System::Single EEOEAJCGEKC; // 0x1C
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + FLBLAACKBPO_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 HOPOFDNNBIO()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLAACKBPO_HOPOFDNNBIO_OFFSET))(this);
		}

		::System::Void CNDCBFBFOBK(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_CNDCBFBFOBK_OFFSET))(this, a1);
		}

		::System::Single GNKABPNFDOF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLAACKBPO_GNKABPNFDOF_OFFSET))(this);
		}

		::System::Void KJFCMKCICLE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLBLAACKBPO_KJFCMKCICLE_OFFSET))(this, a1);
		}

		::System::Void LKKMHHFCBHB(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_LKKMHHFCBHB_OFFSET))(this, a1, a2);
		}

		::System::Void ADLBDODCLEE(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_ADLBDODCLEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBBEMNGKEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLAACKBPO_NBBEMNGKEFD_OFFSET))(this);
		}

		/*
		::FLBLAACKBPO NLLNDOMAFCP()
		{
			return ((::FLBLAACKBPO(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLAACKBPO_NLLNDOMAFCP_OFFSET))(this);
		}
		*/

		::System::Void BEJAJNEFHIB(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_BEJAJNEFHIB_OFFSET))(this, a1);
		}

		/*
		static ::FLBLAACKBPO BEJAJNEFHIB_1(::FLBLAACKBPO a1, ::RPG::MVector3 a2)
		{
			return ((::FLBLAACKBPO(*)(::FLBLAACKBPO, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_BEJAJNEFHIB_1_OFFSET))(a1, a2);
		}
		*/

		::RPG::MVector3 KAAIOAMNKCN(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_KAAIOAMNKCN_OFFSET))(this, a1);
		}

		::System::Single ODKIPLLELCO(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_ODKIPLLELCO_OFFSET))(this, a1);
		}

		::System::Boolean NMNFABIPILI(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_NMNFABIPILI_OFFSET))(this, a1);
		}

		::System::Boolean MDDMNNJKFNB(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FLBLAACKBPO_MDDMNNJKFNB_OFFSET))(this, a1, a2);
		}

		::System::Boolean AIBMGHMKOOL(::EDDOMNACGOI a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDDOMNACGOI, ::System::Single))((::PBYTE)hIl2Cpp + FLBLAACKBPO_AIBMGHMKOOL_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBLAACKBPO_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLBLAACKBPO_BDJPPIMOJBH_OFFSET))(this, a1);
		}

	};
