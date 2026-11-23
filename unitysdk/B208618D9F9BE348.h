#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/B04B724027C75F91.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define B208618D9F9BE348_E2EA0FB010CE7F0F_OFFSET UNITYSDK_OFFSET(0x3BA2F90)
#define B208618D9F9BE348__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B208618D9F9BE348_TypeDefinitionIndex = 11103;

class B208618D9F9BE348 : public ::System::Object
{
public:
	static ::System::Type* E2EA0FB010CE7F0F(::System::String* EC2038339CE86133, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::F60CD5AA5C2080DF*>* AED1968DC0F2D610, ::System::Func_4<::System::Reflection::F60CD5AA5C2080DF*, ::System::String*, ::System::Boolean, ::System::Type*>* AFB0147E7E1071BD, ::System::Boolean F931B6181DE159D1, ::System::Boolean ACBE55281F187CE7, ::System::Threading::B04B724027C75F91& B18E190AA66E48C0)
	{
		return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::F60CD5AA5C2080DF*>*, ::System::Func_4<::System::Reflection::F60CD5AA5C2080DF*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean, ::System::Threading::B04B724027C75F91&))((::PBYTE)hIl2Cpp + B208618D9F9BE348_E2EA0FB010CE7F0F_OFFSET))(EC2038339CE86133, AED1968DC0F2D610, AFB0147E7E1071BD, F931B6181DE159D1, ACBE55281F187CE7, B18E190AA66E48C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B208618D9F9BE348__CTOR_OFFSET))(this);
	}
};
