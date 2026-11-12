#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OENNAOAFAMA;
namespace System { class Object; }

#define OENNAOAFAMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D5F00)
#define OENNAOAFAMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D5F40)
#define OENNAOAFAMA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0D5F50)

inline static constexpr unsigned int OENNAOAFAMA___c_TypeDefinitionIndex = 30541;

	class OENNAOAFAMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x105F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OENNAOAFAMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA___C_CTOR_OFFSET))(this);
		}

		::OENNAOAFAMA* __cctor_b__33_0()
		{
			return ((::OENNAOAFAMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENNAOAFAMA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
