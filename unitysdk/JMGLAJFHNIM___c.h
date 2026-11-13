#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMGLAJFHNIM;
namespace System { class Object; }

#define JMGLAJFHNIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE86CF0)
#define JMGLAJFHNIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE86D20)
#define JMGLAJFHNIM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE86D30)

inline static constexpr unsigned int JMGLAJFHNIM___c_TypeDefinitionIndex = 28804;

	class JMGLAJFHNIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x666A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMGLAJFHNIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM___C_CTOR_OFFSET))(this);
		}

		::JMGLAJFHNIM* __cctor_b__33_0()
		{
			return ((::JMGLAJFHNIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGLAJFHNIM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
