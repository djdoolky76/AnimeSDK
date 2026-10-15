#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPJALEIKFAC;
namespace System { class Object; }

#define OPJALEIKFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE4370)
#define OPJALEIKFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE43B0)
#define OPJALEIKFAC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DEE43C0)

inline static constexpr unsigned int OPJALEIKFAC___c_TypeDefinitionIndex = 29283;

	class OPJALEIKFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPJALEIKFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC___C_CTOR_OFFSET))(this);
		}

		::OPJALEIKFAC* __cctor_b__18_0()
		{
			return ((::OPJALEIKFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJALEIKFAC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
