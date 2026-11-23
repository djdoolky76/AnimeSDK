#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/B926396B5989E03E.h"
#include "unitysdk/MiHoYo/SDK/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/System/Object.h"

class E4D030742A4A1CA8;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E4D030742A4A1CA8_E3B3C41841659409_ACD204E32716CE4F_OFFSET UNITYSDK_OFFSET(0x3A68D90)
#define E4D030742A4A1CA8_E3B3C41841659409_E5B760EAC28E908E_OFFSET UNITYSDK_OFFSET(0x3A68E60)
#define E4D030742A4A1CA8_E3B3C41841659409__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D030742A4A1CA8_E3B3C41841659409_TypeDefinitionIndex = 13042;

class E4D030742A4A1CA8_E3B3C41841659409 : public ::System::Object
{
public:
	::BED79290917896D4::B926396B5989E03E A288CB28FC2A6DA3; // 0x10
	::System::Byte _padding0[0x4];
	::E4D030742A4A1CA8* A544919C800E2923; // 0x18
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* BEA038506C4E9EE3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E3B3C41841659409__CTOR_OFFSET))(this);
	}

	::System::Void ACD204E32716CE4F(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E3B3C41841659409_ACD204E32716CE4F_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void E5B760EAC28E908E(::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_E3B3C41841659409_E5B760EAC28E908E_OFFSET))(this, E82293C0814051A5);
	}
};
