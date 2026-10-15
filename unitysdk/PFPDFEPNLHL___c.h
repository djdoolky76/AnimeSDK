#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPDFEPNLHL;
namespace System { class Object; }

#define PFPDFEPNLHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF29C40)
#define PFPDFEPNLHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29C70)
#define PFPDFEPNLHL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF29C80)

	class PFPDFEPNLHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C_CTOR_OFFSET))(this);
		}

		::PFPDFEPNLHL* __cctor_b__18_0()
		{
			return ((::PFPDFEPNLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPDFEPNLHL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
