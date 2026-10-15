#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAPFNBJDIOO;
namespace System { class Object; }

#define NAPFNBJDIOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA9CF60)
#define NAPFNBJDIOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9CFA0)
#define NAPFNBJDIOO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA9CFB0)

inline static constexpr unsigned int NAPFNBJDIOO___c_TypeDefinitionIndex = 32923;

	class NAPFNBJDIOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPFNBJDIOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO___C_CTOR_OFFSET))(this);
		}

		::NAPFNBJDIOO* __cctor_b__28_0()
		{
			return ((::NAPFNBJDIOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPFNBJDIOO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
