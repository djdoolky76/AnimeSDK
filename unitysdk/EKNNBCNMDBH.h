#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EKNNBCNMDBH;
class GADFFIFFNHM;

#define EKNNBCNMDBH_BMBCEJECBLO_OFFSET UNITYSDK_OFFSET(0x1550FE90)
#define EKNNBCNMDBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1550FDB0)
#define EKNNBCNMDBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1550FDA0)
#define EKNNBCNMDBH_FHNCAFJMBCI_1_OFFSET UNITYSDK_OFFSET(0x1550FE20)
#define EKNNBCNMDBH_FHNCAFJMBCI_OFFSET UNITYSDK_OFFSET(0x1550FDC0)
#define EKNNBCNMDBH_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1550FF40)
#define EKNNBCNMDBH_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1550FF20)
#define EKNNBCNMDBH_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1550FF60)
#define EKNNBCNMDBH_SET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1550FF50)
#define EKNNBCNMDBH_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1550FF30)
#define EKNNBCNMDBH_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1550FF70)

	class EKNNBCNMDBH : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _CurrentAtk_k__BackingField; // 0x10
		::System::Int32 _CurrentHP_k__BackingField; // 0x18
		::System::Boolean _IsDead_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHNCAFJMBCI(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_FHNCAFJMBCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHNCAFJMBCI_1(::EKNNBCNMDBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKNNBCNMDBH*))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_FHNCAFJMBCI_1_OFFSET))(this, a1);
		}

		::System::Void BMBCEJECBLO(::GADFFIFFNHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_BMBCEJECBLO_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentAtk()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Void set_CurrentAtk(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_SET_CURRENTATK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_GET_ISDEAD_OFFSET))(this);
		}

		::System::Void set_IsDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKNNBCNMDBH_SET_ISDEAD_OFFSET))(this, a1);
		}

	};
