#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CAKICIPJKAJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x128C22B0)
#define CAKICIPJKAJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128C31E0)
#define CAKICIPJKAJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128C23C0)
#define CAKICIPJKAJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x128C37E0)
#define CAKICIPJKAJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x128C23B0)
#define CAKICIPJKAJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x128C3990)
#define CAKICIPJKAJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x128C3240)
#define CAKICIPJKAJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x128C3750)
#define CAKICIPJKAJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x128C1A70)
#define CAKICIPJKAJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x128C21F0)
#define CAKICIPJKAJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x128C2440)
#define CAKICIPJKAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x128C36C0)

inline static constexpr unsigned int CAKICIPJKAJ_TypeDefinitionIndex = 64841;

class CAKICIPJKAJ : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JHEJOKFDKLB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HGEOFGFDNAO; // 0x50
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> IIIGNHBHGOM; // 0x70
	::System::Byte _padding2[0x18];
	::HBIBNDIOKPG* AMLPLMGCEME; // 0x90
	::FOBNALGHPPD_1<::UnityEngine::Vector3> FNFCGCKHINK; // 0x98
	::System::Byte _padding3[0x18];
	::HBIBNDIOKPG* OFKLJCFBFMA; // 0xB8
	::HBIBNDIOKPG* IHKOGDIAHHL; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKICIPJKAJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CAKICIPJKAJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CAKICIPJKAJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CAKICIPJKAJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CAKICIPJKAJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CAKICIPJKAJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
