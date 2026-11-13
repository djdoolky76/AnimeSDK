#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNECKDAOKOA;
namespace System { class Object; }

#define KNECKDAOKOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD1680)
#define KNECKDAOKOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD16C0)
#define KNECKDAOKOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDD16D0)

inline static constexpr unsigned int KNECKDAOKOA___c_TypeDefinitionIndex = 32669;

	class KNECKDAOKOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNECKDAOKOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA___C_CTOR_OFFSET))(this);
		}

		::KNECKDAOKOA* __cctor_b__33_0()
		{
			return ((::KNECKDAOKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNECKDAOKOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
