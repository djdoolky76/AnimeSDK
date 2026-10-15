#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AJOECLJGDKO;
class BOHBPAKJGCK;
class DCPJBCMKMIK;
class EPFHDFJPECH;
class GOOGNAIABBN;
class OJONFELBAFM;
namespace RPG::Client::PixAir { class PixAirEquipBar; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPKDJGMPHMM_CTOR_OFFSET UNITYSDK_OFFSET(0x12657B50)
#define DPKDJGMPHMM_DFPCNKJFGBG_OFFSET UNITYSDK_OFFSET(0x12655630)
#define DPKDJGMPHMM_DHMMKBFEMFJ_OFFSET UNITYSDK_OFFSET(0x12655C70)
#define DPKDJGMPHMM_DMGNCLKJLPA_OFFSET UNITYSDK_OFFSET(0x12655960)
#define DPKDJGMPHMM_FNFDFGNJBEM_OFFSET UNITYSDK_OFFSET(0x12657930)
#define DPKDJGMPHMM_GAEEMEGIFGO_OFFSET UNITYSDK_OFFSET(0x12655750)
#define DPKDJGMPHMM_GIJJMOJLGIA_OFFSET UNITYSDK_OFFSET(0x12656200)
#define DPKDJGMPHMM_HNCGJCMELJA_OFFSET UNITYSDK_OFFSET(0x12657A40)
#define DPKDJGMPHMM_HOBDDGKOIBE_OFFSET UNITYSDK_OFFSET(0x126567A0)
#define DPKDJGMPHMM_NADHFDDFIID_OFFSET UNITYSDK_OFFSET(0x12657450)
#define DPKDJGMPHMM_OBLHOALFOLJ_OFFSET UNITYSDK_OFFSET(0x12657070)
#define DPKDJGMPHMM_OJFOHGIMGIB_OFFSET UNITYSDK_OFFSET(0x12656D40)

	class DPKDJGMPHMM : public ::System::Object
	{
	public:
		::DCPJBCMKMIK* NDDMFLOCKGG; // 0x10
		::System::Int32 PELCILIFOIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_CTOR_OFFSET))(this);
		}

		::System::Void DFPCNKJFGBG(::RPG::Client::PixAir::PixAirEquipBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_DFPCNKJFGBG_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* OBLHOALFOLJ(::RPG::Client::PixAir::PixAirEquipBar* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_OBLHOALFOLJ_OFFSET))(this, a1, a2);
		}

		::System::Void GAEEMEGIFGO(::RPG::Client::PixAir::PixAirEquipBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_GAEEMEGIFGO_OFFSET))(this, a1);
		}

		::System::ValueTuple DMGNCLKJLPA(::RPG::Client::PixAir::PixAirEquipBar* a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_DMGNCLKJLPA_OFFSET))(this, a1);
		}

		::System::ValueTuple NADHFDDFIID(::RPG::Client::PixAir::PixAirEquipBar* a1, ::RPG::Client::PixAir::PixAirEquipInstance* a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_NADHFDDFIID_OFFSET))(this, a1, a2);
		}

		::System::Void DHMMKBFEMFJ(::System::Collections::Generic::List_1<::EPFHDFJPECH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_DHMMKBFEMFJ_OFFSET))(this, a1);
		}

		::System::Void GIJJMOJLGIA(::AJOECLJGDKO* a1, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJOECLJGDKO*, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_GIJJMOJLGIA_OFFSET))(this, a1, a2);
		}

		::System::Void HOBDDGKOIBE(::AJOECLJGDKO* a1, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJOECLJGDKO*, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_HOBDDGKOIBE_OFFSET))(this, a1, a2);
		}

		::System::Void FNFDFGNJBEM(::AJOECLJGDKO* a1, ::EPFHDFJPECH* a2, ::OJONFELBAFM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AJOECLJGDKO*, ::EPFHDFJPECH*, ::OJONFELBAFM*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_FNFDFGNJBEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HNCGJCMELJA(::AJOECLJGDKO* a1, ::GOOGNAIABBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJOECLJGDKO*, ::GOOGNAIABBN*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_HNCGJCMELJA_OFFSET))(this, a1, a2);
		}

		::System::Void OJFOHGIMGIB(::System::Collections::Generic::List_1<::EPFHDFJPECH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>*))((::PBYTE)hIl2Cpp + DPKDJGMPHMM_OJFOHGIMGIB_OFFSET))(this, a1);
		}

	};
