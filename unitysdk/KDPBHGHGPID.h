#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KDPBHGHGPID_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17B71E40)
#define KDPBHGHGPID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17B71AF0)
#define KDPBHGHGPID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17B71F50)
#define KDPBHGHGPID_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17B72480)
#define KDPBHGHGPID_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17B71F40)
#define KDPBHGHGPID_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17B72630)
#define KDPBHGHGPID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17B71B50)
#define KDPBHGHGPID_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17B72790)
#define KDPBHGHGPID_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17B71880)
#define KDPBHGHGPID_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17B71DD0)
#define KDPBHGHGPID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17B71FD0)
#define KDPBHGHGPID__CTOR_OFFSET UNITYSDK_OFFSET(0x17B72470)

inline static constexpr unsigned int KDPBHGHGPID_TypeDefinitionIndex = 44888;

class KDPBHGHGPID : public ::LNODBDPJGFL
{
public:
	::System::String* BODGHKHEOJF; // 0x50
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x58
	::UnityEngine::Vector3 GPIOJBLKFAJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPBHGHGPID__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDPBHGHGPID_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDPBHGHGPID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KDPBHGHGPID_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPBHGHGPID_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPBHGHGPID_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDPBHGHGPID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KDPBHGHGPID* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KDPBHGHGPID*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDPBHGHGPID_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KDPBHGHGPID* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KDPBHGHGPID*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDPBHGHGPID_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDPBHGHGPID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDPBHGHGPID_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KDPBHGHGPID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
