#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraWaitSecond; }

#define PEAGLIIMNCM_CTOR_OFFSET UNITYSDK_OFFSET(0xC023EA0)
#define PEAGLIIMNCM_GET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0xC024030)
#define PEAGLIIMNCM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC023FA0)
#define PEAGLIIMNCM_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xC023ED0)
#define PEAGLIIMNCM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC023F10)
#define PEAGLIIMNCM_SET_CANBEREMOVED_OFFSET UNITYSDK_OFFSET(0xC024040)

inline static constexpr unsigned int PEAGLIIMNCM_TypeDefinitionIndex = 78398;

	class PEAGLIIMNCM : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraWaitSecond* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::System::Single LLNIGIGFCEA; // 0x20
		::System::Boolean _CanBeRemoved_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::ChimeraWaitSecond* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWaitSecond*))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean get_CanBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_GET_CANBEREMOVED_OFFSET))(this);
		}

		::System::Void set_CanBeRemoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEAGLIIMNCM_SET_CANBEREMOVED_OFFSET))(this, a1);
		}

	};
