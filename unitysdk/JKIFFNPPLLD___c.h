#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKIFFNPPLLD;
namespace System { class Object; }

#define JKIFFNPPLLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76C760)
#define JKIFFNPPLLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76C7A0)
#define JKIFFNPPLLD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E76C7B0)

inline static constexpr unsigned int JKIFFNPPLLD___c_TypeDefinitionIndex = 34309;

	class JKIFFNPPLLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKIFFNPPLLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD___C_CTOR_OFFSET))(this);
		}

		::JKIFFNPPLLD* __cctor_b__33_0()
		{
			return ((::JKIFFNPPLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIFFNPPLLD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
