#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EParkourBuffFlag.h"
#include "unitysdk/System/Object.h"
class CFALFIPEHJH;

#define MEHEPKNJPOA_FANDKJFOLKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8CED20)
#define MEHEPKNJPOA_FANDKJFOLKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8CF010)
#define MEHEPKNJPOA_FANDKJFOLKB_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB8CF580)
#define MEHEPKNJPOA_FANDKJFOLKB_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xB8CF570)
#define MEHEPKNJPOA_FANDKJFOLKB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB8CF5A0)
#define MEHEPKNJPOA_FANDKJFOLKB_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB8CF5C0)
#define MEHEPKNJPOA_FANDKJFOLKB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB8CF5E0)
#define MEHEPKNJPOA_FANDKJFOLKB_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xB8CECD0)
#define MEHEPKNJPOA_FANDKJFOLKB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB8CF260)
#define MEHEPKNJPOA_FANDKJFOLKB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB8CEC80)
#define MEHEPKNJPOA_FANDKJFOLKB_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xB8CF590)
#define MEHEPKNJPOA_FANDKJFOLKB_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB8CF5B0)
#define MEHEPKNJPOA_FANDKJFOLKB_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB8CF5D0)

inline static constexpr unsigned int MEHEPKNJPOA_FANDKJFOLKB_TypeDefinitionIndex = 74175;

	class MEHEPKNJPOA_FANDKJFOLKB : public ::System::Object
	{
	public:
		::CFALFIPEHJH* _Owner_k__BackingField; // 0x10
		::System::Boolean _IsValid_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _Duration_k__BackingField; // 0x1C
		::RPG::Client::ParkourGame::EParkourBuffFlag _Flags_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ParkourGame::EParkourBuffFlag a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ParkourGame::EParkourBuffFlag get_Flags()
		{
			return ((::RPG::Client::ParkourGame::EParkourBuffFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_GET_FLAGS_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_SET_ISVALID_OFFSET))(this, a1);
		}

		::CFALFIPEHJH* get_Owner()
		{
			return ((::CFALFIPEHJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::Client::ParkourGame::EParkourBuffFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::EParkourBuffFlag))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_FANDKJFOLKB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
