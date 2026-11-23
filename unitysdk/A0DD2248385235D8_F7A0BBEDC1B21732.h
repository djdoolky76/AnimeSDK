#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A0DD2248385235D8;
class F8B11FF5D1DF1B0F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A0DD2248385235D8_F7A0BBEDC1B21732_EACCFF97B6A7E630_OFFSET UNITYSDK_OFFSET(0x3AF92A0)
#define A0DD2248385235D8_F7A0BBEDC1B21732__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0DD2248385235D8_F7A0BBEDC1B21732_TypeDefinitionIndex = 12197;

class A0DD2248385235D8_F7A0BBEDC1B21732 : public ::System::Object
{
public:
	::A0DD2248385235D8* A544919C800E2923; // 0x10
	::System::String* F4678C67D6347E6C; // 0x18
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F7A0BBEDC1B21732__CTOR_OFFSET))(this);
	}

	::System::Void EACCFF97B6A7E630(::F8B11FF5D1DF1B0F* A32ED10FB0DD6D42)
	{
		return ((::System::Void(*)(::PVOID, ::F8B11FF5D1DF1B0F*))((::PBYTE)hIl2Cpp + A0DD2248385235D8_F7A0BBEDC1B21732_EACCFF97B6A7E630_OFFSET))(this, A32ED10FB0DD6D42);
	}
};
