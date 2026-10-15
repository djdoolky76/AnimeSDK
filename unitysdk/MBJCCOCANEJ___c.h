#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBJCCOCANEJ;
namespace System { class Object; }

#define MBJCCOCANEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8800)
#define MBJCCOCANEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8840)
#define MBJCCOCANEJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9B8850)

inline static constexpr unsigned int MBJCCOCANEJ___c_TypeDefinitionIndex = 27362;

	class MBJCCOCANEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBJCCOCANEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ___C_CTOR_OFFSET))(this);
		}

		::MBJCCOCANEJ* __cctor_b__23_0()
		{
			return ((::MBJCCOCANEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCCOCANEJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
