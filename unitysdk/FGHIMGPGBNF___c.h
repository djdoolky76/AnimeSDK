#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHIMGPGBNF;
namespace System { class Object; }

#define FGHIMGPGBNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37F4D0)
#define FGHIMGPGBNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37F510)
#define FGHIMGPGBNF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E37F520)

	class FGHIMGPGBNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHIMGPGBNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF___C_CTOR_OFFSET))(this);
		}

		::FGHIMGPGBNF* __cctor_b__33_0()
		{
			return ((::FGHIMGPGBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
