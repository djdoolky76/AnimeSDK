#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIIJKONEENG;
namespace System { class Object; }

#define GIIJKONEENG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F78D060)
#define GIIJKONEENG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F78D0A0)
#define GIIJKONEENG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F78D0B0)

inline static constexpr unsigned int GIIJKONEENG___c_TypeDefinitionIndex = 33106;

	class GIIJKONEENG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIIJKONEENG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG___C_CTOR_OFFSET))(this);
		}

		::GIIJKONEENG* __cctor_b__23_0()
		{
			return ((::GIIJKONEENG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
