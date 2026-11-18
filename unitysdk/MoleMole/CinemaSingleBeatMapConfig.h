#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SerializedScriptableObjectBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CINEMASINGLEBEATMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC3FA0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleBeatMapConfig_TypeDefinitionIndex = 85807;

	class CinemaSingleBeatMapConfig : public ::MoleMole::SerializedScriptableObjectBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* beatMaps; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMASINGLEBEATMAPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
