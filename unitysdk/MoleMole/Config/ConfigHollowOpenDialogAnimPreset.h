#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x121C1D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOpenDialogAnimPreset_TypeDefinitionIndex = 42836;

	class ConfigHollowOpenDialogAnimPreset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Configs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOPENDIALOGANIMPRESET__CTOR_OFFSET))(this);
		}
	};
}
