#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCGECAEBJFK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MHNKOMIFCKG_FHNCMBHHICI_OFFSET UNITYSDK_OFFSET(0x16C8BED0)
#define MHNKOMIFCKG_LHDLOCKAJLH_OFFSET UNITYSDK_OFFSET(0x16C8BEB0)
#define MHNKOMIFCKG__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8BE80)

inline static constexpr unsigned int MHNKOMIFCKG_TypeDefinitionIndex = 49527;

class MHNKOMIFCKG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* JJAGFPMHCHP; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* NAENCMFBABB; // 0x18
	::System::Int32 EJFGMAHJMHK; // 0x20
	::System::Int32 BCCENALHBHL; // 0x24
	::BCGECAEBJFK KKOGCPPLPNJ; // 0x28
	::System::Byte _padding0[0x4];
	::System::UInt64 ACHBBPJIBIE; // 0x30
	::UnityEngine::Vector3 ELILLPKJCBB; // 0x38
	::System::Boolean FJALCGBIDKI; // 0x44

	::System::Void _ctor(::System::UInt64 ACHBBPJIBIE, ::System::Int32 BCCENALHBHL, ::UnityEngine::Vector3 IKGMFOADCCB, ::System::Action_1<::System::Int32>* JJAGFPMHCHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::UnityEngine::Vector3, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MHNKOMIFCKG__CTOR_OFFSET))(this, ACHBBPJIBIE, BCCENALHBHL, IKGMFOADCCB, JJAGFPMHCHP);
	}

	::UnityEngine::Vector3 LHDLOCKAJLH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNKOMIFCKG_LHDLOCKAJLH_OFFSET))(this);
	}

	::System::String* FHNCMBHHICI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNKOMIFCKG_FHNCMBHHICI_OFFSET))(this);
	}
};
