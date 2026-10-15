#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNOGAGKIKHH;
namespace System { class Object; }

#define KNOGAGKIKHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8AF0)
#define KNOGAGKIKHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8B30)
#define KNOGAGKIKHH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A8B40)

	class KNOGAGKIKHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOGAGKIKHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH___C_CTOR_OFFSET))(this);
		}

		::KNOGAGKIKHH* __cctor_b__23_0()
		{
			return ((::KNOGAGKIKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOGAGKIKHH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
