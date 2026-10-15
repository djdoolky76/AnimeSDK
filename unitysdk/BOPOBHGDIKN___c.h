#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPOBHGDIKN;
namespace System { class Object; }

#define BOPOBHGDIKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E012980)
#define BOPOBHGDIKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0129B0)
#define BOPOBHGDIKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0129C0)

inline static constexpr unsigned int BOPOBHGDIKN___c_TypeDefinitionIndex = 32422;

	class BOPOBHGDIKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C_CTOR_OFFSET))(this);
		}

		::BOPOBHGDIKN* __cctor_b__23_0()
		{
			return ((::BOPOBHGDIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPOBHGDIKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
