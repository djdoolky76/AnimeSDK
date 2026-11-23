#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_KIBANANETBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x38FAAA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaNetBoxConfig_TypeDefinitionIndex = 12307;

	class KibanaNetBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* status_codes; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* url_paths; // 0x20

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANANETBOXCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
