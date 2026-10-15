#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMLOMKCMGHD;
namespace System { class Object; }

#define KMLOMKCMGHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89D630)
#define KMLOMKCMGHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89D670)
#define KMLOMKCMGHD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E89D680)

	class KMLOMKCMGHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLOMKCMGHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD___C_CTOR_OFFSET))(this);
		}

		::KMLOMKCMGHD* __cctor_b__28_0()
		{
			return ((::KMLOMKCMGHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
