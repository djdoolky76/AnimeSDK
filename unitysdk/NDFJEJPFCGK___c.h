#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDFJEJPFCGK;
namespace System { class Object; }

#define NDFJEJPFCGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE6920)
#define NDFJEJPFCGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE6960)
#define NDFJEJPFCGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAE6970)

	class NDFJEJPFCGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDFJEJPFCGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK___C_CTOR_OFFSET))(this);
		}

		::NDFJEJPFCGK* __cctor_b__28_0()
		{
			return ((::NDFJEJPFCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
