#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKOLKFKOAP;
namespace System { class Object; }

#define LFKOLKFKOAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E943F50)
#define LFKOLKFKOAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943F90)
#define LFKOLKFKOAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E943FA0)

	class LFKOLKFKOAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFKOLKFKOAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOLKFKOAP___C_CTOR_OFFSET))(this);
		}

		::LFKOLKFKOAP* __cctor_b__28_0()
		{
			return ((::LFKOLKFKOAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKOLKFKOAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
