#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFFFNFHPPFC_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x736720)
#define HFFFNFHPPFC_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x736710)
#define HFFFNFHPPFC_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x736670)

inline static constexpr unsigned int HFFFNFHPPFC_TypeDefinitionIndex = 62331;

struct alignas(8) HFFFNFHPPFC
{
	::System::Int32 DJJGLILJKEA; // 0x10
	::System::Int32 CJFOMLIEDLG; // 0x14
	::System::String* DLEEKGFCCDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JOJPJLCAMHJ; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* EKMHIOBODAA; // 0x28

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HFFFNFHPPFC_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFFNFHPPFC_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HFFFNFHPPFC_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
