#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DNMJAFINNPF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x148BB930)
#define DNMJAFINNPF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148BBAF0)
#define DNMJAFINNPF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148BBA40)
#define DNMJAFINNPF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x148BBC70)
#define DNMJAFINNPF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x148BBA30)
#define DNMJAFINNPF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x148BBDF0)
#define DNMJAFINNPF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x148BBB80)
#define DNMJAFINNPF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x148BB8E0)
#define DNMJAFINNPF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x148BBAC0)
#define DNMJAFINNPF__CTOR_OFFSET UNITYSDK_OFFSET(0x148BBBE0)

inline static constexpr unsigned int DNMJAFINNPF_TypeDefinitionIndex = 48701;

class DNMJAFINNPF : public ::HDJJJGCHLEE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMJAFINNPF__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DNMJAFINNPF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMJAFINNPF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMJAFINNPF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNMJAFINNPF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNMJAFINNPF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DNMJAFINNPF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DNMJAFINNPF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNMJAFINNPF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DNMJAFINNPF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNMJAFINNPF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DNMJAFINNPF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DNMJAFINNPF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNMJAFINNPF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
