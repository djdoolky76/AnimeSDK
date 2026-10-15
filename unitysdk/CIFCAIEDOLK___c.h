#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFCAIEDOLK;
namespace System { class Object; }

#define CIFCAIEDOLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1EB0)
#define CIFCAIEDOLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D1EF0)
#define CIFCAIEDOLK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D1F00)

inline static constexpr unsigned int CIFCAIEDOLK___c_TypeDefinitionIndex = 32677;

	class CIFCAIEDOLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x174A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIFCAIEDOLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK___C_CTOR_OFFSET))(this);
		}

		::CIFCAIEDOLK* __cctor_b__28_0()
		{
			return ((::CIFCAIEDOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFCAIEDOLK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
