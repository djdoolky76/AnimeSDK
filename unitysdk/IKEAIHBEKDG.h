#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
class LDBHPHOEIME;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define IKEAIHBEKDG_ADCLJEMGAPI_OFFSET UNITYSDK_OFFSET(0x164852C0)
#define IKEAIHBEKDG_CTOR_OFFSET UNITYSDK_OFFSET(0x16485780)
#define IKEAIHBEKDG_DEDPGLDIIIN_OFFSET UNITYSDK_OFFSET(0x164855B0)
#define IKEAIHBEKDG_DODLLOHGGGA_OFFSET UNITYSDK_OFFSET(0x164850F0)
#define IKEAIHBEKDG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x16485040)
#define IKEAIHBEKDG_HFMEIIDNJOL_OFFSET UNITYSDK_OFFSET(0x164853C0)
#define IKEAIHBEKDG_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16485080)
#define IKEAIHBEKDG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x16485000)
#define IKEAIHBEKDG_PEPDLOANHCJ_OFFSET UNITYSDK_OFFSET(0x16485600)
#define IKEAIHBEKDG_PJEANKMKAOI_OFFSET UNITYSDK_OFFSET(0x16485200)
#define IKEAIHBEKDG_PKBOADFCGJD_OFFSET UNITYSDK_OFFSET(0x164854B0)
#define IKEAIHBEKDG_POMJBOHOLAH_OFFSET UNITYSDK_OFFSET(0x16484E20)
#define IKEAIHBEKDG__ONBIND_OFFSET UNITYSDK_OFFSET(0x16484D60)

	class IKEAIHBEKDG : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::LDBHPHOEIME*>* IDBAIGIKBHG; // 0x60
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x68
		::System::Int32 EEFCFOANBFE; // 0x70
		::System::Boolean IMIIINFMKAO; // 0x74
		::System::Byte _padding0[0x3];
		::System::Int32 LJCEHLIFEID; // 0x78
		::System::Int32 NKJPNEADGKM; // 0x7C
		::RPG::GameCore::AetherSpiritType ABBMKFMGKCP; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG__ONBIND_OFFSET))(this);
		}

		::System::Void POMJBOHOLAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_POMJBOHOLAH_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void ADCLJEMGAPI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_ADCLJEMGAPI_OFFSET))(this, a1, a2);
		}

		::System::Void HFMEIIDNJOL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_HFMEIIDNJOL_OFFSET))(this, a1);
		}

		::System::Void PKBOADFCGJD(::RPG::GameCore::AetherSpiritType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_PKBOADFCGJD_OFFSET))(this, a1);
		}

		::System::Void DEDPGLDIIIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_DEDPGLDIIIN_OFFSET))(this);
		}

		::System::Void PJEANKMKAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_PJEANKMKAOI_OFFSET))(this);
		}

		::System::Void DODLLOHGGGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_DODLLOHGGGA_OFFSET))(this, a1);
		}

		::System::Void PEPDLOANHCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEAIHBEKDG_PEPDLOANHCJ_OFFSET))(this);
		}

	};
