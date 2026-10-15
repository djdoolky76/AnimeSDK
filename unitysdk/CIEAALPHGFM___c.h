#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEAALPHGFM;
namespace System { class Object; }

#define CIEAALPHGFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CFF60)
#define CIEAALPHGFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CFFA0)
#define CIEAALPHGFM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0CFFB0)

	class CIEAALPHGFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEAALPHGFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM___C_CTOR_OFFSET))(this);
		}

		::CIEAALPHGFM* __cctor_b__18_0()
		{
			return ((::CIEAALPHGFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
