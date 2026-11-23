#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A70D898CE3E14190.h"
#include "unitysdk/B4F5E4527802C58E_F52938EFAECC6FCA.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define B4F5E4527802C58E_B1254E6CEA908C20_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x228A980)
#define B4F5E4527802C58E_B1254E6CEA908C20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4F5E4527802C58E_B1254E6CEA908C20_TypeDefinitionIndex = 7003;

class B4F5E4527802C58E_B1254E6CEA908C20 : public ::B4F5E4527802C58E_F52938EFAECC6FCA
{
public:
	::UnityEngine::GameObject* ABA89EAEE78F2DC9; // 0x10
	::UnityEngine::GameObject* F2062C2C592B91B2; // 0x18
	::System::Int32 ACBE1EE72C8EA662; // 0x20
	::System::Int32 F6191DE23A834290; // 0x24
	::UnityEngine::BE5668376C82998A ECCB08C11DC7B290; // 0x28
	::UnityEngine::BE5668376C82998A EA9F67A636C8F73A; // 0x38
	::System::Action_1<::A70D898CE3E14190>* F1C5198FBC44AFCA; // 0x48
	::System::Action_1<::System::Int32>* EF83AF6569A651BD; // 0x50

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_B1254E6CEA908C20_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F5E4527802C58E_B1254E6CEA908C20__CTOR_OFFSET))(this);
	}
};
