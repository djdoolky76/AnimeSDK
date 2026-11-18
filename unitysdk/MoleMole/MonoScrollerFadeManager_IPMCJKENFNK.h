#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoScrollerFadeManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x181042A0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18104B10)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18104B70)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18104B20)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18104290)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK__CTOR_OFFSET UNITYSDK_OFFSET(0x18104280)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollerFadeManager_IPMCJKENFNK_TypeDefinitionIndex = 46418;

	class MonoScrollerFadeManager_IPMCJKENFNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* FOLIEKOGDOD; // 0x10
		::System::Object* IDBEJJEKGDI; // 0x18
		::MoleMole::MonoScrollerFadeManager* KLHPEBKNIFB; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FBFFNONANPB; // 0x28
		::System::Int32 BIOGEIHKABE; // 0x30
		::System::Single LJNNGMIANKH; // 0x34
		::System::Int32 FKHDEPNOPGO; // 0x38
		::System::Int32 MDPILDGFNHN; // 0x3C

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_IPMCJKENFNK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
