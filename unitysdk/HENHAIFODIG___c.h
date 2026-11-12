#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HENHAIFODIG;
namespace System { class Object; }

#define HENHAIFODIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F857140)
#define HENHAIFODIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F857180)
#define HENHAIFODIG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F857190)

inline static constexpr unsigned int HENHAIFODIG___c_TypeDefinitionIndex = 32590;

	class HENHAIFODIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x288D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENHAIFODIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG___C_CTOR_OFFSET))(this);
		}

		::HENHAIFODIG* __cctor_b__23_0()
		{
			return ((::HENHAIFODIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHAIFODIG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
