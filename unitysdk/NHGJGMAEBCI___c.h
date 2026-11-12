#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHGJGMAEBCI;
namespace System { class Object; }

#define NHGJGMAEBCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE5EB60)
#define NHGJGMAEBCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5EB90)
#define NHGJGMAEBCI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FE5EBA0)

inline static constexpr unsigned int NHGJGMAEBCI___c_TypeDefinitionIndex = 35431;

	class NHGJGMAEBCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6AC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGJGMAEBCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI___C_CTOR_OFFSET))(this);
		}

		::NHGJGMAEBCI* __cctor_b__43_0()
		{
			return ((::NHGJGMAEBCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
