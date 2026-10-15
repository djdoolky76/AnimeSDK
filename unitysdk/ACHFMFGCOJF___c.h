#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACHFMFGCOJF;
namespace System { class Object; }

#define ACHFMFGCOJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDDAA0)
#define ACHFMFGCOJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDDAE0)
#define ACHFMFGCOJF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDDDAF0)

	class ACHFMFGCOJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACHFMFGCOJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF___C_CTOR_OFFSET))(this);
		}

		::ACHFMFGCOJF* __cctor_b__23_0()
		{
			return ((::ACHFMFGCOJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHFMFGCOJF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
