#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOIEJOCFKEE;
namespace System { class Object; }

#define GOIEJOCFKEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F802C90)
#define GOIEJOCFKEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F802CC0)
#define GOIEJOCFKEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F802CD0)

inline static constexpr unsigned int GOIEJOCFKEE___c_TypeDefinitionIndex = 33580;

	class GOIEJOCFKEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOIEJOCFKEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE___C_CTOR_OFFSET))(this);
		}

		::GOIEJOCFKEE* __cctor_b__23_0()
		{
			return ((::GOIEJOCFKEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIEJOCFKEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
