#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMABAKJCFKJ;
namespace System { class Object; }

#define FMABAKJCFKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B15D0)
#define FMABAKJCFKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B1610)
#define FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3B1620)

inline static constexpr unsigned int FMABAKJCFKJ___c_TypeDefinitionIndex = 26453;

	class FMABAKJCFKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CTOR_OFFSET))(this);
		}

		::FMABAKJCFKJ* __cctor_b__28_0()
		{
			return ((::FMABAKJCFKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
