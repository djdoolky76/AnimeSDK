#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PlayerMotionProviderCameraMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JLCNECHMMNG;
namespace RPG::Client::Prop { class PuzzleCameraControllerBase; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KGNMHBFIJEI_BDJNDKLDADP_OFFSET UNITYSDK_OFFSET(0x197817F0)
#define KGNMHBFIJEI_COMEDIAOJBM_OFFSET UNITYSDK_OFFSET(0x197807C0)
#define KGNMHBFIJEI_CTOR_OFFSET UNITYSDK_OFFSET(0x19780220)
#define KGNMHBFIJEI_DALPHNCNKBD_OFFSET UNITYSDK_OFFSET(0x197816D0)
#define KGNMHBFIJEI_DBJAPAAMHJA_OFFSET UNITYSDK_OFFSET(0x197815B0)
#define KGNMHBFIJEI_DIEMOLMEHJN_OFFSET UNITYSDK_OFFSET(0x197820B0)
#define KGNMHBFIJEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19780640)
#define KGNMHBFIJEI_FHGKPICEKKA_OFFSET UNITYSDK_OFFSET(0x19780990)
#define KGNMHBFIJEI_IAMIOECNBND_OFFSET UNITYSDK_OFFSET(0x197808F0)
#define KGNMHBFIJEI_JCILGFNODHF_OFFSET UNITYSDK_OFFSET(0x197817B0)
#define KGNMHBFIJEI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19781130)
#define KGNMHBFIJEI_KIMFDNALFDH_OFFSET UNITYSDK_OFFSET(0x19780FE0)
#define KGNMHBFIJEI_KNNJJNNMFGM_OFFSET UNITYSDK_OFFSET(0x19780460)
#define KGNMHBFIJEI_KOIPIBBKJII_OFFSET UNITYSDK_OFFSET(0x19780330)
#define KGNMHBFIJEI_LNJNFAHPHJK_1_OFFSET UNITYSDK_OFFSET(0x19781E60)
#define KGNMHBFIJEI_LNJNFAHPHJK_OFFSET UNITYSDK_OFFSET(0x19781830)
#define KGNMHBFIJEI_NFHOBGBFACB_OFFSET UNITYSDK_OFFSET(0x197820C0)
#define KGNMHBFIJEI_NGOMLJNPAMM_OFFSET UNITYSDK_OFFSET(0x19781600)
#define KGNMHBFIJEI_NODLOIDGBGL_OFFSET UNITYSDK_OFFSET(0x19780810)

inline static constexpr unsigned int KGNMHBFIJEI_TypeDefinitionIndex = 81534;

	class KGNMHBFIJEI : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OLOJPBGPDEJ; // 0x10
		::UnityEngine::Transform* DJMMHJPLLPL; // 0x18
		::UnityEngine::GameObject* OJPPABAMHPL; // 0x20
		::RPG::Client::Prop::PuzzleCameraControllerBase* IJPIHJKEPKE; // 0x28
		::UnityEngine::Coroutine* IFPKPHFBBCP; // 0x30
		::JLCNECHMMNG* BECOOHALAFM; // 0x38
		::System::Single ACIGOFBLFJI; // 0x40
		::System::Single MDIBOEGIJAP; // 0x44
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x48
		::System::Boolean FHEJECEAJOJ; // 0x54
		::System::Byte _padding0[0x3];
		::System::Int32 FJNCJHMNBBK; // 0x58
		::System::Single PGJDFKOKKHL; // 0x5C
		::UnityEngine::Quaternion FEHPAKLCLBF; // 0x60
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_CTOR_OFFSET))(this, a1);
		}

		::System::Void KOIPIBBKJII(::RPG::Client::Prop::PlayerMotionProviderCameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PlayerMotionProviderCameraMode))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_KOIPIBBKJII_OFFSET))(this, a1);
		}

		::System::Void KNNJJNNMFGM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_KNNJJNNMFGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_DISPOSE_OFFSET))(this);
		}

		::System::Void NODLOIDGBGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_NODLOIDGBGL_OFFSET))(this);
		}

		::System::Void IAMIOECNBND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_IAMIOECNBND_OFFSET))(this);
		}

		::System::Void FHGKPICEKKA(::JLCNECHMMNG* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNECHMMNG*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_FHGKPICEKKA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DBJAPAAMHJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_DBJAPAAMHJA_OFFSET))(this);
		}

		::System::Void KIMFDNALFDH(::JLCNECHMMNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNECHMMNG*))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_KIMFDNALFDH_OFFSET))(this, a1);
		}

		::System::Void NGOMLJNPAMM(::JLCNECHMMNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCNECHMMNG*))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_NGOMLJNPAMM_OFFSET))(this, a1);
		}

		::System::Single DALPHNCNKBD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_DALPHNCNKBD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BDJNDKLDADP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_BDJNDKLDADP_OFFSET))(this);
		}

		::System::Void LNJNFAHPHJK(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_LNJNFAHPHJK_OFFSET))(this, a1, a2);
		}

		::System::Void LNJNFAHPHJK_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_LNJNFAHPHJK_1_OFFSET))(this);
		}

		::System::Void JCILGFNODHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_JCILGFNODHF_OFFSET))(this);
		}

		::System::Void COMEDIAOJBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_COMEDIAOJBM_OFFSET))(this);
		}

		::UnityEngine::Transform* DIEMOLMEHJN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_DIEMOLMEHJN_OFFSET))(this);
		}

		::System::Boolean NFHOBGBFACB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNMHBFIJEI_NFHOBGBFACB_OFFSET))(this);
		}

	};
