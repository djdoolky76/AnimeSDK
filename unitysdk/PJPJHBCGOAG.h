#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJPJHBCGOAG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1CB452B0)
#define PJPJHBCGOAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CB45AB0)
#define PJPJHBCGOAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1CB453C0)
#define PJPJHBCGOAG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1CB45F00)
#define PJPJHBCGOAG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1CB453B0)
#define PJPJHBCGOAG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1CB460B0)
#define PJPJHBCGOAG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1CB45B10)
#define PJPJHBCGOAG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1CB46210)
#define PJPJHBCGOAG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1CB44C10)
#define PJPJHBCGOAG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1CB451E0)
#define PJPJHBCGOAG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1CB45440)
#define PJPJHBCGOAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB45E70)

inline static constexpr unsigned int PJPJHBCGOAG_TypeDefinitionIndex = 79774;

class PJPJHBCGOAG : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::System::String* BGPMDIKJFPJ; // 0x38
	::System::String* AOLGDHDOCLP; // 0x40
	::System::Collections::Generic::List_1<::HBIBNDIOKPG*>* AHECJBACEDB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPJHBCGOAG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJPJHBCGOAG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PJPJHBCGOAG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJPJHBCGOAG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PJPJHBCGOAG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PJPJHBCGOAG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
