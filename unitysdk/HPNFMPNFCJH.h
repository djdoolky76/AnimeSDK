#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetTraceOrigamiFlag; }
namespace RPG::GameCore { class TaskContext; }

#define HPNFMPNFCJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD5640)
#define HPNFMPNFCJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD5500)
#define HPNFMPNFCJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DD5530)

inline static constexpr unsigned int HPNFMPNFCJH_TypeDefinitionIndex = 53256;

	class HPNFMPNFCJH
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_OIGCOKPHANN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "HPNFMPNFCJH")->GetStaticField(0xC1B0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTraceOrigamiFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTraceOrigamiFlag*))((::PBYTE)hIl2Cpp + HPNFMPNFCJH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPNFMPNFCJH_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFMPNFCJH_ONTASKBEGIN_OFFSET))(this);
		}

	};
