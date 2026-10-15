#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNMAIIKMGD;
namespace System { class Object; }

#define LDNMAIIKMGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9002D0)
#define LDNMAIIKMGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E900310)
#define LDNMAIIKMGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E900320)

	class LDNMAIIKMGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNMAIIKMGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD___C_CTOR_OFFSET))(this);
		}

		::LDNMAIIKMGD* __cctor_b__33_0()
		{
			return ((::LDNMAIIKMGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNMAIIKMGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
