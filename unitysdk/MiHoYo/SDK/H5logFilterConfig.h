#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_H5LOGFILTERCONFIG_ISREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x3A1D890)
#define MIHOYO_SDK_H5LOGFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1D9A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logFilterConfig_TypeDefinitionIndex = 12919;

	class H5logFilterConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* filters; // 0x10

		::System::Boolean IsReportEnable(::System::String* A4448D8050DC0EDF, ::System::String* A5C299C395D3E1B2, ::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGFILTERCONFIG_ISREPORTENABLE_OFFSET))(this, A4448D8050DC0EDF, A5C299C395D3E1B2, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::System::String* E38AC34CA582739D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGFILTERCONFIG__CTOR_OFFSET))(this, E38AC34CA582739D);
		}
	};
}
