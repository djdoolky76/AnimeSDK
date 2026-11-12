#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOAOCKBBJA;
namespace System { class Object; }

#define HKOAOCKBBJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B3430)
#define HKOAOCKBBJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B3470)
#define HKOAOCKBBJA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8B3480)

inline static constexpr unsigned int HKOAOCKBBJA___c_TypeDefinitionIndex = 30539;

	class HKOAOCKBBJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKOAOCKBBJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA___C_CTOR_OFFSET))(this);
		}

		::HKOAOCKBBJA* __cctor_b__23_0()
		{
			return ((::HKOAOCKBBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKOAOCKBBJA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
