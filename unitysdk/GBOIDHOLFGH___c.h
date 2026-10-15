#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBOIDHOLFGH;
namespace System { class Object; }

#define GBOIDHOLFGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4340F0)
#define GBOIDHOLFGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E434130)
#define GBOIDHOLFGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E434140)

	class GBOIDHOLFGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C_CTOR_OFFSET))(this);
		}

		::GBOIDHOLFGH* __cctor_b__23_0()
		{
			return ((::GBOIDHOLFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
