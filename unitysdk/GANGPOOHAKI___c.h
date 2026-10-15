#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANGPOOHAKI;
namespace System { class Object; }

#define GANGPOOHAKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4254C0)
#define GANGPOOHAKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E425500)
#define GANGPOOHAKI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E425510)

inline static constexpr unsigned int GANGPOOHAKI___c_TypeDefinitionIndex = 31711;

	class GANGPOOHAKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANGPOOHAKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI___C_CTOR_OFFSET))(this);
		}

		::GANGPOOHAKI* __cctor_b__23_0()
		{
			return ((::GANGPOOHAKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPOOHAKI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
