#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F6005F6BB63E9BA9_AB19D8C2B6E68DD3;
namespace HoudiniEngineUnity { class HEU_BaseSync; }

#define FF76D3899EF0AE7B__CTOR_OFFSET UNITYSDK_OFFSET(0x3800B50)

inline static constexpr unsigned int FF76D3899EF0AE7B_TypeDefinitionIndex = 17835;

class FF76D3899EF0AE7B : public ::System::Object
{
public:
	::System::Boolean AF56CB4DBDC9E79A; // 0x10
	::System::Byte _padding0[0x7];
	::F6005F6BB63E9BA9_AB19D8C2B6E68DD3* F7025CD56B6574F3; // 0x18
	::HoudiniEngineUnity::HEU_BaseSync* E7F7F7139797D32F; // 0x20

	::System::Void _ctor(::System::Boolean BE7C999855476FE5, ::F6005F6BB63E9BA9_AB19D8C2B6E68DD3* B7E1CA4A8880051D, ::HoudiniEngineUnity::HEU_BaseSync* BCFB0A43E84963A7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::F6005F6BB63E9BA9_AB19D8C2B6E68DD3*, ::HoudiniEngineUnity::HEU_BaseSync*))((::PBYTE)hIl2Cpp + FF76D3899EF0AE7B__CTOR_OFFSET))(this, BE7C999855476FE5, B7E1CA4A8880051D, BCFB0A43E84963A7);
	}
};
