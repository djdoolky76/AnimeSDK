#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define JCKGMHGHIJH_JDCCOHCEFDF_AAMABABGGFK_OFFSET UNITYSDK_OFFSET(0x1306ED20)
#define JCKGMHGHIJH_JDCCOHCEFDF_MIDKDIBIPJG_OFFSET UNITYSDK_OFFSET(0x1306EA70)
#define JCKGMHGHIJH_JDCCOHCEFDF_ODAKNGDJJBL_OFFSET UNITYSDK_OFFSET(0x1306EC30)
#define JCKGMHGHIJH_JDCCOHCEFDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1306EA60)

inline static constexpr unsigned int JCKGMHGHIJH_JDCCOHCEFDF_TypeDefinitionIndex = 43544;

class JCKGMHGHIJH_JDCCOHCEFDF : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_JDCCOHCEFDF__CTOR_OFFSET))(this);
	}

	::System::Void MIDKDIBIPJG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_JDCCOHCEFDF_MIDKDIBIPJG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void ODAKNGDJJBL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_JDCCOHCEFDF_ODAKNGDJJBL_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void AAMABABGGFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGMHGHIJH_JDCCOHCEFDF_AAMABABGGFK_OFFSET))(this);
	}
};
