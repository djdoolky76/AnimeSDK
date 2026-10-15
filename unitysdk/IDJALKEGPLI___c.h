#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJALKEGPLI;
namespace System { class Object; }

#define IDJALKEGPLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62D5A0)
#define IDJALKEGPLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62D5E0)
#define IDJALKEGPLI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E62D5F0)

	class IDJALKEGPLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x465C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJALKEGPLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI___C_CTOR_OFFSET))(this);
		}

		::IDJALKEGPLI* __cctor_b__28_0()
		{
			return ((::IDJALKEGPLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
