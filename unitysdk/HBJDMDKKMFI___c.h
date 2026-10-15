#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJDMDKKMFI;
namespace System { class Object; }

#define HBJDMDKKMFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52D150)
#define HBJDMDKKMFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52D190)
#define HBJDMDKKMFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E52D1A0)

	class HBJDMDKKMFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C_CTOR_OFFSET))(this);
		}

		::HBJDMDKKMFI* __cctor_b__23_0()
		{
			return ((::HBJDMDKKMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
