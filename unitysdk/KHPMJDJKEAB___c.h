#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHPMJDJKEAB;
namespace System { class Object; }

#define KHPMJDJKEAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB6AE90)
#define KHPMJDJKEAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6AED0)
#define KHPMJDJKEAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB6AEE0)

inline static constexpr unsigned int KHPMJDJKEAB___c_TypeDefinitionIndex = 33501;

	class KHPMJDJKEAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x121F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPMJDJKEAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB___C_CTOR_OFFSET))(this);
		}

		::KHPMJDJKEAB* __cctor_b__23_0()
		{
			return ((::KHPMJDJKEAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPMJDJKEAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
