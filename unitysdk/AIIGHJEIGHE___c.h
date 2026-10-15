#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIGHJEIGHE;
namespace System { class Object; }

#define AIIGHJEIGHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27D860)
#define AIIGHJEIGHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27D8A0)
#define AIIGHJEIGHE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E27D8B0)

inline static constexpr unsigned int AIIGHJEIGHE___c_TypeDefinitionIndex = 25186;

	class AIIGHJEIGHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIIGHJEIGHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE___C_CTOR_OFFSET))(this);
		}

		::AIIGHJEIGHE* __cctor_b__33_0()
		{
			return ((::AIIGHJEIGHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIGHJEIGHE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
