#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKOJGLGJFE;
namespace System { class Object; }

#define KIKOJGLGJFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E863550)
#define KIKOJGLGJFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E863580)
#define KIKOJGLGJFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E863590)

inline static constexpr unsigned int KIKOJGLGJFE___c_TypeDefinitionIndex = 32377;

	class KIKOJGLGJFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKOJGLGJFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE___C_CTOR_OFFSET))(this);
		}

		::KIKOJGLGJFE* __cctor_b__28_0()
		{
			return ((::KIKOJGLGJFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKOJGLGJFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
