#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBLCNIPBFG;
namespace System { class Object; }

#define MLBLCNIPBFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA80180)
#define MLBLCNIPBFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA801C0)
#define MLBLCNIPBFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA801D0)

	class MLBLCNIPBFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBLCNIPBFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG___C_CTOR_OFFSET))(this);
		}

		::MLBLCNIPBFG* __cctor_b__28_0()
		{
			return ((::MLBLCNIPBFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBLCNIPBFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
