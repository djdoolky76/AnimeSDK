#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1F958C00)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F958CE0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F959260)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F9591A0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F9592D0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F959210)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F9591C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F958B10)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F958AF0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameConsole_FKJLPANBMDF_TypeDefinitionIndex = 94942;

	class BallPitGameConsole_FKJLPANBMDF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::String*>* GHANCJDIDBC; // 0x10
		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*> IDBEJJEKGDI; // 0x18
		::System::Byte _padding0[0x10];
		::System::Int32 MDPILDGFNHN; // 0x30
		::System::Int32 FPDDAGHMOJB; // 0x34

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_MOVENEXT_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_System_String___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_System_String___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void JPCPBBAMDGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMECONSOLE_FKJLPANBMDF_JPCPBBAMDGJ_OFFSET))(this);
		}
	};
}
