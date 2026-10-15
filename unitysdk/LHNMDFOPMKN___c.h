#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHNMDFOPMKN;
namespace System { class Object; }

#define LHNMDFOPMKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9691D0)
#define LHNMDFOPMKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E969210)
#define LHNMDFOPMKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E969220)

	class LHNMDFOPMKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x445D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHNMDFOPMKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN___C_CTOR_OFFSET))(this);
		}

		::LHNMDFOPMKN* __cctor_b__28_0()
		{
			return ((::LHNMDFOPMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNMDFOPMKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
