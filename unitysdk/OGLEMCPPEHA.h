#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OGLEMCPPEHA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11B2ADC0)
#define OGLEMCPPEHA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11B2B1B0)
#define OGLEMCPPEHA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11B2AED0)
#define OGLEMCPPEHA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11B2B4B0)
#define OGLEMCPPEHA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11B2AEC0)
#define OGLEMCPPEHA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11B2B6F0)
#define OGLEMCPPEHA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11B2B210)
#define OGLEMCPPEHA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11B2B660)
#define OGLEMCPPEHA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11B2AAA0)
#define OGLEMCPPEHA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11B2AD30)
#define OGLEMCPPEHA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11B2AF50)
#define OGLEMCPPEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2B420)

inline static constexpr unsigned int OGLEMCPPEHA_TypeDefinitionIndex = 75854;

class OGLEMCPPEHA : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLEMCPPEHA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGLEMCPPEHA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OGLEMCPPEHA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGLEMCPPEHA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OGLEMCPPEHA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGLEMCPPEHA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
