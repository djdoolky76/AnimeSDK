#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOLHBEOHEJD;
namespace System { class Object; }

#define HOLHBEOHEJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EDDC0)
#define HOLHBEOHEJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EDDF0)
#define HOLHBEOHEJD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5EDE00)

	class HOLHBEOHEJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOLHBEOHEJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD___C_CTOR_OFFSET))(this);
		}

		::HOLHBEOHEJD* __cctor_b__28_0()
		{
			return ((::HOLHBEOHEJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLHBEOHEJD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
