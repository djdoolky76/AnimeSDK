#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCCHABOPEFJ;
namespace System { class Object; }

#define MCCHABOPEFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F1870)
#define MCCHABOPEFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F18B0)
#define MCCHABOPEFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9F18C0)

inline static constexpr unsigned int MCCHABOPEFJ___c_TypeDefinitionIndex = 31805;

	class MCCHABOPEFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCCHABOPEFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ___C_CTOR_OFFSET))(this);
		}

		::MCCHABOPEFJ* __cctor_b__23_0()
		{
			return ((::MCCHABOPEFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCHABOPEFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
