#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POGMMMGBNCH;
namespace System { class Object; }

#define POGMMMGBNCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB450)
#define POGMMMGBNCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB490)
#define POGMMMGBNCH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFCB4A0)

	class POGMMMGBNCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POGMMMGBNCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH___C_CTOR_OFFSET))(this);
		}

		::POGMMMGBNCH* __cctor_b__28_0()
		{
			return ((::POGMMMGBNCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGMMMGBNCH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
