#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
#include "unitysdk/RPG/MVector2.h"
class CAHLPKGIABH;
class IALIPBPEPOJ;
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System { class Object; }

#define KDCAPEBJDIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70DC40)
#define KDCAPEBJDIO_FONFHJOMFDK_OFFSET UNITYSDK_OFFSET(0x1C70E040)
#define KDCAPEBJDIO_FPOAEKEPLFE_OFFSET UNITYSDK_OFFSET(0x1C70C900)
#define KDCAPEBJDIO_GET_OWNERBODY_OFFSET UNITYSDK_OFFSET(0x1C70E690)
#define KDCAPEBJDIO_GET_SHAPEID_OFFSET UNITYSDK_OFFSET(0x1C70E660)
#define KDCAPEBJDIO_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0x1C70DD50)
#define KDCAPEBJDIO_JJLHEDNIIBB_OFFSET UNITYSDK_OFFSET(0x1C70DCE0)
#define KDCAPEBJDIO_KDCLPINPDHI_OFFSET UNITYSDK_OFFSET(0x1C70DE20)
#define KDCAPEBJDIO_LDKFFJHKKAO_OFFSET UNITYSDK_OFFSET(0x1C70DC50)
#define KDCAPEBJDIO_MCCIJFKECAB_OFFSET UNITYSDK_OFFSET(0x1C70E6B0)
#define KDCAPEBJDIO_MMDLNGEOOCB_OFFSET UNITYSDK_OFFSET(0x1C70DC90)
#define KDCAPEBJDIO_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x1C70E7C0)
#define KDCAPEBJDIO_NNPFGCNAPPP_OFFSET UNITYSDK_OFFSET(0x1C70E740)
#define KDCAPEBJDIO_OEPOAGFKFIP_OFFSET UNITYSDK_OFFSET(0x1C70DEC0)
#define KDCAPEBJDIO_PKDKKILJAHK_OFFSET UNITYSDK_OFFSET(0x1C70DF50)
#define KDCAPEBJDIO_SET_OWNERBODY_OFFSET UNITYSDK_OFFSET(0x1C70E6A0)
#define KDCAPEBJDIO_SET_SHAPEID_OFFSET UNITYSDK_OFFSET(0x1C70E680)

	class KDCAPEBJDIO : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId _ShapeId_k__BackingField; // 0x10
		::IALIPBPEPOJ* _OwnerBody_k__BackingField; // 0x28
		::System::Object* IGAALPKNGMA; // 0x30
		::System::Void _ctor(::IALIPBPEPOJ* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IALIPBPEPOJ*, ::System::Object*))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* LDKFFJHKKAO()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_LDKFFJHKKAO_OFFSET))(this);
		}

		::System::Void MMDLNGEOOCB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_MMDLNGEOOCB_OFFSET))(this, a1);
		}

		::System::UInt64 JJLHEDNIIBB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_JJLHEDNIIBB_OFFSET))(this);
		}

		::System::Void HABJKLPECBB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_HABJKLPECBB_OFFSET))(this, a1, a2);
		}

		::System::Void KDCLPINPDHI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_KDCLPINPDHI_OFFSET))(this, a1);
		}

		::System::Void OEPOAGFKFIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_OEPOAGFKFIP_OFFSET))(this, a1);
		}

		::System::Void PKDKKILJAHK(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_PKDKKILJAHK_OFFSET))(this, a1);
		}

		::System::Void FONFHJOMFDK(::CAHLPKGIABH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CAHLPKGIABH*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_FONFHJOMFDK_OFFSET))(this, a1, a2);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId get_ShapeId()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_GET_SHAPEID_OFFSET))(this);
		}

		::System::Void set_ShapeId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_SET_SHAPEID_OFFSET))(this, a1);
		}

		::IALIPBPEPOJ* get_OwnerBody()
		{
			return ((::IALIPBPEPOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_GET_OWNERBODY_OFFSET))(this);
		}

		::System::Void set_OwnerBody(::IALIPBPEPOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IALIPBPEPOJ*))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_SET_OWNERBODY_OFFSET))(this, a1);
		}

		::HGCDFKINFPA MCCIJFKECAB()
		{
			return ((::HGCDFKINFPA(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_MCCIJFKECAB_OFFSET))(this);
		}

		::CAHLPKGIABH* FPOAEKEPLFE()
		{
			return ((::CAHLPKGIABH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_FPOAEKEPLFE_OFFSET))(this);
		}

		::RPG::MVector2 NNPFGCNAPPP()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_NNPFGCNAPPP_OFFSET))(this);
		}

		::RPG::MVector2 MOOENEIANFA()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCAPEBJDIO_MOOENEIANFA_OFFSET))(this);
		}

	};
