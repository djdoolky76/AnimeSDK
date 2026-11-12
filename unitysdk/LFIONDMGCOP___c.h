#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFIONDMGCOP;
namespace System { class Object; }

#define LFIONDMGCOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5E440)
#define LFIONDMGCOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5E480)
#define LFIONDMGCOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC5E490)

inline static constexpr unsigned int LFIONDMGCOP___c_TypeDefinitionIndex = 27682;

	class LFIONDMGCOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFIONDMGCOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP___C_CTOR_OFFSET))(this);
		}

		::LFIONDMGCOP* __cctor_b__23_0()
		{
			return ((::LFIONDMGCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIONDMGCOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
