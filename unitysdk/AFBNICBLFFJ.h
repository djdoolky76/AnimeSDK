#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define AFBNICBLFFJ_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x135DB460)
#define AFBNICBLFFJ_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x135DB690)
#define AFBNICBLFFJ_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x135DB3C0)
#define AFBNICBLFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x135DBA70)

inline static constexpr unsigned int AFBNICBLFFJ_TypeDefinitionIndex = 40569;

class AFBNICBLFFJ : public ::System::Object
{
public:
	::System::Single KNLPBKDIJCO; // 0x10
	::UnityEngine::Vector2 BDIEDFPGFHF; // 0x14
	::System::Single CMAGKICODDF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBNICBLFFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AFBNICBLFFJ_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBNICBLFFJ_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AFBNICBLFFJ_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
