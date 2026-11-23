#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
class F8B11FF5D1DF1B0F;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define FE03F3B15E03047E_B64F6DCBCC6D1781_OFFSET UNITYSDK_OFFSET(0x3A13ED0)
#define FE03F3B15E03047E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE03F3B15E03047E_TypeDefinitionIndex = 12860;

class FE03F3B15E03047E : public ::System::Object
{
public:
	static ::System::Void B64F6DCBCC6D1781(::F00D975466190277* F19E59B9731CD70D, ::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::F00D975466190277*, ::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>*))((::PBYTE)hIl2Cpp + FE03F3B15E03047E_B64F6DCBCC6D1781_OFFSET))(F19E59B9731CD70D, E04D2BE64FCE9814);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE03F3B15E03047E__CTOR_OFFSET))(this);
	}
};
