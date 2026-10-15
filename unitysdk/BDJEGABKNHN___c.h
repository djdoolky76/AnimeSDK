#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJEGABKNHN;
namespace System { class Object; }

#define BDJEGABKNHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E917C00)
#define BDJEGABKNHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E917C40)
#define BDJEGABKNHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E917C50)

	class BDJEGABKNHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJEGABKNHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN___C_CTOR_OFFSET))(this);
		}

		::BDJEGABKNHN* __cctor_b__28_0()
		{
			return ((::BDJEGABKNHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
