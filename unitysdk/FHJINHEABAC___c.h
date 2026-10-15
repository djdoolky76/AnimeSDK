#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHJINHEABAC;
namespace System { class Object; }

#define FHJINHEABAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38DD00)
#define FHJINHEABAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38DD40)
#define FHJINHEABAC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E38DD50)

	class FHJINHEABAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHJINHEABAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC___C_CTOR_OFFSET))(this);
		}

		::FHJINHEABAC* __cctor_b__18_0()
		{
			return ((::FHJINHEABAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJINHEABAC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
