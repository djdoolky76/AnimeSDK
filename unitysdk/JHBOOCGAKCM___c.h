#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHBOOCGAKCM;
namespace System { class Object; }

#define JHBOOCGAKCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E742850)
#define JHBOOCGAKCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E742890)
#define JHBOOCGAKCM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7428A0)

	class JHBOOCGAKCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C_CTOR_OFFSET))(this);
		}

		::JHBOOCGAKCM* __cctor_b__28_0()
		{
			return ((::JHBOOCGAKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
