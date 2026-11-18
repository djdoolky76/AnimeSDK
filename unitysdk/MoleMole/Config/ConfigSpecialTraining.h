#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALTRAINING__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA1BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialTraining_TypeDefinitionIndex = 78553;

	class ConfigSpecialTraining : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarList; // 0x10
		::System::String* DesTextKey; // 0x18
		::System::String* IconPath; // 0x20
		::System::Int32 LevelDesignID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALTRAINING__CTOR_OFFSET))(this);
		}
	};
}
