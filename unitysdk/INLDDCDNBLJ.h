#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }
namespace UnityEngine { class Collider; }

#define INLDDCDNBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164E77F0)
#define INLDDCDNBLJ_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x164E8260)
#define INLDDCDNBLJ_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x164E7980)
#define INLDDCDNBLJ_LPOIOGGOBFI_OFFSET UNITYSDK_OFFSET(0x164E7E60)
#define INLDDCDNBLJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x164E7910)
#define INLDDCDNBLJ_NGJMGGPIOIJ_OFFSET UNITYSDK_OFFSET(0x164E8900)
#define INLDDCDNBLJ_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0x164E8010)
#define INLDDCDNBLJ_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x164E8170)

inline static constexpr unsigned int INLDDCDNBLJ_TypeDefinitionIndex = 54734;

	class INLDDCDNBLJ : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x48
		::UnityEngine::Collider* GEDMHBDAPGC; // 0x50
		::RPG::GameCore::BGCurveWithDetectProjectileData* FPGPHIEOMFL; // 0x58
		::UnityEngine::Vector3 JEKJEFELGLF; // 0x60
		::System::Single NKOAMJFKKLH; // 0x6C
		::UnityEngine::Vector3 CLIOGBBJILH; // 0x70
		::System::Boolean HGHPAOHCIAN; // 0x7C
		::System::Boolean HOAGFGHBLJD; // 0x7D
		::System::Boolean MDMAEPBKKEF; // 0x7E
		::System::Byte _padding0[0x1];
		::System::Single FLBLLMPABOJ; // 0x80
		::UnityEngine::Vector3 MMMJAGICBDK; // 0x84
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_KFLNENIGDIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_NNALPNDFFIJ_OFFSET))(this);
		}

		::System::Void LPOIOGGOBFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_LPOIOGGOBFI_OFFSET))(this, a1);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Single NGJMGGPIOIJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDDCDNBLJ_NGJMGGPIOIJ_OFFSET))(this);
		}

	};
