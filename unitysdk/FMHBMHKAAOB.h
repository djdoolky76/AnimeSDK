#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJBADDEBBEP.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftSymmetryType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FIBKHDABPHD;
class NKIJFPHFJCO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FMHBMHKAAOB_ABDBJBDJJND_OFFSET UNITYSDK_OFFSET(0x1C526CE0)
#define FMHBMHKAAOB_AMKBPBEAGFJ_OFFSET UNITYSDK_OFFSET(0x1C527450)
#define FMHBMHKAAOB_BIIMMHHPPCP_OFFSET UNITYSDK_OFFSET(0x1C527280)
#define FMHBMHKAAOB_BOFKKNEEJAM_OFFSET UNITYSDK_OFFSET(0x1C527230)
#define FMHBMHKAAOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5261E0)
#define FMHBMHKAAOB_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C526BF0)
#define FMHBMHKAAOB_FAILDEPHADA_OFFSET UNITYSDK_OFFSET(0x1C526D30)
#define FMHBMHKAAOB_FIGLOLHCHHL_OFFSET UNITYSDK_OFFSET(0x1C526140)
#define FMHBMHKAAOB_GCCNGHGILCN_OFFSET UNITYSDK_OFFSET(0x1C527400)
#define FMHBMHKAAOB_GEEEKIPPEBN_OFFSET UNITYSDK_OFFSET(0x1C5261A0)
#define FMHBMHKAAOB_IKOHLHDGFKH_1_OFFSET UNITYSDK_OFFSET(0x1C526740)
#define FMHBMHKAAOB_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x1C526270)
#define FMHBMHKAAOB_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C526B00)

inline static constexpr unsigned int FMHBMHKAAOB_TypeDefinitionIndex = 41773;

	class FMHBMHKAAOB : public ::GJBADDEBBEP
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* LNBFLMKFGIL; // 0x18
		::FIBKHDABPHD* MIPPNCGOJNM; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* MDNGHGFDNHK; // 0x28
		::RPG::Client::MechCraft::MechCraftSymmetryType GAANABDCOAN; // 0x30
		::System::Void _ctor(::RPG::Client::MechCraft::MechCraftSymmetryType a1, ::FIBKHDABPHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftSymmetryType, ::FIBKHDABPHD*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean FIGLOLHCHHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_FIGLOLHCHHL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* GEEEKIPPEBN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_GEEEKIPPEBN_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_IKOHLHDGFKH_1_OFFSET))(this, a1);
		}

		::System::Boolean NCLOMPDLJPB(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_EDBDAAKMDFI_OFFSET))(this, a1);
		}

		::System::Boolean ABDBJBDJJND(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_ABDBJBDJJND_OFFSET))(this, a1);
		}

		::System::Boolean BOFKKNEEJAM(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_BOFKKNEEJAM_OFFSET))(this, a1);
		}

		::System::Boolean GCCNGHGILCN(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_GCCNGHGILCN_OFFSET))(this, a1);
		}

		::System::Boolean AMKBPBEAGFJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_AMKBPBEAGFJ_OFFSET))(this, a1);
		}

		::System::Boolean FAILDEPHADA(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_FAILDEPHADA_OFFSET))(this, a1);
		}

		::System::Boolean BIIMMHHPPCP(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FMHBMHKAAOB_BIIMMHHPPCP_OFFSET))(this, a1);
		}

	};
