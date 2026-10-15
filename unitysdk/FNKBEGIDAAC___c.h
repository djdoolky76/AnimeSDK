#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKBEGIDAAC;
namespace System { class Object; }

#define FNKBEGIDAAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4CF0)
#define FNKBEGIDAAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4D30)
#define FNKBEGIDAAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3C4D40)

inline static constexpr unsigned int FNKBEGIDAAC___c_TypeDefinitionIndex = 30048;

	class FNKBEGIDAAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C_CTOR_OFFSET))(this);
		}

		::FNKBEGIDAAC* __cctor_b__33_0()
		{
			return ((::FNKBEGIDAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
