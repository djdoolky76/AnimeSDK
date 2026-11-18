#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
class NFCIDHJGOIB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDEABBOKDMF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16359260)
#define LDEABBOKDMF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16359AF0)
#define LDEABBOKDMF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16359370)
#define LDEABBOKDMF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1635A1B0)
#define LDEABBOKDMF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16359360)
#define LDEABBOKDMF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1635A050)
#define LDEABBOKDMF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16359B50)
#define LDEABBOKDMF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1635A360)
#define LDEABBOKDMF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16358B10)
#define LDEABBOKDMF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16359190)
#define LDEABBOKDMF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x163593F0)
#define LDEABBOKDMF__CTOR_OFFSET UNITYSDK_OFFSET(0x16359F60)

inline static constexpr unsigned int LDEABBOKDMF_TypeDefinitionIndex = 72122;

class LDEABBOKDMF : public ::HDJJJGCHLEE
{
public:
	::NFCIDHJGOIB* OMMFLIHBBIH; // 0x30
	::Il2CppArray<::System::String*>* EOEKPNJGNKF; // 0x38
	::System::String* LAECNAABLJE; // 0x40
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEABBOKDMF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEABBOKDMF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LDEABBOKDMF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEABBOKDMF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEABBOKDMF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LDEABBOKDMF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDEABBOKDMF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDEABBOKDMF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LDEABBOKDMF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LDEABBOKDMF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LDEABBOKDMF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LDEABBOKDMF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LDEABBOKDMF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LDEABBOKDMF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDEABBOKDMF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEABBOKDMF_JFLMLBMNFFK_OFFSET))(this);
	}
};
