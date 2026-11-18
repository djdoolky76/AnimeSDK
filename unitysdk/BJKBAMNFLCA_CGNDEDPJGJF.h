#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class GHHDDDLMHII;
class NAIJHPCDGKC;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define BJKBAMNFLCA_CGNDEDPJGJF_LJKENKACGCF_OFFSET UNITYSDK_OFFSET(0xF79D410)
#define BJKBAMNFLCA_CGNDEDPJGJF_LNJHFFILMDC_OFFSET UNITYSDK_OFFSET(0xF79D830)
#define BJKBAMNFLCA_CGNDEDPJGJF_OONHJDNDPAO_OFFSET UNITYSDK_OFFSET(0xF79D480)
#define BJKBAMNFLCA_CGNDEDPJGJF__CTOR_OFFSET UNITYSDK_OFFSET(0xF79D400)

inline static constexpr unsigned int BJKBAMNFLCA_CGNDEDPJGJF_TypeDefinitionIndex = 41563;

class BJKBAMNFLCA_CGNDEDPJGJF : public ::System::Object
{
public:
	::GHHDDDLMHII* KPNIHKEKDOC; // 0x10
	::System::Action_1<::NAIJHPCDGKC*>* FFMGICPLKFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Int32 KMOHKCADPNA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_CGNDEDPJGJF__CTOR_OFFSET))(this);
	}

	::System::Void LJKENKACGCF(::NAIJHPCDGKC* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::NAIJHPCDGKC*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_CGNDEDPJGJF_LJKENKACGCF_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void OONHJDNDPAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_CGNDEDPJGJF_OONHJDNDPAO_OFFSET))(this);
	}

	::System::Void LNJHFFILMDC(::Foundation::AssetPath EMIKCAHJLGB, ::UnityEngine::GameObject* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_CGNDEDPJGJF_LNJHFFILMDC_OFFSET))(this, EMIKCAHJLGB, HEAJMIGHEHG);
	}
};
