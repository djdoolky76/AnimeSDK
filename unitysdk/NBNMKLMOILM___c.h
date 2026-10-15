#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNMKLMOILM;
namespace System { class Object; }

#define NBNMKLMOILM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD5890)
#define NBNMKLMOILM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD58D0)
#define NBNMKLMOILM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD58E0)

	class NBNMKLMOILM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNMKLMOILM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM___C_CTOR_OFFSET))(this);
		}

		::NBNMKLMOILM* __cctor_b__28_0()
		{
			return ((::NBNMKLMOILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
