#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPLEKGNLBC;
namespace System { class Object; }

#define OMPLEKGNLBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0800)
#define OMPLEKGNLBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0840)
#define OMPLEKGNLBC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEC0850)

	class OMPLEKGNLBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPLEKGNLBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC___C_CTOR_OFFSET))(this);
		}

		::OMPLEKGNLBC* __cctor_b__33_0()
		{
			return ((::OMPLEKGNLBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPLEKGNLBC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
