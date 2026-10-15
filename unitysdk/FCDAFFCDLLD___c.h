#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCDAFFCDLLD;
namespace System { class Object; }

#define FCDAFFCDLLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33EB20)
#define FCDAFFCDLLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33EB60)
#define FCDAFFCDLLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E33EB70)

	class FCDAFFCDLLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCDAFFCDLLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD___C_CTOR_OFFSET))(this);
		}

		::FCDAFFCDLLD* __cctor_b__28_0()
		{
			return ((::FCDAFFCDLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDAFFCDLLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
