#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJLHMKAEJJM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15194F40)
#define LJLHMKAEJJM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15195C10)
#define LJLHMKAEJJM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15195050)
#define LJLHMKAEJJM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x151963F0)
#define LJLHMKAEJJM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15195040)
#define LJLHMKAEJJM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15196200)
#define LJLHMKAEJJM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15195C70)
#define LJLHMKAEJJM_IAJAOCMHMJD_OFFSET UNITYSDK_OFFSET(0x151946E0)
#define LJLHMKAEJJM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15196360)
#define LJLHMKAEJJM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15192B30)
#define LJLHMKAEJJM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15194E70)
#define LJLHMKAEJJM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x151950D0)
#define LJLHMKAEJJM_PKLJKPNADDL_OFFSET UNITYSDK_OFFSET(0x15194A50)
#define LJLHMKAEJJM__CTOR_OFFSET UNITYSDK_OFFSET(0x15196170)

inline static constexpr unsigned int LJLHMKAEJJM_TypeDefinitionIndex = 60080;

class LJLHMKAEJJM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* BNPDGPDKHIA; // 0x30
	::FOBNALGHPPD_1<::System::String*> CDHENGBKKFJ; // 0x38
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* ILOJFPNKJII; // 0x58
	::HBIBNDIOKPG* BHNGONOMLBM; // 0x60
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x68
	::System::Boolean BLGMBKMILMH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHMKAEJJM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LJLHMKAEJJM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LJLHMKAEJJM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Void PKLJKPNADDL(::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM, ::System::String* ILHIOFIMNOM, ::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BIKAPPJBKJF, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* OMOGJAFELBA, ::System::Collections::Generic::List_1<::System::UInt32>* FDEKLLBKDCI, ::MoleMole::Config::ConfigAttackPatternType JLFOCLDLHAH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::MoleMole::Config::ConfigAttackPatternType))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_PKLJKPNADDL_OFFSET))(this, JGINLLKLHGM, ILHIOFIMNOM, OMPHGGCEIBD, MFMPICKHAMJ, BIKAPPJBKJF, OMOGJAFELBA, FDEKLLBKDCI, JLFOCLDLHAH);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void IAJAOCMHMJD(::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM, ::System::String* ILHIOFIMNOM, ::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::UnityEngine::Vector3 IDMNIAGNHJL, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::UInt32 PONMIAPMPML)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_IAJAOCMHMJD_OFFSET))(this, JGINLLKLHGM, ILHIOFIMNOM, OMPHGGCEIBD, MFMPICKHAMJ, IDMNIAGNHJL, BFBELMDIAHI, PONMIAPMPML);
	}

	static ::LJLHMKAEJJM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LJLHMKAEJJM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LJLHMKAEJJM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
