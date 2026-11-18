#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJCJKNFPNKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JMJPMKGMHNE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19463C40)
#define JMJPMKGMHNE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19463820)
#define JMJPMKGMHNE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19463D50)
#define JMJPMKGMHNE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19464800)
#define JMJPMKGMHNE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19463D40)
#define JMJPMKGMHNE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x194646A0)
#define JMJPMKGMHNE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19463880)
#define JMJPMKGMHNE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19463BA0)
#define JMJPMKGMHNE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19463DD0)
#define JMJPMKGMHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x19464630)

inline static constexpr unsigned int JMJPMKGMHNE_TypeDefinitionIndex = 68696;

class JMJPMKGMHNE : public ::EJCJKNFPNKF
{
public:
	::MoleMole::Config::DynamicFloat* MNLMIMMPFCN; // 0x10
	::MoleMole::Config::DynamicFloat* AFIKJAIPLNG; // 0x18
	::MoleMole::Config::DynamicFloat* PAABEOPOCIH; // 0x20
	::MoleMole::Config::DynamicFloat* PGGHGJFPIJO; // 0x28
	::MoleMole::Config::DynamicFloat* KAIKHPHEJGH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJPMKGMHNE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EJCJKNFPNKF* DGNAAPGKIPL()
	{
		return ((::EJCJKNFPNKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JMJPMKGMHNE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JMJPMKGMHNE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JMJPMKGMHNE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JMJPMKGMHNE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JMJPMKGMHNE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
