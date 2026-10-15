#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIJEFIIBBGG;
namespace System { class Object; }

#define KIJEFIIBBGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82F6D0)
#define KIJEFIIBBGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82F700)
#define KIJEFIIBBGG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E82F710)

inline static constexpr unsigned int KIJEFIIBBGG___c_TypeDefinitionIndex = 33593;

	class KIJEFIIBBGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C_CTOR_OFFSET))(this);
		}

		::KIJEFIIBBGG* __cctor_b__33_0()
		{
			return ((::KIJEFIIBBGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFIIBBGG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
