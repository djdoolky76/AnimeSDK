#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AICBMLHDOOJ.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/RPG/MVector2.h"
class CAHLPKGIABH;
class FDHAMJODAAN;
class IOJGBIAJBIC;
class JBCHPOIENKK;
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System { class Object; }

#define NDPPHPJKOLN_AJFJAIPMHDL_OFFSET UNITYSDK_OFFSET(0x1C758940)
#define NDPPHPJKOLN_AOBNGLKFBOE_OFFSET UNITYSDK_OFFSET(0x1C759A10)
#define NDPPHPJKOLN_BJDFOBPDPNO_OFFSET UNITYSDK_OFFSET(0x1C7599B0)
#define NDPPHPJKOLN_CLNCNFJAEEH_OFFSET UNITYSDK_OFFSET(0x1C7595C0)
#define NDPPHPJKOLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C758680)
#define NDPPHPJKOLN_GET_CONTACTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C759990)
#define NDPPHPJKOLN_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x1C759970)
#define NDPPHPJKOLN_GIEDFLJHFJB_OFFSET UNITYSDK_OFFSET(0x1C759570)
#define NDPPHPJKOLN_HNNJOOKJKLK_OFFSET UNITYSDK_OFFSET(0x1C758690)
#define NDPPHPJKOLN_KJPBMOPALOM_OFFSET UNITYSDK_OFFSET(0x1C758A30)
#define NDPPHPJKOLN_MBAAOEBMMHN_OFFSET UNITYSDK_OFFSET(0x1C7597D0)
#define NDPPHPJKOLN_MGFLOAMFOKM_OFFSET UNITYSDK_OFFSET(0x1C7592D0)
#define NDPPHPJKOLN_MPGEIAEPLHI_OFFSET UNITYSDK_OFFSET(0x1C758D50)
#define NDPPHPJKOLN_NJHPGBOIECF_OFFSET UNITYSDK_OFFSET(0x1C758C00)
#define NDPPHPJKOLN_SET_CONTACTLISTENER_OFFSET UNITYSDK_OFFSET(0x1C7599A0)
#define NDPPHPJKOLN_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x1C759980)

inline static constexpr unsigned int NDPPHPJKOLN_TypeDefinitionIndex = 36552;

	class NDPPHPJKOLN : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* _World_k__BackingField; // 0x10
		::FDHAMJODAAN* _ContactListener_k__BackingField; // 0x18
		::System::Int32 KLMMFOCMIDI; // 0x20
		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_CTOR_OFFSET))(this, a1);
		}

		::CAHLPKGIABH* HNNJOOKJKLK(::JBCHPOIENKK* a1)
		{
			return ((::CAHLPKGIABH*(*)(::PVOID, ::JBCHPOIENKK*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_HNNJOOKJKLK_OFFSET))(this, a1);
		}

		::System::Void AJFJAIPMHDL(::CAHLPKGIABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAHLPKGIABH*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_AJFJAIPMHDL_OFFSET))(this, a1);
		}

		::System::Void KJPBMOPALOM(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::AICBMLHDOOJ a3, ::System::UInt64 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::AICBMLHDOOJ, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_KJPBMOPALOM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 NJHPGBOIECF(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::Il2CppArray<::AICBMLHDOOJ>* a3, ::System::UInt64 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::Il2CppArray<::AICBMLHDOOJ>*, ::System::UInt64))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_NJHPGBOIECF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 MPGEIAEPLHI(::RPG::MVector2 a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector2 a4, ::Il2CppArray<::IOJGBIAJBIC*>* a5, ::System::UInt64 a6)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Single, ::System::Single, ::RPG::MVector2, ::Il2CppArray<::IOJGBIAJBIC*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_MPGEIAEPLHI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 MGFLOAMFOKM(::IOJGBIAJBIC* a1, ::RPG::MVector2 a2, ::Il2CppArray<::AICBMLHDOOJ>* a3, ::System::UInt64 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::IOJGBIAJBIC*, ::RPG::MVector2, ::Il2CppArray<::AICBMLHDOOJ>*, ::System::UInt64))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_MGFLOAMFOKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GIEDFLJHFJB(::FDHAMJODAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDHAMJODAAN*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_GIEDFLJHFJB_OFFSET))(this, a1);
		}

		::System::Single CLNCNFJAEEH(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_CLNCNFJAEEH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean MBAAOEBMMHN(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::System::Object*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_MBAAOEBMMHN_OFFSET))(this, a1, a2);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* get_World()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_SET_WORLD_OFFSET))(this, a1);
		}

		::FDHAMJODAAN* get_ContactListener()
		{
			return ((::FDHAMJODAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_GET_CONTACTLISTENER_OFFSET))(this);
		}

		::System::Void set_ContactListener(::FDHAMJODAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDHAMJODAAN*))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_SET_CONTACTLISTENER_OFFSET))(this, a1);
		}

		::RPG::MVector2 BJDFOBPDPNO()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_BJDFOBPDPNO_OFFSET))(this);
		}

		::System::Void AOBNGLKFBOE(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NDPPHPJKOLN_AOBNGLKFBOE_OFFSET))(this, a1);
		}

	};
