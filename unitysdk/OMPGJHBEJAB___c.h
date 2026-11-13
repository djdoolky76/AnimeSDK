#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPGJHBEJAB;
namespace System { class Object; }

#define OMPGJHBEJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC25350)
#define OMPGJHBEJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC25390)
#define OMPGJHBEJAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC253A0)

inline static constexpr unsigned int OMPGJHBEJAB___c_TypeDefinitionIndex = 32554;

	class OMPGJHBEJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPGJHBEJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB___C_CTOR_OFFSET))(this);
		}

		::OMPGJHBEJAB* __cctor_b__33_0()
		{
			return ((::OMPGJHBEJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPGJHBEJAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
