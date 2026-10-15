#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGPFIAPLOO;
namespace System { class Object; }

#define LEGPFIAPLOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9026D0)
#define LEGPFIAPLOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E902710)
#define LEGPFIAPLOO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E902720)

inline static constexpr unsigned int LEGPFIAPLOO___c_TypeDefinitionIndex = 29479;

	class LEGPFIAPLOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGPFIAPLOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO___C_CTOR_OFFSET))(this);
		}

		::LEGPFIAPLOO* __cctor_b__43_0()
		{
			return ((::LEGPFIAPLOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
