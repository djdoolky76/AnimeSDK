#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLDLKNMOOOH;
namespace System { class Object; }

#define CLDLKNMOOOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C83E0)
#define CLDLKNMOOOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C8420)
#define CLDLKNMOOOH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E0C8430)

inline static constexpr unsigned int CLDLKNMOOOH___c_TypeDefinitionIndex = 27760;

	class CLDLKNMOOOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLDLKNMOOOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH___C_CTOR_OFFSET))(this);
		}

		::CLDLKNMOOOH* __cctor_b__48_0()
		{
			return ((::CLDLKNMOOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDLKNMOOOH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
