#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNICHNKEGG;
namespace System { class Object; }

#define ECNICHNKEGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F553C60)
#define ECNICHNKEGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F553CA0)
#define ECNICHNKEGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F553CB0)

inline static constexpr unsigned int ECNICHNKEGG___c_TypeDefinitionIndex = 27919;

	class ECNICHNKEGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNICHNKEGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG___C_CTOR_OFFSET))(this);
		}

		::ECNICHNKEGG* __cctor_b__23_0()
		{
			return ((::ECNICHNKEGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
