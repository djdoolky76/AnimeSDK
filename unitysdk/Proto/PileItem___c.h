#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class PileItem; }
namespace System { class Object; }

#define PROTO_PILEITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2DCC70)
#define PROTO_PILEITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DCCA0)
#define PROTO_PILEITEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2DCCB0)

namespace Proto
{
	inline static constexpr unsigned int PileItem___c_TypeDefinitionIndex = 28364;

	class PileItem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x51780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C_CTOR_OFFSET))(this);
		}

		::Proto::PileItem* __cctor_b__28_0()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
