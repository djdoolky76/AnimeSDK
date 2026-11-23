#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define F6DBB2D580097EA5_A389C8232C952A98_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A802E0)
#define F6DBB2D580097EA5_A389C8232C952A98_F0B92CA147ADB067_OFFSET UNITYSDK_OFFSET(0x3A80310)
#define F6DBB2D580097EA5_A389C8232C952A98__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6DBB2D580097EA5_A389C8232C952A98_TypeDefinitionIndex = 11932;

class F6DBB2D580097EA5_A389C8232C952A98 : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* F71A9E511E82DC8A; // 0x10
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* B2F2DFF3CE195EA1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5_A389C8232C952A98__CTOR_OFFSET))(this);
	}

	::System::Void BF3138F24160F012()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5_A389C8232C952A98_BF3138F24160F012_OFFSET))(this);
	}

	::System::Void F0B92CA147ADB067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6DBB2D580097EA5_A389C8232C952A98_F0B92CA147ADB067_OFFSET))(this);
	}
};
