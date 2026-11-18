#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNLHDFIFCGH.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ABEFFIJCNJD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16D5B590)
#define ABEFFIJCNJD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D5B950)
#define ABEFFIJCNJD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16D5B700)
#define ABEFFIJCNJD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16D5BFC0)
#define ABEFFIJCNJD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16D5B690)
#define ABEFFIJCNJD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16D5BE60)
#define ABEFFIJCNJD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16D5B9B0)
#define ABEFFIJCNJD_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x16D5B6A0)
#define ABEFFIJCNJD_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x16D5BB40)
#define ABEFFIJCNJD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16D5B540)
#define ABEFFIJCNJD_NLPIGGMFNGF_OFFSET UNITYSDK_OFFSET(0x16D5BDD0)
#define ABEFFIJCNJD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16D5B780)
#define ABEFFIJCNJD__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5BDC0)

inline static constexpr unsigned int ABEFFIJCNJD_TypeDefinitionIndex = 71341;

class ABEFFIJCNJD : public ::NNLHDFIFCGH
{
public:
	::System::String* ABAIIIABKLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFFIJCNJD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NNLHDFIFCGH* DGNAAPGKIPL()
	{
		return ((::NNLHDFIFCGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void KNDMMHPDPIB(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_KNDMMHPDPIB_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NLPIGGMFNGF(::MoleMole::HollowChessboard::HollowEntity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_NLPIGGMFNGF_OFFSET))(this, MIALFKCCCPI);
	}

	static ::ABEFFIJCNJD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ABEFFIJCNJD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ABEFFIJCNJD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ABEFFIJCNJD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABEFFIJCNJD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
