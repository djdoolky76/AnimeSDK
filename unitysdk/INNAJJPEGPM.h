#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveReadMoveRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define INNAJJPEGPM_CTOR_OFFSET UNITYSDK_OFFSET(0x164E9C60)
#define INNAJJPEGPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164E9C70)
#define INNAJJPEGPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164E9CC0)
#define INNAJJPEGPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164EA280)
#define INNAJJPEGPM_TICK_OFFSET UNITYSDK_OFFSET(0x164E9D90)

inline static constexpr unsigned int INNAJJPEGPM_TypeDefinitionIndex = 58316;

	class INNAJJPEGPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::GameEntity* FFPOIKCEIDI; // 0x20
		::RPG::GameCore::PropCurveReadMoveRatio* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::GameEntity* DCOOJFFNBMH; // 0x30
		::System::String* CHMOJFKDIMF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveReadMoveRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveReadMoveRatio*))((::PBYTE)hIl2Cpp + INNAJJPEGPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNAJJPEGPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNAJJPEGPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INNAJJPEGPM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNAJJPEGPM_ONTASKRESET_OFFSET))(this);
		}

	};
