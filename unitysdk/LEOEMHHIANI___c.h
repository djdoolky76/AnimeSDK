#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEOEMHHIANI;
namespace System { class Object; }

#define LEOEMHHIANI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E939920)
#define LEOEMHHIANI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E939960)
#define LEOEMHHIANI___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E939970)

inline static constexpr unsigned int LEOEMHHIANI___c_TypeDefinitionIndex = 27531;

	class LEOEMHHIANI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEOEMHHIANI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEOEMHHIANI___C_CTOR_OFFSET))(this);
		}

		::LEOEMHHIANI* __cctor_b__58_0()
		{
			return ((::LEOEMHHIANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEOEMHHIANI___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
