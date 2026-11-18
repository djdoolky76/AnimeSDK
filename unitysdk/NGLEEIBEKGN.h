#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNMJAFINNPF.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HDJJJGCHLEE;
class JGPMFAHJCIO;
class MHFGFMELFLB;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NGLEEIBEKGN_BKOOLFKMMAI_OFFSET UNITYSDK_OFFSET(0xE750EC0)
#define NGLEEIBEKGN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE7506B0)
#define NGLEEIBEKGN_EJMCPNJMAPF_OFFSET UNITYSDK_OFFSET(0xE750450)
#define NGLEEIBEKGN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE750BA0)
#define NGLEEIBEKGN_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE7507C0)
#define NGLEEIBEKGN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE751100)
#define NGLEEIBEKGN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE7507B0)
#define NGLEEIBEKGN_GIMLBFBFLGE_OFFSET UNITYSDK_OFFSET(0xE750ED0)
#define NGLEEIBEKGN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE750FA0)
#define NGLEEIBEKGN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE750C00)
#define NGLEEIBEKGN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE750660)
#define NGLEEIBEKGN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE750840)
#define NGLEEIBEKGN__CTOR_OFFSET UNITYSDK_OFFSET(0xE750E30)

inline static constexpr unsigned int NGLEEIBEKGN_TypeDefinitionIndex = 52055;

class NGLEEIBEKGN : public ::DNMJAFINNPF
{
public:
	::FOBNALGHPPD_1<::System::Single> JGNCDFNAIMI; // 0x30
	::System::Byte _padding0[0x18];
	::HJNGDKHLLEG IPCOIFBOEPA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEEIBEKGN__CTOR_OFFSET))(this);
	}

	::System::Void EJMCPNJMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_EJMCPNJMAPF_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void BKOOLFKMMAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_BKOOLFKMMAI_OFFSET))(this);
	}

	static ::System::Void GIMLBFBFLGE(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::JGPMFAHJCIO* GJBHEJGENMI, ::System::Single JFLHDBCKGGF)
	{
		return ((::System::Void(*)(::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::JGPMFAHJCIO*, ::System::Single))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_GIMLBFBFLGE_OFFSET))(GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JFLHDBCKGGF);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGLEEIBEKGN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NGLEEIBEKGN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NGLEEIBEKGN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NGLEEIBEKGN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NGLEEIBEKGN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
