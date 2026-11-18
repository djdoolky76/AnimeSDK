#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define EKNHINDNGBI_HOAAOPOBOGA_OFFSET UNITYSDK_OFFSET(0x1711CBA0)
#define EKNHINDNGBI_LKEDBCOBNCL_OFFSET UNITYSDK_OFFSET(0x1711CC30)
#define EKNHINDNGBI_OECMIENOBGE_OFFSET UNITYSDK_OFFSET(0x1711D2D0)
#define EKNHINDNGBI_PJJOJCEOAIE_OFFSET UNITYSDK_OFFSET(0x1711D160)

inline static constexpr unsigned int EKNHINDNGBI_TypeDefinitionIndex = 71647;

class EKNHINDNGBI : public ::System::Object
{
public:
	static ::System::Void HOAAOPOBOGA(::SimpleJSON::JSONNode* CAOOFFAONLP, ::System::String* EJHFLEFLHBC, ::System::Object* CJFMPKGBBNJ)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + EKNHINDNGBI_HOAAOPOBOGA_OFFSET))(CAOOFFAONLP, EJHFLEFLHBC, CJFMPKGBBNJ);
	}

	static ::SimpleJSON::JSONNode* LKEDBCOBNCL(::System::Object* NIBDOKHAALH)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + EKNHINDNGBI_LKEDBCOBNCL_OFFSET))(NIBDOKHAALH);
	}

	static ::System::String* PJJOJCEOAIE(::SimpleJSON::JSONClass* CAOOFFAONLP)
	{
		return ((::System::String*(*)(::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + EKNHINDNGBI_PJJOJCEOAIE_OFFSET))(CAOOFFAONLP);
	}

	static ::System::Void OECMIENOBGE(::SimpleJSON::JSONNode* CAOOFFAONLP, ::System::String* EJHFLEFLHBC, ::SimpleJSON::JSONNode* BNMLMJBKOIB)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + EKNHINDNGBI_OECMIENOBGE_OFFSET))(CAOOFFAONLP, EJHFLEFLHBC, BNMLMJBKOIB);
	}
};
