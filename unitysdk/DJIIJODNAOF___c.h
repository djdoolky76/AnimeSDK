#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIIJODNAOF;
namespace System { class Object; }

#define DJIIJODNAOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19EC50)
#define DJIIJODNAOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19EC90)
#define DJIIJODNAOF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E19ECA0)

inline static constexpr unsigned int DJIIJODNAOF___c_TypeDefinitionIndex = 26571;

	class DJIIJODNAOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIIJODNAOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF___C_CTOR_OFFSET))(this);
		}

		::DJIIJODNAOF* __cctor_b__33_0()
		{
			return ((::DJIIJODNAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIIJODNAOF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
