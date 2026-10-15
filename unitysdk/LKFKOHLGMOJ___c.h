#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFKOHLGMOJ;
namespace System { class Object; }

#define LKFKOHLGMOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E961F40)
#define LKFKOHLGMOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E961F80)
#define LKFKOHLGMOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E961F90)

inline static constexpr unsigned int LKFKOHLGMOJ___c_TypeDefinitionIndex = 27139;

	class LKFKOHLGMOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C_CTOR_OFFSET))(this);
		}

		::LKFKOHLGMOJ* __cctor_b__23_0()
		{
			return ((::LKFKOHLGMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
