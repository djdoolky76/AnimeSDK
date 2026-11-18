#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PJNMPPJEHHL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14BA69E0)
#define PJNMPPJEHHL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14BA70A0)
#define PJNMPPJEHHL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14BA6AF0)
#define PJNMPPJEHHL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14BA7420)
#define PJNMPPJEHHL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14BA6AE0)
#define PJNMPPJEHHL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14BA75D0)
#define PJNMPPJEHHL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14BA7100)
#define PJNMPPJEHHL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14BA7730)
#define PJNMPPJEHHL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14BA6800)
#define PJNMPPJEHHL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14BA6950)
#define PJNMPPJEHHL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14BA6B70)
#define PJNMPPJEHHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA7390)

inline static constexpr unsigned int PJNMPPJEHHL_TypeDefinitionIndex = 41959;

class PJNMPPJEHHL : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNMPPJEHHL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJNMPPJEHHL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PJNMPPJEHHL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJNMPPJEHHL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PJNMPPJEHHL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNMPPJEHHL_JFLMLBMNFFK_OFFSET))(this);
	}
};
