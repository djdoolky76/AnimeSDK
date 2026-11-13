#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFIIJBMPKIE;
namespace System { class Object; }

#define DFIIJBMPKIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5F20)
#define DFIIJBMPKIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5F60)
#define DFIIJBMPKIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FFB5F70)

inline static constexpr unsigned int DFIIJBMPKIE___c_TypeDefinitionIndex = 30144;

	class DFIIJBMPKIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIIJBMPKIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE___C_CTOR_OFFSET))(this);
		}

		::DFIIJBMPKIE* __cctor_b__23_0()
		{
			return ((::DFIIJBMPKIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIIJBMPKIE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
