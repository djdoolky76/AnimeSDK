#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PMPPFLGLAFI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A7FF2D0)
#define PMPPFLGLAFI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A7FF990)
#define PMPPFLGLAFI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7FF3E0)
#define PMPPFLGLAFI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A7FFE70)
#define PMPPFLGLAFI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A7FF3D0)
#define PMPPFLGLAFI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A7FFD10)
#define PMPPFLGLAFI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A7FF9F0)
#define PMPPFLGLAFI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A800020)
#define PMPPFLGLAFI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A7FEFA0)
#define PMPPFLGLAFI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A7FF240)
#define PMPPFLGLAFI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A7FF460)
#define PMPPFLGLAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FFC80)

inline static constexpr unsigned int PMPPFLGLAFI_TypeDefinitionIndex = 40718;

class PMPPFLGLAFI : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JPGOMOGGDCH; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HNNMABFMCBL; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* AAEBAFAMFCC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPFLGLAFI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PMPPFLGLAFI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PMPPFLGLAFI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PMPPFLGLAFI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PMPPFLGLAFI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPPFLGLAFI_JFLMLBMNFFK_OFFSET))(this);
	}
};
