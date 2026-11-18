#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIIJFDEMGEG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF9D1CE0)
#define EIIJFDEMGEG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF9D1E60)
#define EIIJFDEMGEG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF9D1DF0)
#define EIIJFDEMGEG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF9D1F60)
#define EIIJFDEMGEG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF9D1DE0)
#define EIIJFDEMGEG_HEJIGKHPNNP_OFFSET UNITYSDK_OFFSET(0xF9D1C20)
#define EIIJFDEMGEG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF9D1E90)
#define EIIJFDEMGEG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF9D1E70)
#define EIIJFDEMGEG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF9D1CD0)
#define EIIJFDEMGEG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF9D1E50)
#define EIIJFDEMGEG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D1E80)

inline static constexpr unsigned int EIIJFDEMGEG_TypeDefinitionIndex = 87659;

class EIIJFDEMGEG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIJFDEMGEG__CTOR_OFFSET))(this);
	}

	::System::Void HEJIGKHPNNP(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::JCADHFOKIHK* GKLACFFMCCN, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& PILELGPBCLL, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 AIALJPFNOHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_HEJIGKHPNNP_OFFSET))(this, PNJNAAHKAIB, GKLACFFMCCN, PILELGPBCLL, LPOIBLLILAA, CFJFMMGPGKE, AIALJPFNOHN);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EIIJFDEMGEG* DGNAAPGKIPL()
	{
		return ((::EIIJFDEMGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EIIJFDEMGEG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EIIJFDEMGEG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EIIJFDEMGEG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EIIJFDEMGEG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIIJFDEMGEG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
