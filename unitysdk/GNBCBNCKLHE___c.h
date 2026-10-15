#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBCBNCKLHE;
namespace System { class Object; }

#define GNBCBNCKLHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8B40)
#define GNBCBNCKLHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8B80)
#define GNBCBNCKLHE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4D8B90)

	class GNBCBNCKLHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C_CTOR_OFFSET))(this);
		}

		::GNBCBNCKLHE* __cctor_b__18_0()
		{
			return ((::GNBCBNCKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBCBNCKLHE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
