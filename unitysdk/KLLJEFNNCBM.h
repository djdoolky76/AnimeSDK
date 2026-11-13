#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CPNCJIABDNP.h"
class BANDDFEHONE;
class CAOEEDDAPIK_NNBFMHKHMKO;
class FBEONBAOLAA;
class GEDMHFPPBHN;
class KLLJEFNNCBM;
class MADHNHEMBOJ;
class OEENEGJBMCO;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLLJEFNNCBM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17B84B70)
#define KLLJEFNNCBM_CTOR_OFFSET UNITYSDK_OFFSET(0x17B84CB0)
#define KLLJEFNNCBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B84CC0)
#define KLLJEFNNCBM_GBPCICHOBNO_OFFSET UNITYSDK_OFFSET(0x17B85030)
#define KLLJEFNNCBM_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x17B855E0)
#define KLLJEFNNCBM_GET_STYLEVIEWDATA_OFFSET UNITYSDK_OFFSET(0x17B855C0)
#define KLLJEFNNCBM_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0x17B850B0)
#define KLLJEFNNCBM_LCJJKAKOPCC_OFFSET UNITYSDK_OFFSET(0x17B84FA0)
#define KLLJEFNNCBM_PIALNCOIPKG_OFFSET UNITYSDK_OFFSET(0x17B84D10)
#define KLLJEFNNCBM_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x17B855F0)
#define KLLJEFNNCBM_SET_STYLEVIEWDATA_OFFSET UNITYSDK_OFFSET(0x17B855D0)

inline static constexpr unsigned int KLLJEFNNCBM_TypeDefinitionIndex = 74233;

	class KLLJEFNNCBM : public ::System::Object
	{
	public:
		::FBEONBAOLAA* _StyleViewData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* _ItemDatas_k__BackingField; // 0x18
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_CTOR_OFFSET))(this);
		}

		static ::KLLJEFNNCBM* BPLPBPMEODA(::CAOEEDDAPIK_NNBFMHKHMKO* a1, ::OEENEGJBMCO* a2, ::RPG::GameCore::LevelUIComponent* a3)
		{
			return ((::KLLJEFNNCBM*(*)(::CAOEEDDAPIK_NNBFMHKHMKO*, ::OEENEGJBMCO*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_DISPOSE_OFFSET))(this);
		}

		::System::Void PIALNCOIPKG(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_PIALNCOIPKG_OFFSET))(this, a1);
		}

		::System::Void LCJJKAKOPCC(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_LCJJKAKOPCC_OFFSET))(this, a1);
		}

		::System::Boolean GBPCICHOBNO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_GBPCICHOBNO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BANDDFEHONE*>* HDIIEAELOPP(::System::Collections::Generic::List_1<::CPNCJIABDNP>* a1)
		{
			return ((::System::Collections::Generic::List_1<::BANDDFEHONE*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::CPNCJIABDNP>*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_HDIIEAELOPP_OFFSET))(this, a1);
		}

		::FBEONBAOLAA* get_StyleViewData()
		{
			return ((::FBEONBAOLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_GET_STYLEVIEWDATA_OFFSET))(this);
		}

		::System::Void set_StyleViewData(::FBEONBAOLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEONBAOLAA*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_SET_STYLEVIEWDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* get_ItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_GET_ITEMDATAS_OFFSET))(this);
		}

		::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::GEDMHFPPBHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GEDMHFPPBHN*>*))((::PBYTE)hIl2Cpp + KLLJEFNNCBM_SET_ITEMDATAS_OFFSET))(this, a1);
		}

	};
