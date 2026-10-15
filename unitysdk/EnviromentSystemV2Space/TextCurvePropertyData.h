#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CustomCurvePropertyData.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1564C180)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x1564BF60)
#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1564BFD0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TextCurvePropertyData_TypeDefinitionIndex = 49400;

	class TextCurvePropertyData : public ::EnviromentSystemV2Space::CustomCurvePropertyData
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* times; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* paths; // 0x38
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}
