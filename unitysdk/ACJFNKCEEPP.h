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

#define ACJFNKCEEPP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12643490)
#define ACJFNKCEEPP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12643C90)
#define ACJFNKCEEPP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126435A0)
#define ACJFNKCEEPP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126441C0)
#define ACJFNKCEEPP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12643590)
#define ACJFNKCEEPP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12644060)
#define ACJFNKCEEPP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12643CF0)
#define ACJFNKCEEPP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12644370)
#define ACJFNKCEEPP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12643120)
#define ACJFNKCEEPP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x126433D0)
#define ACJFNKCEEPP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12643620)
#define ACJFNKCEEPP__CTOR_OFFSET UNITYSDK_OFFSET(0x12643FD0)

inline static constexpr unsigned int ACJFNKCEEPP_TypeDefinitionIndex = 82062;

class ACJFNKCEEPP : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* ONGKNJDGBLJ; // 0x30
	::GPIOLGMOBLJ* FDFEDLFEIIN; // 0x38
	::GPIOLGMOBLJ* JOGJHDBEDPN; // 0x40
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MFKJLJJGHJF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFNKCEEPP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ACJFNKCEEPP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ACJFNKCEEPP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ACJFNKCEEPP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ACJFNKCEEPP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFNKCEEPP_JFLMLBMNFFK_OFFSET))(this);
	}
};
