#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define EJMGGIGAPNA___C_HJHFHMGPGIG_OFFSET UNITYSDK_OFFSET(0x11A8F9E0)
#define EJMGGIGAPNA___C_LBGEKFPCBLG_OFFSET UNITYSDK_OFFSET(0x11A8F9F0)
#define EJMGGIGAPNA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A8F990)
#define EJMGGIGAPNA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8F9D0)

inline static constexpr unsigned int EJMGGIGAPNA___c_TypeDefinitionIndex = 40696;

class EJMGGIGAPNA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJMGGIGAPNA___c_TypeDefinitionIndex)->GetStaticField(0x47EB0);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__16_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(EJMGGIGAPNA___c_TypeDefinitionIndex)->GetStaticField(0x47EB8);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__16_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(EJMGGIGAPNA___c_TypeDefinitionIndex)->GetStaticField(0x47EC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJMGGIGAPNA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA___C__CTOR_OFFSET))(this);
	}

	::System::Void HJHFHMGPGIG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA___C_HJHFHMGPGIG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LBGEKFPCBLG(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA___C_LBGEKFPCBLG_OFFSET))(this, PIIPCLCCOIG);
	}
};
