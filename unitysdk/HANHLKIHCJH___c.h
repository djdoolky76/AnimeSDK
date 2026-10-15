#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANHLKIHCJH;
namespace System { class Object; }

#define HANHLKIHCJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E509F20)
#define HANHLKIHCJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E509F60)
#define HANHLKIHCJH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E509F70)

	class HANHLKIHCJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANHLKIHCJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH___C_CTOR_OFFSET))(this);
		}

		::HANHLKIHCJH* __cctor_b__23_0()
		{
			return ((::HANHLKIHCJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
