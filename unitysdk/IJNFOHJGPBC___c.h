#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
namespace System { class Object; }

#define IJNFOHJGPBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E699320)
#define IJNFOHJGPBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E699350)
#define IJNFOHJGPBC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E699360)

	class IJNFOHJGPBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJNFOHJGPBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC___C_CTOR_OFFSET))(this);
		}

		::IJNFOHJGPBC* __cctor_b__43_0()
		{
			return ((::IJNFOHJGPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNFOHJGPBC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
