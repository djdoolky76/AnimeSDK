#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CPFIIFBPLCO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD31F0)
#define CPFIIFBPLCO_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xDCD3780)
#define CPFIIFBPLCO_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xDCD3380)
#define CPFIIFBPLCO_NGJMGGPIOIJ_OFFSET UNITYSDK_OFFSET(0xDCD3D40)
#define CPFIIFBPLCO_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0xDCD3250)
#define CPFIIFBPLCO_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xDCD3E60)

	class CPFIIFBPLCO : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x48
		::RPG::GameCore::BGCurveProjectileData* FPGPHIEOMFL; // 0x50
		::System::Boolean HOAGFGHBLJD; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single NKOAMJFKKLH; // 0x5C
		::UnityEngine::Vector3 CLIOGBBJILH; // 0x60
		::UnityEngine::Vector3 MMMJAGICBDK; // 0x6C
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_NNALPNDFFIJ_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Single NGJMGGPIOIJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_NGJMGGPIOIJ_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPFIIFBPLCO_PGKPGNJJMMB_OFFSET))(this, a1);
		}

	};
