#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A7417194EED331E6_E3E16DA62F1D5529_FE2586B6B8A29B54_OFFSET UNITYSDK_OFFSET(0x3A981C0)
#define A7417194EED331E6_E3E16DA62F1D5529__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_E3E16DA62F1D5529_TypeDefinitionIndex = 12008;

class A7417194EED331E6_E3E16DA62F1D5529 : public ::System::Object
{
public:
	::System::String* AE11B914AE12D7B2; // 0x10
	::System::String* E15BCD7E743D54ED; // 0x18
	::System::String* B960AC235824C6C8; // 0x20
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* E04D2BE64FCE9814; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_E3E16DA62F1D5529__CTOR_OFFSET))(this);
	}

	::System::Void FE2586B6B8A29B54(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A7417194EED331E6_E3E16DA62F1D5529_FE2586B6B8A29B54_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
