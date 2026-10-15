#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define COKGJGHMGEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB9D90)
#define COKGJGHMGEJ_DACNGFAILDK_OFFSET UNITYSDK_OFFSET(0xDCB9DF0)
#define COKGJGHMGEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB9DA0)
#define COKGJGHMGEJ_FIABLKFJCBF_OFFSET UNITYSDK_OFFSET(0xDCB9EF0)
#define COKGJGHMGEJ_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xDCBA060)
#define COKGJGHMGEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB9EA0)
#define COKGJGHMGEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB9FB0)
#define COKGJGHMGEJ_PBPLAMOFCMF_OFFSET UNITYSDK_OFFSET(0xDCBA0A0)
#define COKGJGHMGEJ_TICK_OFFSET UNITYSDK_OFFSET(0xDCBA000)

inline static constexpr unsigned int COKGJGHMGEJ_TypeDefinitionIndex = 58419;

	class COKGJGHMGEJ : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean NJEMCPDFAOK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_GETCONFIG_OFFSET))(this);
		}

		::System::Void PBPLAMOFCMF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_PBPLAMOFCMF_OFFSET))(this, a1);
		}

		::System::Void FIABLKFJCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_FIABLKFJCBF_OFFSET))(this);
		}

		::System::Void DACNGFAILDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKGJGHMGEJ_DACNGFAILDK_OFFSET))(this);
		}

	};
