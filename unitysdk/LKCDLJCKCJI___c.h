#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKCDLJCKCJI;
namespace System { class Object; }

#define LKCDLJCKCJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCAE7B0)
#define LKCDLJCKCJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCAE7E0)
#define LKCDLJCKCJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FCAE7F0)

inline static constexpr unsigned int LKCDLJCKCJI___c_TypeDefinitionIndex = 34150;

	class LKCDLJCKCJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKCDLJCKCJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI___C_CTOR_OFFSET))(this);
		}

		::LKCDLJCKCJI* __cctor_b__28_0()
		{
			return ((::LKCDLJCKCJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
