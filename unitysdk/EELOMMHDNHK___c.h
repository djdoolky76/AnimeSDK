#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class DIAEPBNFKBO;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }

#define EELOMMHDNHK___C_IDOGKBCLIBP_OFFSET UNITYSDK_OFFSET(0x14149AC0)
#define EELOMMHDNHK___C_PPKGNKOAINF_OFFSET UNITYSDK_OFFSET(0x14149A30)
#define EELOMMHDNHK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141499E0)
#define EELOMMHDNHK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14149A20)

inline static constexpr unsigned int EELOMMHDNHK___c_TypeDefinitionIndex = 48784;

class EELOMMHDNHK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK___c_TypeDefinitionIndex)->GetStaticField(0x374F0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__36_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK___c_TypeDefinitionIndex)->GetStaticField(0x374F8);
	}
	static ::System::Func_3<::DIAEPBNFKBO*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>** StaticGet___9__24_0()
	{
		return (::System::Func_3<::DIAEPBNFKBO*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(EELOMMHDNHK___c_TypeDefinitionIndex)->GetStaticField(0x37500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EELOMMHDNHK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PPKGNKOAINF()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK___C_PPKGNKOAINF_OFFSET))(this);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* IDOGKBCLIBP(::DIAEPBNFKBO* GBELIHABEDH, ::System::String* DGBFIPIONCF)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::DIAEPBNFKBO*, ::System::String*))((::PBYTE)hIl2Cpp + EELOMMHDNHK___C_IDOGKBCLIBP_OFFSET))(this, GBELIHABEDH, DGBFIPIONCF);
	}
};
