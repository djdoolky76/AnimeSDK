#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDKKDPIHFKL.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define FIKJKAMAPGJ_ADALELKCHEB_OFFSET UNITYSDK_OFFSET(0x19809DF0)
#define FIKJKAMAPGJ_AKGPDAHGOJN_OFFSET UNITYSDK_OFFSET(0x1980A810)
#define FIKJKAMAPGJ_BNBOPJMCNOK_OFFSET UNITYSDK_OFFSET(0x1980A710)
#define FIKJKAMAPGJ_CKIALIFBMCC_OFFSET UNITYSDK_OFFSET(0x1980A330)
#define FIKJKAMAPGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19809CA0)
#define FIKJKAMAPGJ_DELONJKKHBM_OFFSET UNITYSDK_OFFSET(0x19809CE0)
#define FIKJKAMAPGJ_DIHLAJPJHLB_OFFSET UNITYSDK_OFFSET(0x19809F00)
#define FIKJKAMAPGJ_DNOODJPKIPJ_OFFSET UNITYSDK_OFFSET(0x1980A0A0)
#define FIKJKAMAPGJ_DPBLBAHAKBK_OFFSET UNITYSDK_OFFSET(0x1980A010)
#define FIKJKAMAPGJ_GMKPIBLMACM_OFFSET UNITYSDK_OFFSET(0x1980A6A0)
#define FIKJKAMAPGJ_JLAEJHHFJHO_OFFSET UNITYSDK_OFFSET(0x1980A4A0)
#define FIKJKAMAPGJ_KKLNJJHAMOF_OFFSET UNITYSDK_OFFSET(0x1980A5A0)
#define FIKJKAMAPGJ_OHBELIHPNOA_OFFSET UNITYSDK_OFFSET(0x1980A3A0)
#define FIKJKAMAPGJ_OPFNFFLOIIH_OFFSET UNITYSDK_OFFSET(0x1980A530)

inline static constexpr unsigned int FIKJKAMAPGJ_TypeDefinitionIndex = 63543;

	class FIKJKAMAPGJ : public ::FDKKDPIHFKL
	{
	public:
		::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean DELONJKKHBM(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_DELONJKKHBM_OFFSET))(this, a1);
		}

		::System::Boolean ADALELKCHEB(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_ADALELKCHEB_OFFSET))(this, a1);
		}

		::System::Boolean DIHLAJPJHLB(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_DIHLAJPJHLB_OFFSET))(this, a1);
		}

		::System::Boolean DPBLBAHAKBK(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_DPBLBAHAKBK_OFFSET))(this, a1);
		}

		::System::Boolean DNOODJPKIPJ(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_DNOODJPKIPJ_OFFSET))(this, a1);
		}

		::System::Boolean CKIALIFBMCC(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_CKIALIFBMCC_OFFSET))(this, a1);
		}

		::System::Boolean JLAEJHHFJHO(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_JLAEJHHFJHO_OFFSET))(this, a1);
		}

		::System::Boolean OPFNFFLOIIH(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_OPFNFFLOIIH_OFFSET))(this, a1);
		}

		::System::Boolean GMKPIBLMACM(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_GMKPIBLMACM_OFFSET))(this, a1);
		}

		::System::Boolean AKGPDAHGOJN(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_AKGPDAHGOJN_OFFSET))(this, a1);
		}

		::System::Void OHBELIHPNOA(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_OHBELIHPNOA_OFFSET))(this, a1);
		}

		::System::Void KKLNJJHAMOF(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_KKLNJJHAMOF_OFFSET))(this, a1);
		}

		::System::Void BNBOPJMCNOK(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + FIKJKAMAPGJ_BNBOPJMCNOK_OFFSET))(this, a1);
		}

	};
