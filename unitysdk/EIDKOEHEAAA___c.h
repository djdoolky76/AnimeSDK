#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDKOEHEAAA;
namespace System { class Object; }

#define EIDKOEHEAAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7F80)
#define EIDKOEHEAAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7FC0)
#define EIDKOEHEAAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2A7FD0)

	class EIDKOEHEAAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x497B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDKOEHEAAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA___C_CTOR_OFFSET))(this);
		}

		::EIDKOEHEAAA* __cctor_b__28_0()
		{
			return ((::EIDKOEHEAAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
