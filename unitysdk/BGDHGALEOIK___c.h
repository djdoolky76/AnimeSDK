#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDHGALEOIK;
namespace System { class Object; }

#define BGDHGALEOIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA71C40)
#define BGDHGALEOIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA71C70)
#define BGDHGALEOIK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA71C80)

inline static constexpr unsigned int BGDHGALEOIK___c_TypeDefinitionIndex = 33250;

	class BGDHGALEOIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGDHGALEOIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK___C_CTOR_OFFSET))(this);
		}

		::BGDHGALEOIK* __cctor_b__23_0()
		{
			return ((::BGDHGALEOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDHGALEOIK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
