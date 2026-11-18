#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { template <typename T> class Action_1; }

#define NNLHDFIFCGH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFD0FC60)
#define NNLHDFIFCGH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFD0FDF0)
#define NNLHDFIFCGH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFD0FD80)
#define NNLHDFIFCGH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFD0FE70)
#define NNLHDFIFCGH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFD0FD60)
#define NNLHDFIFCGH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFD0FFC0)
#define NNLHDFIFCGH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFD0FE00)
#define NNLHDFIFCGH_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0xFD0FD70)
#define NNLHDFIFCGH_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0xFD0FE10)
#define NNLHDFIFCGH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFD0FC50)
#define NNLHDFIFCGH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFD0FDE0)
#define NNLHDFIFCGH__CTOR_OFFSET UNITYSDK_OFFSET(0xFD0FE60)

inline static constexpr unsigned int NNLHDFIFCGH_TypeDefinitionIndex = 58228;

class NNLHDFIFCGH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHDFIFCGH__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NNLHDFIFCGH* DGNAAPGKIPL()
	{
		return ((::NNLHDFIFCGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void KNDMMHPDPIB(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_KNDMMHPDPIB_OFFSET))(this, KECKGDFIALJ);
	}

	static ::NNLHDFIFCGH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NNLHDFIFCGH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NNLHDFIFCGH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NNLHDFIFCGH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NNLHDFIFCGH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
