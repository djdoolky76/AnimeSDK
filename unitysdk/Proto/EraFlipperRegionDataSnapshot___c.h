#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class EraFlipperRegionDataSnapshot; }
namespace System { class Object; }

#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2A16B0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A16F0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2A1700)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperRegionDataSnapshot___c_TypeDefinitionIndex = 26340;

	class EraFlipperRegionDataSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4C7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::EraFlipperRegionDataSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::EraFlipperRegionDataSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
