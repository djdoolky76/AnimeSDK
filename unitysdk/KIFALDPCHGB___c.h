#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIFALDPCHGB;
namespace System { class Object; }

#define KIFALDPCHGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDE1860)
#define KIFALDPCHGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDE18A0)
#define KIFALDPCHGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDE18B0)

inline static constexpr unsigned int KIFALDPCHGB___c_TypeDefinitionIndex = 34214;

	class KIFALDPCHGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12D50);
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
