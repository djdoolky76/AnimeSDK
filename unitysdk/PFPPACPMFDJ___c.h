#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPPACPMFDJ;
namespace System { class Object; }

#define PFPPACPMFDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B7C0)
#define PFPPACPMFDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B800)
#define PFPPACPMFDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF2B810)

	class PFPPACPMFDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C_CTOR_OFFSET))(this);
		}

		::PFPPACPMFDJ* __cctor_b__28_0()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
