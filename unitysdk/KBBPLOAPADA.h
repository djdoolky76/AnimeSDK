#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple.h"
class GELIALJDFBL;
namespace RPG::GameCore { class PlayVideo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KBBPLOAPADA_AJIAPHAPPOP_OFFSET UNITYSDK_OFFSET(0xB2EE4A0)
#define KBBPLOAPADA_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0xB2EDE40)
#define KBBPLOAPADA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2EDBE0)
#define KBBPLOAPADA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2EDBF0)
#define KBBPLOAPADA_EJFFNDADLJA_OFFSET UNITYSDK_OFFSET(0xB2EEB90)
#define KBBPLOAPADA_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xB2EDC40)
#define KBBPLOAPADA_FOJPBBELHLF_OFFSET UNITYSDK_OFFSET(0xB2EE820)
#define KBBPLOAPADA_FPJFLFOFOHD_OFFSET UNITYSDK_OFFSET(0xB2EEC50)
#define KBBPLOAPADA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB2EE430)
#define KBBPLOAPADA_JCGHNHOIJAJ_OFFSET UNITYSDK_OFFSET(0xB2EE1B0)
#define KBBPLOAPADA_JHKADPEOJBE_OFFSET UNITYSDK_OFFSET(0xB2EE6D0)
#define KBBPLOAPADA_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xB2EE080)
#define KBBPLOAPADA_MBGMBAKJEBG_OFFSET UNITYSDK_OFFSET(0xB2EE8E0)
#define KBBPLOAPADA_NFPGMGONMJE_OFFSET UNITYSDK_OFFSET(0xB2EEF70)
#define KBBPLOAPADA_OMBKNCOOFIG_OFFSET UNITYSDK_OFFSET(0xB2EED50)
#define KBBPLOAPADA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2EE570)
#define KBBPLOAPADA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB2EE440)
#define KBBPLOAPADA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2EDDC0)
#define KBBPLOAPADA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2EE380)
#define KBBPLOAPADA_PMFCLMMLAHP_OFFSET UNITYSDK_OFFSET(0xB2EE610)
#define KBBPLOAPADA_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB2EDD70)
#define KBBPLOAPADA_TICK_OFFSET UNITYSDK_OFFSET(0xB2EE3D0)

inline static constexpr unsigned int KBBPLOAPADA_TypeDefinitionIndex = 53106;

	class KBBPLOAPADA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayVideo* OFKGLJOAMLD; // 0x20
		::GELIALJDFBL* CJHJNLGOJLA; // 0x28
		::System::Boolean OGFMMIEJJHF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVideo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVideo*))((::PBYTE)hIl2Cpp + KBBPLOAPADA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KBBPLOAPADA_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBBPLOAPADA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBBPLOAPADA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void PMFCLMMLAHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBBPLOAPADA_PMFCLMMLAHP_OFFSET))(this, a1);
		}

		::System::Void FOJPBBELHLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBBPLOAPADA_FOJPBBELHLF_OFFSET))(this, a1);
		}

		::System::Void EJFFNDADLJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBBPLOAPADA_EJFFNDADLJA_OFFSET))(this, a1);
		}

		::System::Boolean CHDCCCEPKJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_CHDCCCEPKJN_OFFSET))(this);
		}

		::System::ValueTuple OMBKNCOOFIG()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_OMBKNCOOFIG_OFFSET))(this);
		}

		::System::Void JCGHNHOIJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_JCGHNHOIJAJ_OFFSET))(this);
		}

		::System::Void JHKADPEOJBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBBPLOAPADA_JHKADPEOJBE_OFFSET))(this, a1);
		}

		::System::Void MBGMBAKJEBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBBPLOAPADA_MBGMBAKJEBG_OFFSET))(this, a1);
		}

		::System::Void FPJFLFOFOHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBBPLOAPADA_FPJFLFOFOHD_OFFSET))(this, a1);
		}

		::System::Void AJIAPHAPPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_AJIAPHAPPOP_OFFSET))(this);
		}

		::System::Void NFPGMGONMJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBPLOAPADA_NFPGMGONMJE_OFFSET))(this);
		}

	};
