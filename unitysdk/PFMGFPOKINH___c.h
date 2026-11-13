#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFMGFPOKINH;
namespace System { class Object; }

#define PFMGFPOKINH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2067CDC0)
#define PFMGFPOKINH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2067CDF0)
#define PFMGFPOKINH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20246200)

inline static constexpr unsigned int PFMGFPOKINH___c_TypeDefinitionIndex = 34894;

	class PFMGFPOKINH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFMGFPOKINH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH___C_CTOR_OFFSET))(this);
		}

		::PFMGFPOKINH* __cctor_b__23_0()
		{
			return ((::PFMGFPOKINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMGFPOKINH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
