#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCECJENGJLD;
namespace System { class Object; }

#define DCECJENGJLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F46B5E0)
#define DCECJENGJLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F46B620)
#define DCECJENGJLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F46B630)

inline static constexpr unsigned int DCECJENGJLD___c_TypeDefinitionIndex = 25599;

	class DCECJENGJLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCECJENGJLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD___C_CTOR_OFFSET))(this);
		}

		::DCECJENGJLD* __cctor_b__28_0()
		{
			return ((::DCECJENGJLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
