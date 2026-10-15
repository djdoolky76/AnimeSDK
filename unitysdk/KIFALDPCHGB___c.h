#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIFALDPCHGB;
namespace System { class Object; }

#define KIFALDPCHGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82BB40)
#define KIFALDPCHGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82BB80)
#define KIFALDPCHGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E82BB90)

inline static constexpr unsigned int KIFALDPCHGB___c_TypeDefinitionIndex = 33299;

	class KIFALDPCHGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIFALDPCHGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB___C_CTOR_OFFSET))(this);
		}

		::KIFALDPCHGB* __cctor_b__23_0()
		{
			return ((::KIFALDPCHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
