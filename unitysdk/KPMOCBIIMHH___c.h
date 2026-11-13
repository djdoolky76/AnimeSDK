#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMOCBIIMHH;
namespace System { class Object; }

#define KPMOCBIIMHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2037BB90)
#define KPMOCBIIMHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2037BBD0)
#define KPMOCBIIMHH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2037BBE0)

inline static constexpr unsigned int KPMOCBIIMHH___c_TypeDefinitionIndex = 29980;

	class KPMOCBIIMHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMOCBIIMHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMOCBIIMHH___C_CTOR_OFFSET))(this);
		}

		::KPMOCBIIMHH* __cctor_b__33_0()
		{
			return ((::KPMOCBIIMHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMOCBIIMHH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
