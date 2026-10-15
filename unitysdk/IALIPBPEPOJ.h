#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeDef.h"
#include "unitysdk/RPG/MVector2.h"
class IOJGBIAJBIC;
class MDHODFHBAAO;
class NDPPHPJKOLN;
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DConfig; }
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IALIPBPEPOJ_AFDEEMPIOLO_OFFSET UNITYSDK_OFFSET(0x1C68D540)
#define IALIPBPEPOJ_BGGIJCDMEKN_OFFSET UNITYSDK_OFFSET(0x1C68D8B0)
#define IALIPBPEPOJ_BKEHMIIGGOO_OFFSET UNITYSDK_OFFSET(0x1C68D3A0)
#define IALIPBPEPOJ_BPKAJEEENAM_OFFSET UNITYSDK_OFFSET(0x1C68C960)
#define IALIPBPEPOJ_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1C68AF30)
#define IALIPBPEPOJ_CHHCFIAPOCA_OFFSET UNITYSDK_OFFSET(0x1C68B2F0)
#define IALIPBPEPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C68A9E0)
#define IALIPBPEPOJ_ECAJNBEMNDO_OFFSET UNITYSDK_OFFSET(0x1C68D660)
#define IALIPBPEPOJ_ENIEKGKLIDF_OFFSET UNITYSDK_OFFSET(0x1C68DF30)
#define IALIPBPEPOJ_FGBPHNBABMA_OFFSET UNITYSDK_OFFSET(0x1C68C8C0)
#define IALIPBPEPOJ_FMLDIBHGPCK_OFFSET UNITYSDK_OFFSET(0x1C68CE30)
#define IALIPBPEPOJ_GET_BODYID_OFFSET UNITYSDK_OFFSET(0x1C68AC70)
#define IALIPBPEPOJ_GET_OWNERWORLD_OFFSET UNITYSDK_OFFSET(0x1C68ACA0)
#define IALIPBPEPOJ_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1C68B5D0)
#define IALIPBPEPOJ_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1C68ACC0)
#define IALIPBPEPOJ_HJCPDIACGEJ_OFFSET UNITYSDK_OFFSET(0x1C68C280)
#define IALIPBPEPOJ_IPJBKFNFGML_OFFSET UNITYSDK_OFFSET(0x1C68B200)
#define IALIPBPEPOJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1C68B960)
#define IALIPBPEPOJ_JELOHMFIOHP_OFFSET UNITYSDK_OFFSET(0x1C68BA90)
#define IALIPBPEPOJ_JJANEICEOKK_OFFSET UNITYSDK_OFFSET(0x1C68C340)
#define IALIPBPEPOJ_JPLKAINKLCH_OFFSET UNITYSDK_OFFSET(0x1C68B830)
#define IALIPBPEPOJ_KCGFHFKGHGC_OFFSET UNITYSDK_OFFSET(0x1C68BD10)
#define IALIPBPEPOJ_KDKFBONLGMG_OFFSET UNITYSDK_OFFSET(0x1C68B510)
#define IALIPBPEPOJ_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1C68B0A0)
#define IALIPBPEPOJ_KLBGPBACHBD_OFFSET UNITYSDK_OFFSET(0x1C68D480)
#define IALIPBPEPOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C68A9F0)
#define IALIPBPEPOJ_LBJCPMKMGPG_OFFSET UNITYSDK_OFFSET(0x1C68B460)
#define IALIPBPEPOJ_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x1C68AD70)
#define IALIPBPEPOJ_MCCIJFKECAB_OFFSET UNITYSDK_OFFSET(0x1C68B5F0)
#define IALIPBPEPOJ_MKLGEICGEKP_OFFSET UNITYSDK_OFFSET(0x1C68D2E0)
#define IALIPBPEPOJ_NEHMAALLDPO_OFFSET UNITYSDK_OFFSET(0x1C68B3A0)
#define IALIPBPEPOJ_NFPIMELKDFJ_OFFSET UNITYSDK_OFFSET(0x1C68BF60)
#define IALIPBPEPOJ_NJDODFOADDE_OFFSET UNITYSDK_OFFSET(0x1C68DC20)
#define IALIPBPEPOJ_PJINKBDKJDL_OFFSET UNITYSDK_OFFSET(0x1C68B100)
#define IALIPBPEPOJ_PPGAGOELCBG_OFFSET UNITYSDK_OFFSET(0x1C68AFE0)
#define IALIPBPEPOJ_PPHHAAOLBIL_OFFSET UNITYSDK_OFFSET(0x1C68C1C0)
#define IALIPBPEPOJ_SET_BODYID_OFFSET UNITYSDK_OFFSET(0x1C68AC90)
#define IALIPBPEPOJ_SET_OWNERWORLD_OFFSET UNITYSDK_OFFSET(0x1C68ACB0)
#define IALIPBPEPOJ_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1C68B5E0)

