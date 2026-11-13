#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEODAFPJLFE;
namespace System { class Object; }

#define EEODAFPJLFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2048F6E0)
#define EEODAFPJLFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2048F720)
#define EEODAFPJLFE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2048F730)

inline static constexpr unsigned int EEODAFPJLFE___c_TypeDefinitionIndex = 30231;

	class EEODAFPJLFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEODAFPJLFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE___C_CTOR_OFFSET))(this);
		}

		::EEODAFPJLFE* __cctor_b__33_0()
		{
			return ((::EEODAFPJLFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEODAFPJLFE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
