#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KHFGGFPIAOM_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0x13C5FE10)
#define KHFGGFPIAOM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13C5FAD0)
#define KHFGGFPIAOM_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0x13C5FA30)
#define KHFGGFPIAOM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C5FC90)
#define KHFGGFPIAOM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C5FBE0)
#define KHFGGFPIAOM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13C5FE20)
#define KHFGGFPIAOM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13C5FBD0)
#define KHFGGFPIAOM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13C5FFA0)
#define KHFGGFPIAOM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13C5FD20)
#define KHFGGFPIAOM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13C5FA80)
#define KHFGGFPIAOM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13C5FC60)
#define KHFGGFPIAOM__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5FD80)

inline static constexpr unsigned int KHFGGFPIAOM_TypeDefinitionIndex = 91883;

class KHFGGFPIAOM : public ::HDJJJGCHLEE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFGGFPIAOM__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_BKOOLFKMMAI_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KHFGGFPIAOM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KHFGGFPIAOM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KHFGGFPIAOM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KHFGGFPIAOM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHFGGFPIAOM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
