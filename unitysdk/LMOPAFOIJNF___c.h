#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOPAFOIJNF;
namespace System { class Object; }

#define LMOPAFOIJNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AE750)
#define LMOPAFOIJNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AE790)
#define LMOPAFOIJNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9AE7A0)

inline static constexpr unsigned int LMOPAFOIJNF___c_TypeDefinitionIndex = 28322;

	class LMOPAFOIJNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOPAFOIJNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF___C_CTOR_OFFSET))(this);
		}

		::LMOPAFOIJNF* __cctor_b__28_0()
		{
			return ((::LMOPAFOIJNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
