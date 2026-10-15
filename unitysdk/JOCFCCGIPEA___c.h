#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCFCCGIPEA;
namespace System { class Object; }

#define JOCFCCGIPEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79D0B0)
#define JOCFCCGIPEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79D0F0)
#define JOCFCCGIPEA___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1E79D100)

	class JOCFCCGIPEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCFCCGIPEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCFCCGIPEA___C_CTOR_OFFSET))(this);
		}

		::JOCFCCGIPEA* __cctor_b__45_0()
		{
			return ((::JOCFCCGIPEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCFCCGIPEA___C___CCTOR_B__45_0_OFFSET))(this);
		}

	};
