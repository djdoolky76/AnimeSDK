#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCECJENGJLD;
namespace System { class Object; }

#define DCECJENGJLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E169720)
#define DCECJENGJLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E169760)
#define DCECJENGJLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E169770)

inline static constexpr unsigned int DCECJENGJLD___c_TypeDefinitionIndex = 25121;

	class DCECJENGJLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B770);
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
