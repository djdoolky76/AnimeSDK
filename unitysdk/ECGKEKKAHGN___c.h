#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGKEKKAHGN;
namespace System { class Object; }

#define ECGKEKKAHGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24F400)
#define ECGKEKKAHGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24F440)
#define ECGKEKKAHGN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E24F450)

	class ECGKEKKAHGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGKEKKAHGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN___C_CTOR_OFFSET))(this);
		}

		::ECGKEKKAHGN* __cctor_b__33_0()
		{
			return ((::ECGKEKKAHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGKEKKAHGN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
