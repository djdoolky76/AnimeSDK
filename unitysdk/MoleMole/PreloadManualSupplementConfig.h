#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MINKOFHKOMP.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADMANUALSUPPLEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146A7B70)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadManualSupplementConfig_TypeDefinitionIndex = 80190;

	class PreloadManualSupplementConfig : public ::System::Object
	{
	public:
		::MINKOFHKOMP targetType; // 0x10
		::System::Int32 targetId; // 0x14
		::System::Collections::Generic::List_1<::System::String*>* supplementPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADMANUALSUPPLEMENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
