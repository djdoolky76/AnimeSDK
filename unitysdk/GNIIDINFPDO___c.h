#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNIIDINFPDO;
namespace System { class Object; }

#define GNIIDINFPDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F2440)
#define GNIIDINFPDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F2470)
#define GNIIDINFPDO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7F2480)

inline static constexpr unsigned int GNIIDINFPDO___c_TypeDefinitionIndex = 30486;

	class GNIIDINFPDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNIIDINFPDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO___C_CTOR_OFFSET))(this);
		}

		::GNIIDINFPDO* __cctor_b__28_0()
		{
			return ((::GNIIDINFPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
