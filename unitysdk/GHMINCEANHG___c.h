#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMINCEANHG;
namespace System { class Object; }

#define GHMINCEANHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48CBC0)
#define GHMINCEANHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48CC00)
#define GHMINCEANHG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E48CC10)

	class GHMINCEANHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMINCEANHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG___C_CTOR_OFFSET))(this);
		}

		::GHMINCEANHG* __cctor_b__28_0()
		{
			return ((::GHMINCEANHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMINCEANHG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
