#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFBLIGHAMO;
namespace System { class Object; }

#define CAFBLIGHAMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E058900)
#define CAFBLIGHAMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E058930)
#define CAFBLIGHAMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E058940)

	class CAFBLIGHAMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFBLIGHAMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO___C_CTOR_OFFSET))(this);
		}

		::CAFBLIGHAMO* __cctor_b__18_0()
		{
			return ((::CAFBLIGHAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
