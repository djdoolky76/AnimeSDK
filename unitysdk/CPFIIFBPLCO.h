#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CPFIIFBPLCO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCC2E0)
#define CPFIIFBPLCO_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xDCCC870)
#define CPFIIFBPLCO_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xDCCC470)
#define CPFIIFBPLCO_NGJMGGPIOIJ_OFFSET UNITYSDK_OFFSET(0xDCCCE30)
#define CPFIIFBPLCO_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0xDCCC340)
#define CPFIIFBPLCO_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xDCCCF50)

inline static constexpr unsigned int CPFIIFBPLCO_TypeDefinitionIndex = 54733;

	class CPFIIFBPLCO : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::BGCurveProjectileData* FPGPHIEOMFL; // 0x48
		::RPG::GameCore::MonoProjectileBGCurve* HBHMBJKBCMN; // 0x50
		::System::Single NKOAMJFKKLH; // 0x58
		::System::Boolean HOAGFGHBLJD; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MMMJAGICBDK; // 0x60
		::UnityEngine::Vector3 CLIOGBBJILH; // 0x6C
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
