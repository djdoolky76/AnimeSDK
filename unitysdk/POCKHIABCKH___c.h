#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCKHIABCKH;
namespace System { class Object; }

#define POCKHIABCKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC7800)
#define POCKHIABCKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC7830)
#define POCKHIABCKH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFC7840)

	class POCKHIABCKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POCKHIABCKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POCKHIABCKH___C_CTOR_OFFSET))(this);
		}

		::POCKHIABCKH* __cctor_b__18_0()
		{
			return ((::POCKHIABCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCKHIABCKH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
