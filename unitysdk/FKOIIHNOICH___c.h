#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKOIIHNOICH;
namespace System { class Object; }

#define FKOIIHNOICH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B97A0)
#define FKOIIHNOICH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B97E0)
#define FKOIIHNOICH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F6B97F0)

inline static constexpr unsigned int FKOIIHNOICH___c_TypeDefinitionIndex = 31019;

	class FKOIIHNOICH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOIIHNOICH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH___C_CTOR_OFFSET))(this);
		}

		::FKOIIHNOICH* __cctor_b__48_0()
		{
			return ((::FKOIIHNOICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOIIHNOICH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
