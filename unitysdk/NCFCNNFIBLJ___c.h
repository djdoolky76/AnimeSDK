#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFCNNFIBLJ;
namespace System { class Object; }

#define NCFCNNFIBLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9C20)
#define NCFCNNFIBLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9C60)
#define NCFCNNFIBLJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD9C70)

	class NCFCNNFIBLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFCNNFIBLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ___C_CTOR_OFFSET))(this);
		}

		::NCFCNNFIBLJ* __cctor_b__28_0()
		{
			return ((::NCFCNNFIBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
