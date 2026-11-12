#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJHOCMLPMJD;
namespace System { class Object; }

#define CJHOCMLPMJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3AF3B0)
#define CJHOCMLPMJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AF3F0)
#define CJHOCMLPMJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3AF400)

inline static constexpr unsigned int CJHOCMLPMJD___c_TypeDefinitionIndex = 28162;

	class CJHOCMLPMJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C_CTOR_OFFSET))(this);
		}

		::CJHOCMLPMJD* __cctor_b__23_0()
		{
			return ((::CJHOCMLPMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
