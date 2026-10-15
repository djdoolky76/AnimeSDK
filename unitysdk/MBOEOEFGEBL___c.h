#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBOEOEFGEBL;
namespace System { class Object; }

#define MBOEOEFGEBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ED5C0)
#define MBOEOEFGEBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ED600)
#define MBOEOEFGEBL___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E9ED610)

inline static constexpr unsigned int MBOEOEFGEBL___c_TypeDefinitionIndex = 27579;

	class MBOEOEFGEBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBOEOEFGEBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL___C_CTOR_OFFSET))(this);
		}

		::MBOEOEFGEBL* __cctor_b__37_0()
		{
			return ((::MBOEOEFGEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOEOEFGEBL___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
