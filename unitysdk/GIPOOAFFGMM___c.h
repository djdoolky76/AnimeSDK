#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIPOOAFFGMM_JJIFCLFIHNC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GIPOOAFFGMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A554A0)
#define GIPOOAFFGMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A554D0)
#define GIPOOAFFGMM___C__HASCUSTOMTOPPANEL_B__1_0_OFFSET UNITYSDK_OFFSET(0x15A554E0)

	class GIPOOAFFGMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F370);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPOOAFFGMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasCustomTopPanel_b__1_0(::GIPOOAFFGMM_JJIFCLFIHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIPOOAFFGMM_JJIFCLFIHNC*))((::PBYTE)hIl2Cpp + GIPOOAFFGMM___C__HASCUSTOMTOPPANEL_B__1_0_OFFSET))(this, a1);
		}

	};
