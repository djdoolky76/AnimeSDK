#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDPHHMJFOK;
namespace System { class Object; }

#define AKDPHHMJFOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39BF00)
#define AKDPHHMJFOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39BF40)
#define AKDPHHMJFOK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E39BF50)

inline static constexpr unsigned int AKDPHHMJFOK___c_TypeDefinitionIndex = 33853;

	class AKDPHHMJFOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDPHHMJFOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK___C_CTOR_OFFSET))(this);
		}

		::AKDPHHMJFOK* __cctor_b__23_0()
		{
			return ((::AKDPHHMJFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPHHMJFOK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
