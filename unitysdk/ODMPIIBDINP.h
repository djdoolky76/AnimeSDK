#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABHCBHAGJOE;
class BNEPNMHDHFL;
class FKNIEPCILLG;
class MLPCBKCMEKJ;
class OGEFFFMBIEF;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODMPIIBDINP_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x13A50050)
#define ODMPIIBDINP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A4F810)
#define ODMPIIBDINP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A4E530)
#define ODMPIIBDINP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13A4F870)
#define ODMPIIBDINP_JIHLBLOFGHI_OFFSET UNITYSDK_OFFSET(0x13A501B0)
#define ODMPIIBDINP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13A4E5B0)
#define ODMPIIBDINP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A50040)

inline static constexpr unsigned int ODMPIIBDINP_TypeDefinitionIndex = 51741;

class ODMPIIBDINP : public ::System::Object
{
public:
	::System::String* HOECNGAGGLI; // 0x10
	::System::String* PNCKKFGDGDE; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* EHPJKJCJIDE; // 0x20
	::System::Collections::Generic::List_1<::OGEFFFMBIEF*>* OCHLOFDDPLD; // 0x28
	::ABHCBHAGJOE* MKKHDLONLGN; // 0x30
	::System::String* EHAAACDLINO; // 0x38
	::System::Collections::Generic::List_1<::MLPCBKCMEKJ*>* FGILPFMKNFF; // 0x40
	::System::Collections::Generic::List_1<::BNEPNMHDHFL*>* DCGIMCFAOEB; // 0x48
	::System::Int32 NNMMMNHFHKF; // 0x50
	::System::Int32 POBLGHCEIPG; // 0x54
	::System::Int32 ICDNAALAKNA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMPIIBDINP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODMPIIBDINP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMPIIBDINP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ODMPIIBDINP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + ODMPIIBDINP_APMCKICIGDA_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean JIHLBLOFGHI(::System::Int32 MODAECOCCBC, ::BNEPNMHDHFL*& PHEAMJHPHKN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNEPNMHDHFL*&))((::PBYTE)hIl2Cpp + ODMPIIBDINP_JIHLBLOFGHI_OFFSET))(this, MODAECOCCBC, PHEAMJHPHKN);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMPIIBDINP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
