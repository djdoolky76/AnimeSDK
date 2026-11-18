#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_GMEBFGMDANA.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTOWERHOLDEROBJECT_GETALL_OFFSET UNITYSDK_OFFSET(0x1469D7B0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_HASTAG_OFFSET UNITYSDK_OFFSET(0x1469D990)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_ISALLOWED_OFFSET UNITYSDK_OFFSET(0x1469D8F0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_JMJKGOPDMDI_OFFSET UNITYSDK_OFFSET(0x1469DBC0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_POPTAG_OFFSET UNITYSDK_OFFSET(0x1469DA70)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT_PUSHTAG_OFFSET UNITYSDK_OFFSET(0x1469D9F0)
#define MOLEMOLE_MONOTOWERHOLDEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1469DAD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTowerHolderObject_TypeDefinitionIndex = 44850;

	class MonoTowerHolderObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::MoleMole::MonoTowerHolderObject_GMEBFGMDANA TowerRangeType; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* AddTowerAbility; // 0x40
		::System::Boolean isOccupied; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::UInt32>* disableTags; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::MoleMole::MonoTowerHolderObject*>* GetAll()
		{
			return ((::Il2CppArray<::MoleMole::MonoTowerHolderObject*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_GETALL_OFFSET))();
		}

		::System::Boolean IsAllowed(::MoleMole::MonoTowerHolderObject_GMEBFGMDANA NEAOFNHMFOA)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoTowerHolderObject_GMEBFGMDANA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_ISALLOWED_OFFSET))(this, NEAOFNHMFOA);
		}

		::System::Boolean HasTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_HASTAG_OFFSET))(this);
		}

		::System::Void PushTag(::System::UInt32 AELLPLBJELA)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_PUSHTAG_OFFSET))(this, AELLPLBJELA);
		}

		::System::Void PopTag(::System::UInt32 AELLPLBJELA)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_POPTAG_OFFSET))(this, AELLPLBJELA);
		}

		static ::System::Boolean JMJKGOPDMDI(::MoleMole::MonoTowerHolderObject* OMPHGGCEIBD)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTOWERHOLDEROBJECT_JMJKGOPDMDI_OFFSET))(OMPHGGCEIBD);
		}
	};
}
