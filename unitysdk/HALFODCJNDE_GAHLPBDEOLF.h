#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SDFObjectMonoPlugin; }

#define HALFODCJNDE_GAHLPBDEOLF_COMPARE_OFFSET UNITYSDK_OFFSET(0x15B8F9C0)
#define HALFODCJNDE_GAHLPBDEOLF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B8F870)

	class HALFODCJNDE_GAHLPBDEOLF : public ::System::Object
	{
	public:
		::System::Int32 JOGJNDDNCFL; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_GAHLPBDEOLF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::Client::SDFObjectMonoPlugin* a1, ::RPG::Client::SDFObjectMonoPlugin* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + HALFODCJNDE_GAHLPBDEOLF_COMPARE_OFFSET))(this, a1, a2);
		}

	};
