#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENILOPJOCBN;
namespace System { class Object; }

#define ENILOPJOCBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C3A50)
#define ENILOPJOCBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C3A90)
#define ENILOPJOCBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2C3AA0)

inline static constexpr unsigned int ENILOPJOCBN___c_TypeDefinitionIndex = 30609;

	class ENILOPJOCBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENILOPJOCBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN___C_CTOR_OFFSET))(this);
		}

		::ENILOPJOCBN* __cctor_b__23_0()
		{
			return ((::ENILOPJOCBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
