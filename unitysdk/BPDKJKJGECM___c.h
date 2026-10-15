#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDKJKJGECM;
namespace System { class Object; }

#define BPDKJKJGECM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E041500)
#define BPDKJKJGECM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E041540)
#define BPDKJKJGECM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E041550)

	class BPDKJKJGECM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPDKJKJGECM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM___C_CTOR_OFFSET))(this);
		}

		::BPDKJKJGECM* __cctor_b__28_0()
		{
			return ((::BPDKJKJGECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKJKJGECM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
