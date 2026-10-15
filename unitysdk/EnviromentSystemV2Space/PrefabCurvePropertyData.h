#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/EnviromentSystemV2Space/PrefabPropertyData.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1564B530)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET UNITYSDK_OFFSET(0x1564B370)
#define ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1564B3C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PrefabCurvePropertyData_TypeDefinitionIndex = 49399;

	class PrefabCurvePropertyData : public ::EnviromentSystemV2Space::PrefabPropertyData
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* times; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* paths; // 0x40
		::EnviromentSystemV2Space::EnvCallbackCurveType callbackCurveType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean EIOEKCFAIMG(::EnviromentSystemV2Space::PropertyDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystemV2Space::PropertyDataBase*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_EIOEKCFAIMG_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PREFABCURVEPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}
