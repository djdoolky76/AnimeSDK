#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoSummerEventStartTip; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13F01990)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13F01B10)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13F01B70)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13F01B20)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13F01980)
#define MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13F01970)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventStartTip_GKHDLALEFCJ_TypeDefinitionIndex = 55732;

	class MonoSummerEventStartTip_GKHDLALEFCJ : public ::System::Object
	{
	public:
		::System::Action* EJGDHCIBCJH; // 0x10
		::System::String* KKNCFOJBPMK; // 0x18
		::System::Object* IDBEJJEKGDI; // 0x20
		::MoleMole::MonoSummerEventStartTip* KLHPEBKNIFB; // 0x28
		::System::Int32 MDPILDGFNHN; // 0x30

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTSTARTTIP_GKHDLALEFCJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
