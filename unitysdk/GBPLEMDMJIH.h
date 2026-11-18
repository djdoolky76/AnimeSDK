#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GBPLEMDMJIH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11C9AA70)
#define GBPLEMDMJIH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C9B7F0)
#define GBPLEMDMJIH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C9AB80)
#define GBPLEMDMJIH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11C9BED0)
#define GBPLEMDMJIH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11C9AB70)
#define GBPLEMDMJIH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11C9BD70)
#define GBPLEMDMJIH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11C9B850)
#define GBPLEMDMJIH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11C9C080)
#define GBPLEMDMJIH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11C9A400)
#define GBPLEMDMJIH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11C9A9D0)
#define GBPLEMDMJIH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11C9AC00)
#define GBPLEMDMJIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9BC70)

inline static constexpr unsigned int GBPLEMDMJIH_TypeDefinitionIndex = 76710;

class GBPLEMDMJIH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MEKAFGFKKJD; // 0x58
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* FJCJEMPCHLB; // 0x78
	::FOBNALGHPPD_1<::System::Boolean> JMHJCKNDPFD; // 0x80
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> BFDGJMPKGGC; // 0xA0
	::System::Byte _padding3[0x18];
	::FOBNALGHPPD_1<::System::Single> DLJBOGGIAEE; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPLEMDMJIH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GBPLEMDMJIH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GBPLEMDMJIH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GBPLEMDMJIH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GBPLEMDMJIH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPLEMDMJIH_JFLMLBMNFFK_OFFSET))(this);
	}
};
