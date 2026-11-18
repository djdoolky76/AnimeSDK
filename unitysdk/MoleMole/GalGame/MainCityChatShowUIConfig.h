#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNOMJDLHAOD;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x14AEB3C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x14AEB470)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONAFTERTRANSITION_OFFSET UNITYSDK_OFFSET(0x14AEB480)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEB4F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIConfig_TypeDefinitionIndex = 43169;

	class MainCityChatShowUIConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG__CTOR_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::Void OnAfterTransition(::HNOMJDLHAOD* node, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUICONFIG_ONAFTERTRANSITION_OFFSET))(this, node, action);
		}
	};
}
