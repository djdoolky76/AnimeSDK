#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
namespace System { class Object; }

#define ENHOPAHGCMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFB80)
#define ENHOPAHGCMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EFBB0)
#define ENHOPAHGCMA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2EFBC0)

	class ENHOPAHGCMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x546E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C_CTOR_OFFSET))(this);
		}

		::ENHOPAHGCMA* __cctor_b__43_0()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
