#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHJMLKBLAMP;
namespace System { class Object; }

#define KHJMLKBLAMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E845590)
#define KHJMLKBLAMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8455D0)
#define KHJMLKBLAMP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8455E0)

	class KHJMLKBLAMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x175B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C_CTOR_OFFSET))(this);
		}

		::KHJMLKBLAMP* __cctor_b__18_0()
		{
			return ((::KHJMLKBLAMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
