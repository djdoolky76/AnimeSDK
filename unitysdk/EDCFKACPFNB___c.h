#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDCFKACPFNB;
namespace System { class Object; }

#define EDCFKACPFNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22DB90)
#define EDCFKACPFNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22DBC0)
#define EDCFKACPFNB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E22DBD0)

inline static constexpr unsigned int EDCFKACPFNB___c_TypeDefinitionIndex = 25414;

	class EDCFKACPFNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDCFKACPFNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB___C_CTOR_OFFSET))(this);
		}

		::EDCFKACPFNB* __cctor_b__23_0()
		{
			return ((::EDCFKACPFNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
