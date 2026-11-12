#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABIJNBDBBA;
namespace System { class Object; }

#define DABIJNBDBBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F423AD0)
#define DABIJNBDBBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F423B10)
#define DABIJNBDBBA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F423B20)

inline static constexpr unsigned int DABIJNBDBBA___c_TypeDefinitionIndex = 28565;

	class DABIJNBDBBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ED20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABIJNBDBBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA___C_CTOR_OFFSET))(this);
		}

		::DABIJNBDBBA* __cctor_b__43_0()
		{
			return ((::DABIJNBDBBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
