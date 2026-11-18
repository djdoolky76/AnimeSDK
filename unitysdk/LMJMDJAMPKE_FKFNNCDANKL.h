#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMJMDJAMPKE_AAHIEPCFDBO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define LMJMDJAMPKE_FKFNNCDANKL_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x15669530)
#define LMJMDJAMPKE_FKFNNCDANKL_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15669620)
#define LMJMDJAMPKE_FKFNNCDANKL__CTOR_OFFSET UNITYSDK_OFFSET(0x15669520)

inline static constexpr unsigned int LMJMDJAMPKE_FKFNNCDANKL_TypeDefinitionIndex = 64186;

class LMJMDJAMPKE_FKFNNCDANKL : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* HBKKEGFMJOB; // 0x18
	::UnityEngine::GameObject* LGHLMHFCKBM; // 0x20
	::System::Int32 LONODJEPPGL; // 0x28
	::LMJMDJAMPKE_AAHIEPCFDBO OBNIAHNMHPF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_FKFNNCDANKL__CTOR_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::UnityEngine::GameObject* PILJJPDCLLM, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_FKFNNCDANKL_ABDLEONNPAJ_OFFSET))(this, PILJJPDCLLM, NNJOMEFILCC);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_FKFNNCDANKL_BJANDJKKNCD_OFFSET))(this);
	}
};
