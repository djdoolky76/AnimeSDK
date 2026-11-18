#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHBBMEGDBIO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CMLEOMMLODC;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DCOIIPKHKCD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12BABBB0)
#define DCOIIPKHKCD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12BABD70)
#define DCOIIPKHKCD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12BABCC0)
#define DCOIIPKHKCD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12BABE70)
#define DCOIIPKHKCD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12BABCB0)
#define DCOIIPKHKCD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12BAC050)
#define DCOIIPKHKCD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12BABE00)
#define DCOIIPKHKCD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12BABB60)
#define DCOIIPKHKCD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12BABD40)
#define DCOIIPKHKCD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BABE60)

inline static constexpr unsigned int DCOIIPKHKCD_TypeDefinitionIndex = 66270;

class DCOIIPKHKCD : public ::EHBBMEGDBIO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOIIPKHKCD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMLEOMMLODC* DGNAAPGKIPL()
	{
		return ((::CMLEOMMLODC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DCOIIPKHKCD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DCOIIPKHKCD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DCOIIPKHKCD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DCOIIPKHKCD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DCOIIPKHKCD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
