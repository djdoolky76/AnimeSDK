#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHJDLMKLANL_AFJNGIIJPPM_OFFSET UNITYSDK_OFFSET(0xB6B5060)
#define LHJDLMKLANL_BAODMCIPIPO_OFFSET UNITYSDK_OFFSET(0xB6B4FD0)
#define LHJDLMKLANL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB6B4960)
#define LHJDLMKLANL_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B45E0)
#define LHJDLMKLANL_GGILGABPMEL_OFFSET UNITYSDK_OFFSET(0xB6B4F40)
#define LHJDLMKLANL_LDBMFCMJBMO_1_OFFSET UNITYSDK_OFFSET(0xB6B4630)
#define LHJDLMKLANL_LDBMFCMJBMO_OFFSET UNITYSDK_OFFSET(0xB6B49B0)
#define LHJDLMKLANL_PGLHAMMBGLG_OFFSET UNITYSDK_OFFSET(0xB6B4D80)
#define LHJDLMKLANL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB6B4D10)

	class LHJDLMKLANL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple*>* LILKOCJPAIM; // 0x10
		::System::Single PMIHDMBGDMH; // 0x18
		::System::Void _ctor(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + LHJDLMKLANL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + LHJDLMKLANL_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void LDBMFCMJBMO(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + LHJDLMKLANL_LDBMFCMJBMO_OFFSET))(this, a1, a2);
		}

		::System::Void LDBMFCMJBMO_1(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + LHJDLMKLANL_LDBMFCMJBMO_1_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDLMKLANL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 PGLHAMMBGLG(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LHJDLMKLANL_PGLHAMMBGLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GGILGABPMEL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDLMKLANL_GGILGABPMEL_OFFSET))(this);
		}

		::System::Int32 BAODMCIPIPO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDLMKLANL_BAODMCIPIPO_OFFSET))(this);
		}

		::System::Int32 AFJNGIIJPPM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDLMKLANL_AFJNGIIJPPM_OFFSET))(this);
		}

	};
