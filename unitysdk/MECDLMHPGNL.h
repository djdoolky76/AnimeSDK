#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/OMGDBNFKEDI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MECDLMHPGNL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14DDD5F0)
#define MECDLMHPGNL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14DDE6B0)
#define MECDLMHPGNL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14DDD700)
#define MECDLMHPGNL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14DDEDE0)
#define MECDLMHPGNL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14DDD6F0)
#define MECDLMHPGNL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14DDEF90)
#define MECDLMHPGNL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14DDE710)
#define MECDLMHPGNL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14DDED50)
#define MECDLMHPGNL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14DDC740)
#define MECDLMHPGNL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14DDD530)
#define MECDLMHPGNL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14DDD780)
#define MECDLMHPGNL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDEC40)

inline static constexpr unsigned int MECDLMHPGNL_TypeDefinitionIndex = 92814;

class MECDLMHPGNL : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* GDJPFPCBCPL; // 0x30
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x38
	::FOBNALGHPPD_1<::System::Single> MJNEHHCPPIJ; // 0x40
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x60
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::String*> NBEKOLHGHPO; // 0x80
	::System::Byte _padding2[0x18];
	::System::Collections::Generic::List_1<::OMGDBNFKEDI>* MPKAKEBPNOD; // 0xA0
	::System::Single LKAENCFLBHH; // 0xA8
	::System::Boolean OHKLMIBFKAM; // 0xAC
	::System::Boolean MKGKKBBKKEM; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECDLMHPGNL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECDLMHPGNL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MECDLMHPGNL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECDLMHPGNL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECDLMHPGNL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MECDLMHPGNL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECDLMHPGNL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECDLMHPGNL_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::MECDLMHPGNL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MECDLMHPGNL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECDLMHPGNL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MECDLMHPGNL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MECDLMHPGNL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MECDLMHPGNL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MECDLMHPGNL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECDLMHPGNL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
