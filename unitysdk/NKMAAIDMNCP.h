#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NKMAAIDMNCP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x105C78F0)
#define NKMAAIDMNCP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x105C8090)
#define NKMAAIDMNCP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x105C7A00)
#define NKMAAIDMNCP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x105C8480)
#define NKMAAIDMNCP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x105C79F0)
#define NKMAAIDMNCP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x105C86C0)
#define NKMAAIDMNCP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x105C80F0)
#define NKMAAIDMNCP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x105C8630)
#define NKMAAIDMNCP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x105C6C30)
#define NKMAAIDMNCP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x105C7830)
#define NKMAAIDMNCP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x105C7A80)
#define NKMAAIDMNCP__CTOR_OFFSET UNITYSDK_OFFSET(0x105C83F0)

inline static constexpr unsigned int NKMAAIDMNCP_TypeDefinitionIndex = 90696;

class NKMAAIDMNCP : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* IFEFGIHOKOC; // 0x30
	::GPIOLGMOBLJ* ILOJFPNKJII; // 0x38
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x40
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMAAIDMNCP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NKMAAIDMNCP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NKMAAIDMNCP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::NKMAAIDMNCP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NKMAAIDMNCP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NKMAAIDMNCP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
