#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMHIDMOBMB;
namespace System { class Object; }

#define KJMHIDMOBMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E842800)
#define KJMHIDMOBMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E842840)
#define KJMHIDMOBMB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E842850)

inline static constexpr unsigned int KJMHIDMOBMB___c_TypeDefinitionIndex = 29911;

	class KJMHIDMOBMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMHIDMOBMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB___C_CTOR_OFFSET))(this);
		}

		::KJMHIDMOBMB* __cctor_b__48_0()
		{
			return ((::KJMHIDMOBMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMHIDMOBMB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
