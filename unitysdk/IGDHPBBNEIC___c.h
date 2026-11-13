#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGDHPBBNEIC;
namespace System { class Object; }

#define IGDHPBBNEIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2029B360)
#define IGDHPBBNEIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2029B390)
#define IGDHPBBNEIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2029B3A0)

inline static constexpr unsigned int IGDHPBBNEIC___c_TypeDefinitionIndex = 34620;

	class IGDHPBBNEIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x462C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C_CTOR_OFFSET))(this);
		}

		::IGDHPBBNEIC* __cctor_b__23_0()
		{
			return ((::IGDHPBBNEIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
