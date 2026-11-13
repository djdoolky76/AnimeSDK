#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEOMHPIPKE;
namespace System { class Object; }

#define DOEOMHPIPKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F757710)
#define DOEOMHPIPKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F757750)
#define DOEOMHPIPKE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F757760)

inline static constexpr unsigned int DOEOMHPIPKE___c_TypeDefinitionIndex = 31196;

	class DOEOMHPIPKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEOMHPIPKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE___C_CTOR_OFFSET))(this);
		}

		::DOEOMHPIPKE* __cctor_b__23_0()
		{
			return ((::DOEOMHPIPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
