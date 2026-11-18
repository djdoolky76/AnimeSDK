#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKECBJFMFI.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NLBBOHCPGNB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16B857B0)
#define NLBBOHCPGNB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B855E0)
#define NLBBOHCPGNB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B858C0)
#define NLBBOHCPGNB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16B85BB0)
#define NLBBOHCPGNB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16B858B0)
#define NLBBOHCPGNB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16B85D60)
#define NLBBOHCPGNB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16B85640)
#define NLBBOHCPGNB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16B857A0)
#define NLBBOHCPGNB_OIIKHLLPENK_OFFSET UNITYSDK_OFFSET(0x16B85AF0)
#define NLBBOHCPGNB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16B85940)
#define NLBBOHCPGNB_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0x16B85560)
#define NLBBOHCPGNB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B85AE0)

inline static constexpr unsigned int NLBBOHCPGNB_TypeDefinitionIndex = 39043;

class NLBBOHCPGNB : public ::AJKECBJFMFI
{
public:
	::System::Single GJLKCLKBNME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBBOHCPGNB__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Single OIIKHLLPENK(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_OIIKHLLPENK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NLBBOHCPGNB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NLBBOHCPGNB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NLBBOHCPGNB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NLBBOHCPGNB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NLBBOHCPGNB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
