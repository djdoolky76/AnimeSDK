#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKMMAPLHFOA;
namespace System { class Object; }

#define DKMMAPLHFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DA3B0)
#define DKMMAPLHFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DA3F0)
#define DKMMAPLHFOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1DA400)

	class DKMMAPLHFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMMAPLHFOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA___C_CTOR_OFFSET))(this);
		}

		::DKMMAPLHFOA* __cctor_b__33_0()
		{
			return ((::DKMMAPLHFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
