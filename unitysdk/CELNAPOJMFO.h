#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsFilter.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T> class Action_1; }

#define CELNAPOJMFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11539C70)
#define CELNAPOJMFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11539BA0)

inline static constexpr unsigned int CELNAPOJMFO_TypeDefinitionIndex = 84359;

class CELNAPOJMFO : public ::Nap::NapECS::EcsFilter
{
public:
	::System::Void _ctor(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::Boolean EHDOPHKPMHA)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + CELNAPOJMFO__CTOR_OFFSET))(this, GEEHGDABNJF, EHDOPHKPMHA);
	}

	::System::Void _ctor_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::Action_1<::Nap::NapECS::EcsEntity*>* BEHPGDFCGMH, ::System::Action_1<::Nap::NapECS::EcsEntity*>* IEEGJHKOLAO, ::System::Boolean EHDOPHKPMHA)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CELNAPOJMFO__CTOR_1_OFFSET))(this, GEEHGDABNJF, BEHPGDFCGMH, IEEGJHKOLAO, EHDOPHKPMHA);
	}
};
