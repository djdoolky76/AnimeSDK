#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class GJBGAGHHABE_1;

#define DIMPFKMKBFA___C_ACCCFALPCDP_OFFSET UNITYSDK_OFFSET(0x13E509D0)
#define DIMPFKMKBFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E50980)
#define DIMPFKMKBFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E509C0)

inline static constexpr unsigned int DIMPFKMKBFA___c_TypeDefinitionIndex = 41873;

class DIMPFKMKBFA___c : public ::System::Object
{
public:
	static ::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::WorldBasicCameraData>** StaticGet___9__13_0()
	{
		return (::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(DIMPFKMKBFA___c_TypeDefinitionIndex)->GetStaticField(0x47D60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIMPFKMKBFA___c_TypeDefinitionIndex)->GetStaticField(0x47D68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMPFKMKBFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData ACCCFALPCDP(::System::Single PMNLNNGEIFM, ::GJBGAGHHABE_1<::PipelineCamera::WorldBasicCameraData>* IPMMCGDMODG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::GJBGAGHHABE_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + DIMPFKMKBFA___C_ACCCFALPCDP_OFFSET))(this, PMNLNNGEIFM, IPMMCGDMODG);
	}
};