inline static constexpr unsigned int IALIPBPEPOJ_TypeDefinitionIndex = 36549;

	class IALIPBPEPOJ : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId _BodyId_k__BackingField; // 0x10
		::System::Object* _UserData_k__BackingField; // 0x28
		::NDPPHPJKOLN* _OwnerWorld_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::NDPPHPJKOLN* a2, ::System::Object* a3, ::RPG::GameCore::PhysicsRigidBodyType a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::NDPPHPJKOLN*, ::System::Object*, ::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId get_BodyId()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_GET_BODYID_OFFSET))(this);
		}

		::System::Void set_BodyId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_SET_BODYID_OFFSET))(this, a1);
		}

		::NDPPHPJKOLN* get_OwnerWorld()
		{
			return ((::NDPPHPJKOLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_GET_OWNERWORLD_OFFSET))(this);
		}

		::System::Void set_OwnerWorld(::NDPPHPJKOLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPPHPJKOLN*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_SET_OWNERWORLD_OFFSET))(this, a1);
		}

		::RPG::MVector2 HHMFILFAMNA()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::RPG::MVector2 CECMCADBMDE()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::System::Single PJINKBDKJDL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_PJINKBDKJDL_OFFSET))(this);
		}

		::System::Void IPJBKFNFGML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_IPJBKFNFGML_OFFSET))(this, a1);
		}

		::RPG::MVector2 CHHCFIAPOCA()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_CHHCFIAPOCA_OFFSET))(this);
		}

		::System::Void NEHMAALLDPO(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_NEHMAALLDPO_OFFSET))(this, a1);
		}

		::System::Single LBJCPMKMGPG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_LBJCPMKMGPG_OFFSET))(this);
		}

		::System::Void KDKFBONLGMG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_KDKFBONLGMG_OFFSET))(this, a1);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_SET_USERDATA_OFFSET))(this, a1);
		}

		::HGCDFKINFPA MCCIJFKECAB()
		{
			return ((::HGCDFKINFPA(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_MCCIJFKECAB_OFFSET))(this);
		}

		::System::Single JPLKAINKLCH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_JPLKAINKLCH_OFFSET))(this);
		}

		::RPG::GameCore::PhysicsRigidBodyType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::PhysicsRigidBodyType(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void JELOHMFIOHP(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_JELOHMFIOHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KCGFHFKGHGC(::RPG::MVector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_KCGFHFKGHGC_OFFSET))(this, a1, a2);
		}

		::System::Void NFPIMELKDFJ(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_NFPIMELKDFJ_OFFSET))(this, a1, a2);
		}

		::System::Void PPHHAAOLBIL(::RPG::GameCore::PhysicsRigidBodyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhysicsRigidBodyType))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_PPHHAAOLBIL_OFFSET))(this, a1);
		}

		::System::Void HJCPDIACGEJ(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_HJCPDIACGEJ_OFFSET))(this, a1);
		}

		::IOJGBIAJBIC* JJANEICEOKK(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector2 a4, ::RPG::MVector2 a5, ::System::Object* a6, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a7)
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::System::Single, ::System::Single, ::RPG::MVector2, ::RPG::MVector2, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_JJANEICEOKK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::IOJGBIAJBIC* BPKAJEEENAM(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::Object* a4, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a5)
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::MVector2, ::System::Single, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_BPKAJEEENAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IOJGBIAJBIC* FMLDIBHGPCK(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::System::Object* a4, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a5)
		{
			return ((::IOJGBIAJBIC*(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::MVector2, ::RPG::MVector2, ::System::Object*, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_FMLDIBHGPCK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MKLGEICGEKP(::IOJGBIAJBIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJGBIAJBIC*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_MKLGEICGEKP_OFFSET))(this, a1);
		}

		::System::Void BKEHMIIGGOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_BKEHMIIGGOO_OFFSET))(this);
		}

		::System::Void KLBGPBACHBD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_KLBGPBACHBD_OFFSET))(this, a1);
		}

		::System::Void AFDEEMPIOLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_AFDEEMPIOLO_OFFSET))(this, a1);
		}

		::System::Void ECAJNBEMNDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_ECAJNBEMNDO_OFFSET))(this, a1);
		}

		::System::Void PPGAGOELCBG(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_PPGAGOELCBG_OFFSET))(this, a1, a2);
		}

		::System::Int32 BGGIJCDMEKN(::System::Collections::Generic::List_1<::IOJGBIAJBIC*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::IOJGBIAJBIC*>*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_BGGIJCDMEKN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::IOJGBIAJBIC*>* NJDODFOADDE()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::IOJGBIAJBIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_NJDODFOADDE_OFFSET))(this);
		}

		::System::Void FGBPHNBABMA(::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef a2, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef, ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig*))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_FGBPHNBABMA_OFFSET))(this, a1, a2, a3);
		}

		::MDHODFHBAAO* ENIEKGKLIDF()
		{
			return ((::MDHODFHBAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALIPBPEPOJ_ENIEKGKLIDF_OFFSET))(this);
		}

	};
