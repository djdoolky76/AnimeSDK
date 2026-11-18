#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1909A680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardFilter_TypeDefinitionIndex = 39794;

	class ConfigChessboardFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* effectList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDFILTER__CTOR_OFFSET))(this);
		}
	};
}
