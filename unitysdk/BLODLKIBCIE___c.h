#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLODLKIBCIE;
namespace System { class Object; }

#define BLODLKIBCIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF674B0)
#define BLODLKIBCIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF674E0)
#define BLODLKIBCIE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF674F0)

	class BLODLKIBCIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLODLKIBCIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE___C_CTOR_OFFSET))(this);
		}

		::BLODLKIBCIE* __cctor_b__33_0()
		{
			return ((::BLODLKIBCIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
