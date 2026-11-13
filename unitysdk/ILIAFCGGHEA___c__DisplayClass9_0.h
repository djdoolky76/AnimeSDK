#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILIAFCGGHEA___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B59E1A0)
#define ILIAFCGGHEA___C__DISPLAYCLASS9_0__MIGRATELEGACYCONNECTORS_B__0_OFFSET UNITYSDK_OFFSET(0x1B59FAF0)

inline static constexpr unsigned int ILIAFCGGHEA___c__DisplayClass9_0_TypeDefinitionIndex = 49974;

	class ILIAFCGGHEA___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Newtonsoft::Json::Linq::JToken*, ::System::Boolean>* __9__0; // 0x10
		::System::String* qualifiedId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIAFCGGHEA___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _MigrateLegacyConnectors_b__0(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + ILIAFCGGHEA___C__DISPLAYCLASS9_0__MIGRATELEGACYCONNECTORS_B__0_OFFSET))(this, a1);
		}

	};
