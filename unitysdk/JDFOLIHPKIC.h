#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define JDFOLIHPKIC_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1306F480)
#define JDFOLIHPKIC_BOBLJOODNLO_OFFSET UNITYSDK_OFFSET(0x1306F7C0)
#define JDFOLIHPKIC_CEAFPCALBGC_OFFSET UNITYSDK_OFFSET(0x1306F440)
#define JDFOLIHPKIC_DMIKIPEDDDB_OFFSET UNITYSDK_OFFSET(0x1306F9F0)
#define JDFOLIHPKIC_FAALBLNOPIL_OFFSET UNITYSDK_OFFSET(0x1306F6E0)
#define JDFOLIHPKIC_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x1306F8E0)
#define JDFOLIHPKIC_JHDIDMKCEGM_OFFSET UNITYSDK_OFFSET(0x1306F300)
#define JDFOLIHPKIC_LCFONAAGBDA_OFFSET UNITYSDK_OFFSET(0x1306F850)
#define JDFOLIHPKIC_MKDGHEMJIHI_OFFSET UNITYSDK_OFFSET(0x1306FA80)
#define JDFOLIHPKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1306F2F0)

inline static constexpr unsigned int JDFOLIHPKIC_TypeDefinitionIndex = 68218;

class JDFOLIHPKIC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC__CTOR_OFFSET))(this);
	}

	::System::Void JHDIDMKCEGM(::System::Action* HKEBHFKHBCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_JHDIDMKCEGM_OFFSET))(this, HKEBHFKHBCC);
	}

	::System::Void GIAOBHOJCDP(::System::Action* EJGDHCIBCJH, ::System::Boolean NHPAHIPBEGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_GIAOBHOJCDP_OFFSET))(this, EJGDHCIBCJH, NHPAHIPBEGF);
	}

	::System::Void LCFONAAGBDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_LCFONAAGBDA_OFFSET))(this);
	}

	::System::Void MKDGHEMJIHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_MKDGHEMJIHI_OFFSET))(this);
	}

	::System::Collections::IEnumerator* DMIKIPEDDDB(::System::Action* HKEBHFKHBCC)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_DMIKIPEDDDB_OFFSET))(this, HKEBHFKHBCC);
	}

	::System::Void BOBLJOODNLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_BOBLJOODNLO_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void FAALBLNOPIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_FAALBLNOPIL_OFFSET))(this);
	}

	::System::Void CEAFPCALBGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFOLIHPKIC_CEAFPCALBGC_OFFSET))(this);
	}
};
