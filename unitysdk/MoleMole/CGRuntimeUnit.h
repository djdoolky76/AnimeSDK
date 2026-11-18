#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDJFEEALOIB.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CGRuntimeReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CGRUNTIMEUNIT_BIABCFJNIIC_OFFSET UNITYSDK_OFFSET(0x190862B0)
#define MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET UNITYSDK_OFFSET(0x19086260)
#define MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19086640)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeUnit_TypeDefinitionIndex = 40180;

	class CGRuntimeUnit : public ::System::Object
	{
	public:
		::MoleMole::Config::EntityType unitType; // 0x10
		::System::Int32 unitId; // 0x14
		::System::Int32 index; // 0x18
		::MoleMole::CGRuntimeUnitLoadType loadType; // 0x1C
		::System::Boolean LoadSkin; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 SkinId; // 0x24
		::System::Boolean LoadAccessory; // 0x28
		::System::Byte _padding1[0x3];
		::MDJFEEALOIB showMode; // 0x2C
		::System::Int32 SpecificAccessoryTemplateID; // 0x30
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeReference*>* references; // 0x38
		::UnityEngine::Transform* unitObj; // 0x40
		::UnityEngine::Vector3 initPos; // 0x48
		::UnityEngine::Vector3 initAngles; // 0x54

		::System::Void _ctor(::MoleMole::Config::EntityType BPDDFBHPDNG, ::System::Int32 OIHENLPJDBC, ::System::Int32 MLNKCNJEOMI, ::UnityEngine::Transform* CPIKDLPHAFA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET))(this, BPDDFBHPDNG, OIHENLPJDBC, MLNKCNJEOMI, CPIKDLPHAFA);
		}

		::System::String* get_ReferenceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET))(this);
		}

		static ::System::String* BIABCFJNIIC(::MoleMole::Config::EntityType JAICKFPPOEO, ::System::Int32 CEAIFEDJNLI, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::String*(*)(::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_BIABCFJNIIC_OFFSET))(JAICKFPPOEO, CEAIFEDJNLI, ABHBKFJKINO);
		}
	};
}
