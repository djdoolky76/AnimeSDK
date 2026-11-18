#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class FOJONDIPFFL;
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOJONDIPFFL_PIFKHDBEMGK_ABECDMBIMDD_OFFSET UNITYSDK_OFFSET(0x156D1D00)
#define FOJONDIPFFL_PIFKHDBEMGK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x156D1CC0)
#define FOJONDIPFFL_PIFKHDBEMGK_DCDCDDLLBJC_OFFSET UNITYSDK_OFFSET(0x156D1D40)
#define FOJONDIPFFL_PIFKHDBEMGK_EKENIANMBNP_OFFSET UNITYSDK_OFFSET(0x156D1CE0)
#define FOJONDIPFFL_PIFKHDBEMGK_MEJJDHEFCLI_OFFSET UNITYSDK_OFFSET(0x156D1D60)
#define FOJONDIPFFL_PIFKHDBEMGK_OHMOOHCKKPH_OFFSET UNITYSDK_OFFSET(0x156D1CA0)
#define FOJONDIPFFL_PIFKHDBEMGK_PGCIBMIDOLJ_OFFSET UNITYSDK_OFFSET(0x156D1D20)
#define FOJONDIPFFL_PIFKHDBEMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x156D1C90)

inline static constexpr unsigned int FOJONDIPFFL_PIFKHDBEMGK_TypeDefinitionIndex = 55435;

class FOJONDIPFFL_PIFKHDBEMGK : public ::System::Object
{
public:
	::FOJONDIPFFL* FEFFFPGCIIO; // 0x10

	::System::Void _ctor(::FOJONDIPFFL* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::FOJONDIPFFL*))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* OHMOOHCKKPH()
	{
		return ((::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_OHMOOHCKKPH_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::CoreDataCollection* COPIDBEMEIE()
	{
		return ((::PipelineCamera::CameraSequence::CoreDataCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* EKENIANMBNP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_EKENIANMBNP_OFFSET))(this);
	}

	::PipelineCamera::CameraSequence::CoreDataBindingResolver* ABECDMBIMDD()
	{
		return ((::PipelineCamera::CameraSequence::CoreDataBindingResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_ABECDMBIMDD_OFFSET))(this);
	}

	::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* PGCIBMIDOLJ()
	{
		return ((::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_PGCIBMIDOLJ_OFFSET))(this);
	}

	::Foundation::Unreal::FName DCDCDDLLBJC()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_DCDCDDLLBJC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* MEJJDHEFCLI()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJONDIPFFL_PIFKHDBEMGK_MEJJDHEFCLI_OFFSET))(this);
	}
};
