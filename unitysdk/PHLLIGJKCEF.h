#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PHLLIGJKCEF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1D6282D0)
#define PHLLIGJKCEF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6287E0)
#define PHLLIGJKCEF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1D6283E0)
#define PHLLIGJKCEF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1D628C90)
#define PHLLIGJKCEF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1D6283D0)
#define PHLLIGJKCEF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1D628B30)
#define PHLLIGJKCEF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1D628840)
#define PHLLIGJKCEF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1D628E40)
#define PHLLIGJKCEF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1D627E90)
#define PHLLIGJKCEF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1D628240)
#define PHLLIGJKCEF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1D628460)
#define PHLLIGJKCEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D628AA0)

inline static constexpr unsigned int PHLLIGJKCEF_TypeDefinitionIndex = 45703;

class PHLLIGJKCEF : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLIGJKCEF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PHLLIGJKCEF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PHLLIGJKCEF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PHLLIGJKCEF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PHLLIGJKCEF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PHLLIGJKCEF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
