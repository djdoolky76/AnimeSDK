#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNNMGIJMFK;
class CLDOIEGCNLD;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ACNNMGIJMFK___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1297C0)
#define ACNNMGIJMFK___C__DISPLAYCLASS13_0___CHECKHAVEEQUIPMENTCONFLICT_B__0_OFFSET UNITYSDK_OFFSET(0xB12A1C0)

inline static constexpr unsigned int ACNNMGIJMFK___c__DisplayClass13_0_TypeDefinitionIndex = 81511;

	class ACNNMGIJMFK___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* lineupAvatarIDs; // 0x10
		::ACNNMGIJMFK* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckHaveEquipmentConflict_b__0(::CLDOIEGCNLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLDOIEGCNLD*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS13_0___CHECKHAVEEQUIPMENTCONFLICT_B__0_OFFSET))(this, a1);
		}

	};
