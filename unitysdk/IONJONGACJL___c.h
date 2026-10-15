#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONJONGACJL;
namespace System { class Object; }

#define IONJONGACJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB320)
#define IONJONGACJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB360)
#define IONJONGACJL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6DB370)

	class IONJONGACJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJONGACJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL___C_CTOR_OFFSET))(this);
		}

		::IONJONGACJL* __cctor_b__33_0()
		{
			return ((::IONJONGACJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
