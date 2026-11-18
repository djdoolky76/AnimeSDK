#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKKJJHBHFOE.h"
#include "unitysdk/KGNAEHLANOG.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHAHJCOGLJK_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x8481F0)
#define PHAHJCOGLJK_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x8481E0)
#define PHAHJCOGLJK_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x848140)

inline static constexpr unsigned int PHAHJCOGLJK_TypeDefinitionIndex = 87473;

struct alignas(8) PHAHJCOGLJK
{
	::System::String* KMEBJPAEBCK; // 0x10
	::System::Collections::Generic::List_1<::JKKJJHBHFOE>* BPEPKIOKJFO; // 0x18
	::System::Collections::Generic::List_1<::KGNAEHLANOG>* FKGLBHNBJHM; // 0x20
	::JKKJJHBHFOE EDEFLFIKNFK; // 0x28
	::KGNAEHLANOG BPABEFPJLKO; // 0x30
	::System::Collections::Generic::List_1<::JKKJJHBHFOE>* ACPEAMPCEGK; // 0x38
	::System::Collections::Generic::List_1<::KGNAEHLANOG>* EPPFPLJKLKP; // 0x40

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PHAHJCOGLJK_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAHJCOGLJK_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PHAHJCOGLJK_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
