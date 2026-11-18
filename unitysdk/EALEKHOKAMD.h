#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define EALEKHOKAMD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDC660)

inline static constexpr unsigned int EALEKHOKAMD_TypeDefinitionIndex = 58688;

class EALEKHOKAMD : public ::System::Object
{
public:
	::MoleMole::Config::ConfigCameraNoise* MJHEJAKNFPN; // 0x10
	::MoleMole::Cameras::CameraTrackBlending* EKJCFNMKHNO; // 0x18
	::System::Threading::CancellationTokenSource* CCKDICHKMDK; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* FFIELHGFPOJ; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* LCCFFMHCGOC; // 0x30
	::System::Collections::Generic::List_1<::System::Object*>* JOBOCLBGAHN; // 0x38
	::System::Single HIIMFCACFGI; // 0x40
	::System::Boolean BGDFMOKNGIL; // 0x44
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 ABJLDBHCPKB; // 0x48
	::UnityEngine::Quaternion PMBLJGOHOKC; // 0x54
	::System::Single OCJJLJJKBCI; // 0x64
	::UnityEngine::Quaternion OAKAJGCDLIF; // 0x68
	::System::Single OCLIFCMDCDB; // 0x78
	::UnityEngine::Vector3 HLKLCIHDNDC; // 0x7C
	::System::Int32 ECPCLFAPAHA; // 0x88
	::System::Int32 HHDMKFPFEJO; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALEKHOKAMD__CTOR_OFFSET))(this);
	}
};
