#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76F820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCampTypeConfig_TypeDefinitionIndex = 72174;

	class HollowCampTypeConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>* configDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMPTYPECONFIG__CTOR_OFFSET))(this);
		}
	};
}
