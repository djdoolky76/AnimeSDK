#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC46EDBCB129F4B0;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { template <typename T> class Action_1; }

#define EC46EDBCB129F4B0_EEC3CD7899480937_FA6F22F4A0DBC315_OFFSET UNITYSDK_OFFSET(0x3A80650)
#define EC46EDBCB129F4B0_EEC3CD7899480937__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC46EDBCB129F4B0_EEC3CD7899480937_TypeDefinitionIndex = 11942;

class EC46EDBCB129F4B0_EEC3CD7899480937 : public ::System::Object
{
public:
	::EC46EDBCB129F4B0* A544919C800E2923; // 0x10
	::System::Action_1<::System::Int32>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_EEC3CD7899480937__CTOR_OFFSET))(this);
	}

	::System::Void FA6F22F4A0DBC315(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_EEC3CD7899480937_FA6F22F4A0DBC315_OFFSET))(this, A6CAE7339066B0FB);
	}
};
