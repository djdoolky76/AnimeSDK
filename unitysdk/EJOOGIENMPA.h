#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class AFBNICBLFFJ;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define EJOOGIENMPA_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7A1770)
#define EJOOGIENMPA_KMJCEFPCLPP_OFFSET UNITYSDK_OFFSET(0x1711A580)
#define EJOOGIENMPA_MGOMDFHDIKJ_OFFSET UNITYSDK_OFFSET(0x1711A900)
#define EJOOGIENMPA_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7A1760)
#define EJOOGIENMPA_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7A16C0)

inline static constexpr unsigned int EJOOGIENMPA_TypeDefinitionIndex = 88258;

struct alignas(8) EJOOGIENMPA
{
	::AFBNICBLFFJ* ILOJFPNKJII; // 0x10
	::System::String* AMEEMEPHGEL; // 0x18
	::UnityEngine::Color ELBOLGJMGEF; // 0x20

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + EJOOGIENMPA_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOOGIENMPA_MKEFBLKCNKE_OFFSET))(this);
	}

	static ::System::Boolean MGOMDFHDIKJ(::System::String* HLFFCMIFFIB, ::UnityEngine::Color& JBBFCGAMDHI)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + EJOOGIENMPA_MGOMDFHDIKJ_OFFSET))(HLFFCMIFFIB, JBBFCGAMDHI);
	}

	static ::System::String* KMJCEFPCLPP(::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + EJOOGIENMPA_KMJCEFPCLPP_OFFSET))(JBBFCGAMDHI);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + EJOOGIENMPA_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
