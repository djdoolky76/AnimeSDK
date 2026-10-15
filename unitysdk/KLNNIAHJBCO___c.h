#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLNNIAHJBCO;
namespace System { class Object; }

#define KLNNIAHJBCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E893B40)
#define KLNNIAHJBCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E893B80)
#define KLNNIAHJBCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E893B90)

	class KLNNIAHJBCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNNIAHJBCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO___C_CTOR_OFFSET))(this);
		}

		::KLNNIAHJBCO* __cctor_b__33_0()
		{
			return ((::KLNNIAHJBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNNIAHJBCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
