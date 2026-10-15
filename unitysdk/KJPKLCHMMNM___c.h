#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJPKLCHMMNM;
namespace System { class Object; }

#define KJPKLCHMMNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E846AC0)
#define KJPKLCHMMNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E846B00)
#define KJPKLCHMMNM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E846B10)

inline static constexpr unsigned int KJPKLCHMMNM___c_TypeDefinitionIndex = 30477;

	class KJPKLCHMMNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJPKLCHMMNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPKLCHMMNM___C_CTOR_OFFSET))(this);
		}

		::KJPKLCHMMNM* __cctor_b__38_0()
		{
			return ((::KJPKLCHMMNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPKLCHMMNM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
