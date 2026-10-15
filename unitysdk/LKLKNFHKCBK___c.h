#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKLKNFHKCBK;
namespace System { class Object; }

#define LKLKNFHKCBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E993CC0)
#define LKLKNFHKCBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E993CF0)
#define LKLKNFHKCBK___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E993D00)

	class LKLKNFHKCBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKLKNFHKCBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLKNFHKCBK___C_CTOR_OFFSET))(this);
		}

		::LKLKNFHKCBK* __cctor_b__78_0()
		{
			return ((::LKLKNFHKCBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLKNFHKCBK___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
