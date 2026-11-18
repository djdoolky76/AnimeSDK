#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIENEKAJNAK.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define AOHOCBLHJGO___C_DNPPDAONBKI_OFFSET UNITYSDK_OFFSET(0x135FFB50)
#define AOHOCBLHJGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135FFB00)
#define AOHOCBLHJGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135FFB40)

inline static constexpr unsigned int AOHOCBLHJGO___c_TypeDefinitionIndex = 79198;

class AOHOCBLHJGO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AOHOCBLHJGO___c_TypeDefinitionIndex)->GetStaticField(0x42C00);
	}
	static ::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>**)Il2CppClass::FromTypeDefinitionIndex(AOHOCBLHJGO___c_TypeDefinitionIndex)->GetStaticField(0x42C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOHOCBLHJGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHOCBLHJGO___C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::FinalCameraData DNPPDAONBKI(::HIENEKAJNAK AAOCANGHBDG)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::HIENEKAJNAK))((::PBYTE)hIl2Cpp + AOHOCBLHJGO___C_DNPPDAONBKI_OFFSET))(this, AAOCANGHBDG);
	}
};
