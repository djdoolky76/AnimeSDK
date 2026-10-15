#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLKBKPCLHEE;
namespace System { class Object; }

#define KLKBKPCLHEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E890320)
#define KLKBKPCLHEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E890360)
#define KLKBKPCLHEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E890370)

inline static constexpr unsigned int KLKBKPCLHEE___c_TypeDefinitionIndex = 32359;

	class KLKBKPCLHEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLKBKPCLHEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE___C_CTOR_OFFSET))(this);
		}

		::KLKBKPCLHEE* __cctor_b__33_0()
		{
			return ((::KLKBKPCLHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKBKPCLHEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
