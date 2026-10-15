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

#define BMOMAEJOJJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBDF10)
#define BMOMAEJOJJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDBDAA0)
#define BMOMAEJOJJP_EBDMPMAPMOB_OFFSET UNITYSDK_OFFSET(0xBDBDEC0)
#define BMOMAEJOJJP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBDBDE30)
#define BMOMAEJOJJP_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xBDBDEB0)
#define BMOMAEJOJJP_NPEBFFNNNNA_OFFSET UNITYSDK_OFFSET(0xBDBDD20)
#define BMOMAEJOJJP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBDBDB00)

inline static constexpr unsigned int BMOMAEJOJJP_TypeDefinitionIndex = 56905;

	class BMOMAEJOJJP : public ::System::Object
	{
	public:
		::CFFPEAALCPH* CGEHIKEMOFP; // 0x10
		::System::String* POCLNOBKHFH; // 0x18
		::RPG::GameCore::HitMotionParams* EGKEPFCFPKB; // 0x20
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28
		::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x30
		::System::Single HKGPLKJOCDH; // 0x34
		::System::Single MIAPBKLMCLO; // 0x38
		::RPG::MVector3 ACGINICEHML; // 0x3C
		::System::Single IJAJOGNGEIK; // 0x48
		::RPG::MVector3 PNMLLANDNKM; // 0x4C
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
