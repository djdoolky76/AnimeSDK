#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAFINHNEBL;
namespace System { class Object; }

#define CEAFINHNEBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F352EA0)
#define CEAFINHNEBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F352EE0)
#define CEAFINHNEBL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F352EF0)

inline static constexpr unsigned int CEAFINHNEBL___c_TypeDefinitionIndex = 33137;

	class CEAFINHNEBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAFINHNEBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL___C_CTOR_OFFSET))(this);
		}

		::CEAFINHNEBL* __cctor_b__38_0()
		{
			return ((::CEAFINHNEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
