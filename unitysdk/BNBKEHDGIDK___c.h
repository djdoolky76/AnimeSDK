#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNBKEHDGIDK;
namespace System { class Object; }

#define BNBKEHDGIDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E003DA0)
#define BNBKEHDGIDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E003DE0)
#define BNBKEHDGIDK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E003DF0)

inline static constexpr unsigned int BNBKEHDGIDK___c_TypeDefinitionIndex = 26120;

	class BNBKEHDGIDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNBKEHDGIDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK___C_CTOR_OFFSET))(this);
		}

		::BNBKEHDGIDK* __cctor_b__23_0()
		{
			return ((::BNBKEHDGIDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
