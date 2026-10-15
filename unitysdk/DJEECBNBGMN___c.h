#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEECBNBGMN;
namespace System { class Object; }

#define DJEECBNBGMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6B90)
#define DJEECBNBGMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6BD0)
#define DJEECBNBGMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1C6BE0)

inline static constexpr unsigned int DJEECBNBGMN___c_TypeDefinitionIndex = 33424;

	class DJEECBNBGMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEECBNBGMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN___C_CTOR_OFFSET))(this);
		}

		::DJEECBNBGMN* __cctor_b__23_0()
		{
			return ((::DJEECBNBGMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
