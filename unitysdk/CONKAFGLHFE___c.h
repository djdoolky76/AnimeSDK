#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CONKAFGLHFE;
namespace System { class Object; }

#define CONKAFGLHFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E0730)
#define CONKAFGLHFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204E0770)
#define CONKAFGLHFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204E0780)

inline static constexpr unsigned int CONKAFGLHFE___c_TypeDefinitionIndex = 29968;

	class CONKAFGLHFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONKAFGLHFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE___C_CTOR_OFFSET))(this);
		}

		::CONKAFGLHFE* __cctor_b__28_0()
		{
			return ((::CONKAFGLHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONKAFGLHFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
