#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKIDDEEDII;
namespace System { class Object; }

#define PIKIDDEEDII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6B8E0)
#define PIKIDDEEDII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6B920)
#define PIKIDDEEDII___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF6B930)

	class PIKIDDEEDII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x444B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKIDDEEDII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII___C_CTOR_OFFSET))(this);
		}

		::PIKIDDEEDII* __cctor_b__23_0()
		{
			return ((::PIKIDDEEDII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
