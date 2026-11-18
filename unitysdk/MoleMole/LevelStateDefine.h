#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDGBEDPCGDI.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELSTATEDEFINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D25DC0)
#define MOLEMOLE_LEVELSTATEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D25DB0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelStateDefine_TypeDefinitionIndex = 68364;

	class LevelStateDefine : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::CDGBEDPCGDI>** StaticGet_LevelStateTypeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::CDGBEDPCGDI>**)Il2CppClass::FromTypeDefinitionIndex(LevelStateDefine_TypeDefinitionIndex)->GetStaticField(0x38900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATEDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATEDEFINE__CCTOR_OFFSET))();
		}
	};
}
