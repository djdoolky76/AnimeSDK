#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKNNFODOMO;
namespace System { class Object; }

#define CCKNNFODOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04AAD0)
#define CCKNNFODOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04AB10)
#define CCKNNFODOMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E04AB20)

inline static constexpr unsigned int CCKNNFODOMO___c_TypeDefinitionIndex = 32238;

	class CCKNNFODOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKNNFODOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO___C_CTOR_OFFSET))(this);
		}

		::CCKNNFODOMO* __cctor_b__23_0()
		{
			return ((::CCKNNFODOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKNNFODOMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
