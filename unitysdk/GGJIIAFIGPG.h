#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class BIAGAMOMOHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGJIIAFIGPG_CGLOBPLFBMP_OFFSET UNITYSDK_OFFSET(0x179ECCF0)
#define GGJIIAFIGPG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x179ECAF0)
#define GGJIIAFIGPG_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x179ECA50)
#define GGJIIAFIGPG_PLKENINMBFC_OFFSET UNITYSDK_OFFSET(0x179ECC20)
#define GGJIIAFIGPG_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x179ECA60)
#define GGJIIAFIGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x179ECA70)

inline static constexpr unsigned int GGJIIAFIGPG_TypeDefinitionIndex = 60145;

class GGJIIAFIGPG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BIAGAMOMOHO*>* IOHDANAAIBE; // 0x10
	::System::Boolean EFKDEFHFDOK; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 FBOLAIHCENH; // 0x1C

	::System::Void _ctor(::System::Collections::Generic::List_1<::BIAGAMOMOHO*>* AADNLDCJCAI, ::System::Boolean COMHKJLKMEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BIAGAMOMOHO*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJIIAFIGPG__CTOR_OFFSET))(this, AADNLDCJCAI, COMHKJLKMEL);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::System::Action* KLHOIOCCHMI, ::System::Action* LOJFLJJAKFJ, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_GLEJMKLOMBP_OFFSET))(this, KLHOIOCCHMI, LOJFLJJAKFJ, OLBAKFLBNIG);
	}

	::System::Void PLKENINMBFC(::System::Action* LOJFLJJAKFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_PLKENINMBFC_OFFSET))(this, LOJFLJJAKFJ);
	}

	::Cysharp::Threading::Tasks::UniTask CGLOBPLFBMP(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_CGLOBPLFBMP_OFFSET))(this, BPGCPDLINPK);
	}
};
