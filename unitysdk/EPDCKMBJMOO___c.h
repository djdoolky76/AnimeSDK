#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPDCKMBJMOO;
namespace System { class Object; }

#define EPDCKMBJMOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DB660)
#define EPDCKMBJMOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DB6A0)
#define EPDCKMBJMOO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2DB6B0)

inline static constexpr unsigned int EPDCKMBJMOO___c_TypeDefinitionIndex = 28041;

	class EPDCKMBJMOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x488B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPDCKMBJMOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO___C_CTOR_OFFSET))(this);
		}

		::EPDCKMBJMOO* __cctor_b__28_0()
		{
			return ((::EPDCKMBJMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDCKMBJMOO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
