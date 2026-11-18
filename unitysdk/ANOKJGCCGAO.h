#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOILPFEHEBG.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ALEOIKCEKEI;
class BOHMJANLLMM;
class FKNIEPCILLG;
class FLDPBAPLICI;
class HNPECBKAPMG;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigGadgetMetaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANOKJGCCGAO_AFJHHCKNCDE_OFFSET UNITYSDK_OFFSET(0x18540A30)
#define ANOKJGCCGAO_CGLCEKGEINN_OFFSET UNITYSDK_OFFSET(0x18540A20)
#define ANOKJGCCGAO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1853FF10)
#define ANOKJGCCGAO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1853E700)
#define ANOKJGCCGAO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1853FF70)
#define ANOKJGCCGAO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1853E780)
#define ANOKJGCCGAO_PJFOBIAMCEN_OFFSET UNITYSDK_OFFSET(0x18540980)
#define ANOKJGCCGAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18540940)
#define ANOKJGCCGAO__CTOR_OFFSET UNITYSDK_OFFSET(0x18540930)

inline static constexpr unsigned int ANOKJGCCGAO_TypeDefinitionIndex = 89088;

class ANOKJGCCGAO : public ::System::Object
{
public:
	static ::HNPECBKAPMG** StaticGet_AOFIMHMNCIK()
	{
		return (::HNPECBKAPMG**)Il2CppClass::FromTypeDefinitionIndex(ANOKJGCCGAO_TypeDefinitionIndex)->GetStaticField(0x36C00);
	}
	::BOHMJANLLMM* IHHNBPBIKFK; // 0x10
	::FLDPBAPLICI* _FLIFPDKOOJJ_k__BackingField; // 0x18
	::ALEOIKCEKEI* OLKGMGMPCJG; // 0x20
	::MoleMole::Config::ConfigGadgetMetaData* IFFKAAKIEEF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* GNPLJIMBICN; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* KGHCPIHKMND; // 0x38
	::System::Int32 BABHCPOCBCF; // 0x40
	::KOILPFEHEBG NOOLOILNGPL; // 0x44
	::System::Int32 PHFPGHMKMJJ; // 0x48
	::UnityEngine::Vector3 GMCNMBINDOM; // 0x4C
	::UnityEngine::Vector3 ONFBIAEHOII; // 0x58
	::System::Int32 KMLPFPOCOEO; // 0x64
	::System::Int32 GEHABEKNGBI; // 0x68
	::System::Int32 DPIJNIBHLNK; // 0x6C
	::MDANEEPAJKA IFCOEONGHLN; // 0x70
	::System::Int32 EGKPJJIBBJP; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKJGCCGAO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOKJGCCGAO__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::FLDPBAPLICI* PJFOBIAMCEN()
	{
		return ((::FLDPBAPLICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_PJFOBIAMCEN_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void CGLCEKGEINN(::FLDPBAPLICI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_CGLCEKGEINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AFJHHCKNCDE(::FLDPBAPLICI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_AFJHHCKNCDE_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANOKJGCCGAO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
