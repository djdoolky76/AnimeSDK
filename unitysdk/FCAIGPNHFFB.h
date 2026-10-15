#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KHPOKIKCOFO;
namespace RPG::GameCore { class MonopolyShowSwitchSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FCAIGPNHFFB_CTOR_OFFSET UNITYSDK_OFFSET(0x156A2AF0)
#define FCAIGPNHFFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A3040)
#define FCAIGPNHFFB_GOLJLHCFEDH_OFFSET UNITYSDK_OFFSET(0x156A2D60)
#define FCAIGPNHFFB_HDOFELJOLIE_OFFSET UNITYSDK_OFFSET(0x156A2BD0)
#define FCAIGPNHFFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156A2B00)
#define FCAIGPNHFFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156A2FC0)
#define FCAIGPNHFFB_TICK_OFFSET UNITYSDK_OFFSET(0x156A30C0)

inline static constexpr unsigned int FCAIGPNHFFB_TypeDefinitionIndex = 58223;

	class FCAIGPNHFFB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyShowSwitchSpeTransition* OFKGLJOAMLD; // 0x20
		::KHPOKIKCOFO* PCLCMGBHPIO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HDOFELJOLIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_HDOFELJOLIE_OFFSET))(this);
		}

		::System::Void GOLJLHCFEDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_GOLJLHCFEDH_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCAIGPNHFFB_TICK_OFFSET))(this, a1);
		}

	};
