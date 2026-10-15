#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLECMDNBJMM;
namespace System { class Object; }

#define FLECMDNBJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B91C0)
#define FLECMDNBJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B9200)
#define FLECMDNBJMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3B9210)

	class FLECMDNBJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x642D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLECMDNBJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM___C_CTOR_OFFSET))(this);
		}

		::FLECMDNBJMM* __cctor_b__28_0()
		{
			return ((::FLECMDNBJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLECMDNBJMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
