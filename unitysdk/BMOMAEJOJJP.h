#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class BMOMAEJOJJP;
class CFFPEAALCPH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HitMotionParams; }
namespace System { class String; }

#define BMOMAEJOJJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1D60)
#define BMOMAEJOJJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDC18F0)
#define BMOMAEJOJJP_EBDMPMAPMOB_OFFSET UNITYSDK_OFFSET(0xBDC1D10)
#define BMOMAEJOJJP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBDC1C80)
#define BMOMAEJOJJP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xBDC1D00)
#define BMOMAEJOJJP_NPEBFFNNNNA_OFFSET UNITYSDK_OFFSET(0xBDC1B70)
#define BMOMAEJOJJP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBDC1950)

inline static constexpr unsigned int BMOMAEJOJJP_TypeDefinitionIndex = 56905;

	class BMOMAEJOJJP : public ::System::Object
	{
	public:
		::RPG::GameCore::HitMotionParams* EGKEPFCFPKB; // 0x10
		::System::String* POCLNOBKHFH; // 0x18
		::CFFPEAALCPH* CGEHIKEMOFP; // 0x20
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28
		::RPG::MVector3 PNMLLANDNKM; // 0x30
		::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x3C
		::System::Single IJAJOGNGEIK; // 0x40
		::RPG::MVector3 ACGINICEHML; // 0x44
		::System::Single MIAPBKLMCLO; // 0x50
		::System::Single HKGPLKJOCDH; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_PKADDEPKJFN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::BMOMAEJOJJP* EBDMPMAPMOB()
		{
			return ((::BMOMAEJOJJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_EBDMPMAPMOB_OFFSET))(this);
		}

		::System::Boolean NPEBFFNNNNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_NPEBFFNNNNA_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMAEJOJJP_LDKMIKEMHFO_OFFSET))(this);
		}

	};
