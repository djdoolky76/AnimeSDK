#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMLNJOPALPJ;
namespace System { class Object; }

#define BMLNJOPALPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF270)
#define BMLNJOPALPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFF2B0)
#define BMLNJOPALPJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFFF2C0)

inline static constexpr unsigned int BMLNJOPALPJ___c_TypeDefinitionIndex = 34943;

	class BMLNJOPALPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMLNJOPALPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ___C_CTOR_OFFSET))(this);
		}

		::BMLNJOPALPJ* __cctor_b__23_0()
		{
			return ((::BMLNJOPALPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
