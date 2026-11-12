#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMMLEBEEJLB;
namespace System { class Object; }

#define NMMLEBEEJLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F06CAA0)
#define NMMLEBEEJLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F06CAE0)
#define NMMLEBEEJLB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F06CAF0)

inline static constexpr unsigned int NMMLEBEEJLB___c_TypeDefinitionIndex = 33760;

	class NMMLEBEEJLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x71AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMMLEBEEJLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB___C_CTOR_OFFSET))(this);
		}

		::NMMLEBEEJLB* __cctor_b__23_0()
		{
			return ((::NMMLEBEEJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
