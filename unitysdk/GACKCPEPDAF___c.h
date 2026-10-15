#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GACKCPEPDAF;
namespace System { class Object; }

#define GACKCPEPDAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7D90)
#define GACKCPEPDAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7DD0)
#define GACKCPEPDAF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3E7DE0)

inline static constexpr unsigned int GACKCPEPDAF___c_TypeDefinitionIndex = 27043;

	class GACKCPEPDAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GACKCPEPDAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACKCPEPDAF___C_CTOR_OFFSET))(this);
		}

		::GACKCPEPDAF* __cctor_b__38_0()
		{
			return ((::GACKCPEPDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACKCPEPDAF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
