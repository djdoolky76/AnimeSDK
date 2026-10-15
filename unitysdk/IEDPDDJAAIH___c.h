#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDPDDJAAIH;
namespace System { class Object; }

#define IEDPDDJAAIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E637A90)
#define IEDPDDJAAIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E637AD0)
#define IEDPDDJAAIH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E637AE0)

	class IEDPDDJAAIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDPDDJAAIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH___C_CTOR_OFFSET))(this);
		}

		::IEDPDDJAAIH* __cctor_b__43_0()
		{
			return ((::IEDPDDJAAIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDPDDJAAIH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
