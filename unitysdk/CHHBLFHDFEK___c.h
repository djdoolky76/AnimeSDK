#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHHBLFHDFEK;
namespace System { class Object; }

#define CHHBLFHDFEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6A10)
#define CHHBLFHDFEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6A50)
#define CHHBLFHDFEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0C6A60)

inline static constexpr unsigned int CHHBLFHDFEK___c_TypeDefinitionIndex = 27332;

	class CHHBLFHDFEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x166D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHHBLFHDFEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK___C_CTOR_OFFSET))(this);
		}

		::CHHBLFHDFEK* __cctor_b__28_0()
		{
			return ((::CHHBLFHDFEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHBLFHDFEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
