#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_ScrollDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

#define HCNJIGHHGPN_DBGLMMPCLOF_OFFSET UNITYSDK_OFFSET(0x17A3E720)
#define HCNJIGHHGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3E710)

inline static constexpr unsigned int HCNJIGHHGPN_TypeDefinitionIndex = 55541;

class HCNJIGHHGPN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNJIGHHGPN__CTOR_OFFSET))(this);
	}

	static ::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection DBGLMMPCLOF(::System::Nullable_1<::System::Boolean> AFMOEMOKLNL)
	{
		return ((::NAPScrollView::DataStruct::ScrollToTargetContext_ScrollDirection(*)(::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + HCNJIGHHGPN_DBGLMMPCLOF_OFFSET))(AFMOEMOKLNL);
	}
};
