#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJOLGFOHLM;
namespace System { class Object; }

#define BDJOLGFOHLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9191E0)
#define BDJOLGFOHLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E919220)
#define BDJOLGFOHLM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E919230)

	class BDJOLGFOHLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C_CTOR_OFFSET))(this);
		}

		::BDJOLGFOHLM* __cctor_b__33_0()
		{
			return ((::BDJOLGFOHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
