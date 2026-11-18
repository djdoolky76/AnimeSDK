#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GLGLLGDLJLI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x125D7ED0)
#define GLGLLGDLJLI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x125D8F50)
#define GLGLLGDLJLI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x125D7FE0)
#define GLGLLGDLJLI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x125D9530)
#define GLGLLGDLJLI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x125D7FD0)
#define GLGLLGDLJLI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x125D96E0)
#define GLGLLGDLJLI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x125D8FB0)
#define GLGLLGDLJLI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x125D9840)
#define GLGLLGDLJLI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x125D74F0)
#define GLGLLGDLJLI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x125D7DE0)
#define GLGLLGDLJLI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x125D8060)
#define GLGLLGDLJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x125D94A0)

inline static constexpr unsigned int GLGLLGDLJLI_TypeDefinitionIndex = 88428;

class GLGLLGDLJLI : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JEJMGCNBMAD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* BPHNOMCLEJD; // 0x50
	::MoleMole::Config::EffectAutoDynamicValue* NFKNDLMAPMO; // 0x58
	::System::String* BODECKIDFGF; // 0x60
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MFDOBMEPCLL; // 0x68
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x88
	::System::Byte _padding2[0x18];
	::HBIBNDIOKPG* KKOPHFNJANP; // 0xA8
	::HBIBNDIOKPG* KEHECMCDLFC; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGLLGDLJLI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GLGLLGDLJLI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GLGLLGDLJLI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GLGLLGDLJLI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GLGLLGDLJLI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGLLGDLJLI_JFLMLBMNFFK_OFFSET))(this);
	}
};
