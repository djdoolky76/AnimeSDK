#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFIONDMGCOP;
namespace System { class Object; }

#define LFIONDMGCOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9112C0)
#define LFIONDMGCOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E911300)
#define LFIONDMGCOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E911310)

inline static constexpr unsigned int LFIONDMGCOP___c_TypeDefinitionIndex = 27151;

	class LFIONDMGCOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32E40);
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
