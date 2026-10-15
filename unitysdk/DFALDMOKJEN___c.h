#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFALDMOKJEN;
namespace System { class Object; }

#define DFALDMOKJEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1995B0)
#define DFALDMOKJEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1995F0)
#define DFALDMOKJEN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E199600)

	class DFALDMOKJEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFALDMOKJEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFALDMOKJEN___C_CTOR_OFFSET))(this);
		}

		::DFALDMOKJEN* __cctor_b__23_0()
		{
			return ((::DFALDMOKJEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFALDMOKJEN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
