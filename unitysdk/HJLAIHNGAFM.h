#pragma once
#include "unitysdk/unitysdk.h"
class EPOFJMLCFPI;
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System { class Object; }

#define HJLAIHNGAFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2C040)
#define HJLAIHNGAFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D2D300)
#define HJLAIHNGAFM_GBHGNEEEEJC_OFFSET UNITYSDK_OFFSET(0x15D2C1A0)
#define HJLAIHNGAFM__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x15D2D2C0)
#define HJLAIHNGAFM__REBUILD_OFFSET UNITYSDK_OFFSET(0x15D2C200)

inline static constexpr unsigned int HJLAIHNGAFM_TypeDefinitionIndex = 75122;

	class HJLAIHNGAFM
	{
	public:
		::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* OBLBBOKGAOP; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* CIPONGCFEJP; // 0x28
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + HJLAIHNGAFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GBHGNEEEEJC(::System::Object* a1, ::EPOFJMLCFPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::EPOFJMLCFPI*))((::PBYTE)hIl2Cpp + HJLAIHNGAFM_GBHGNEEEEJC_OFFSET))(this, a1, a2);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLAIHNGAFM__REBUILD_OFFSET))(this);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLAIHNGAFM__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLAIHNGAFM_DISPOSE_OFFSET))(this);
		}

	};
