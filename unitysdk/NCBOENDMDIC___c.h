#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCBOENDMDIC;
namespace System { class Object; }

#define NCBOENDMDIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD8520)
#define NCBOENDMDIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD8550)
#define NCBOENDMDIC___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EAD8560)

	class NCBOENDMDIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCBOENDMDIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBOENDMDIC___C_CTOR_OFFSET))(this);
		}

		::NCBOENDMDIC* __cctor_b__58_0()
		{
			return ((::NCBOENDMDIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBOENDMDIC___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
