#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace System { template <typename T> class Action_1; }

#define BNFFAMKLBAI___C_AKDNIGBKNOI_OFFSET UNITYSDK_OFFSET(0x18581DF0)
#define BNFFAMKLBAI___C_LMKPJKNBOHH_OFFSET UNITYSDK_OFFSET(0x18581E00)
#define BNFFAMKLBAI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18581DA0)
#define BNFFAMKLBAI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18581DE0)

inline static constexpr unsigned int BNFFAMKLBAI___c_TypeDefinitionIndex = 63486;

class BNFFAMKLBAI___c : public ::System::Object
{
public:
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_5()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(BNFFAMKLBAI___c_TypeDefinitionIndex)->GetStaticField(0x36F80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BNFFAMKLBAI___c_TypeDefinitionIndex)->GetStaticField(0x36F88);
	}
	static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__13_3()
	{
		return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(BNFFAMKLBAI___c_TypeDefinitionIndex)->GetStaticField(0x36F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFFAMKLBAI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAMKLBAI___C__CTOR_OFFSET))(this);
	}

	::System::Void AKDNIGBKNOI(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI___C_AKDNIGBKNOI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LMKPJKNBOHH(::PipelineCamera::ICameraDataBlender* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlender*))((::PBYTE)hIl2Cpp + BNFFAMKLBAI___C_LMKPJKNBOHH_OFFSET))(this, PIIPCLCCOIG);
	}
};
