#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKHEIDJDMO;
namespace System { class Object; }

#define JFKHEIDJDMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E702F10)
#define JFKHEIDJDMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702F50)
#define JFKHEIDJDMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E702F60)

inline static constexpr unsigned int JFKHEIDJDMO___c_TypeDefinitionIndex = 31913;

	class JFKHEIDJDMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKHEIDJDMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO___C_CTOR_OFFSET))(this);
		}

		::JFKHEIDJDMO* __cctor_b__23_0()
		{
			return ((::JFKHEIDJDMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
