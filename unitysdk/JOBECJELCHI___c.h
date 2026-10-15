#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JOBECJELCHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB29E8D0)
#define JOBECJELCHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB29E910)
#define JOBECJELCHI___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB29E920)

	class JOBECJELCHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24320);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOBECJELCHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI___C__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
