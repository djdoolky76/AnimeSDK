#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIStateOperation.h"
class FiveDimRenderingItem;

#define PROTORYPEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0xC394F80)
#define PROTORYPEOPERATION_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xC394E90)
#define PROTORYPEOPERATION_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC394DE0)
#define PROTORYPEOPERATION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xC394D30)

inline static constexpr unsigned int ProtorypeOperation_TypeDefinitionIndex = 47119;

	class ProtorypeOperation : public ::FDRIStateOperation
	{
	public:
		::System::Boolean show; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 prototypeID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_DHFBDMHFNIK_OFFSET))(this, a1);
		}

	};
