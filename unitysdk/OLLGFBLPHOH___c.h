#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLGFBLPHOH;
namespace System { class Object; }

#define OLLGFBLPHOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9E40)
#define OLLGFBLPHOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9E80)
#define OLLGFBLPHOH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DEA9E90)

	class OLLGFBLPHOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLGFBLPHOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH___C_CTOR_OFFSET))(this);
		}

		::OLLGFBLPHOH* __cctor_b__43_0()
		{
			return ((::OLLGFBLPHOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
