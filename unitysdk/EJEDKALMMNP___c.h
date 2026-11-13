#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJEDKALMMNP;
namespace System { class Object; }

#define EJEDKALMMNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9D300)
#define EJEDKALMMNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9D340)
#define EJEDKALMMNP___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1FF9D350)

inline static constexpr unsigned int EJEDKALMMNP___c_TypeDefinitionIndex = 33404;

	class EJEDKALMMNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEDKALMMNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP___C_CTOR_OFFSET))(this);
		}

		::EJEDKALMMNP* __cctor_b__46_0()
		{
			return ((::EJEDKALMMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
