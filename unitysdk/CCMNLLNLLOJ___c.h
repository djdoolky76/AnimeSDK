#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMNLLNLLOJ;
namespace System { class Object; }

#define CCMNLLNLLOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04DB00)
#define CCMNLLNLLOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04DB30)
#define CCMNLLNLLOJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E04DB40)

inline static constexpr unsigned int CCMNLLNLLOJ___c_TypeDefinitionIndex = 33777;

	class CCMNLLNLLOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCMNLLNLLOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ___C_CTOR_OFFSET))(this);
		}

		::CCMNLLNLLOJ* __cctor_b__28_0()
		{
			return ((::CCMNLLNLLOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
