#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InputEnableInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBJMLHBBCLG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12BA3DC0)
#define DBJMLHBBCLG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12BA3A90)
#define DBJMLHBBCLG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12BA3ED0)
#define DBJMLHBBCLG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12BA4410)
#define DBJMLHBBCLG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12BA3EC0)
#define DBJMLHBBCLG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12BA42B0)
#define DBJMLHBBCLG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12BA3AF0)
#define DBJMLHBBCLG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12BA45C0)
#define DBJMLHBBCLG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12BA3930)
#define DBJMLHBBCLG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12BA3D50)
#define DBJMLHBBCLG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12BA3F50)
#define DBJMLHBBCLG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA42A0)

inline static constexpr unsigned int DBJMLHBBCLG_TypeDefinitionIndex = 84356;

class DBJMLHBBCLG : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Config::InputEnableInfo*>* DFHHBDLDECL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJMLHBBCLG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DBJMLHBBCLG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DBJMLHBBCLG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::DBJMLHBBCLG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DBJMLHBBCLG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DBJMLHBBCLG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
