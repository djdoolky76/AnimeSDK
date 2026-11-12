#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/RPG/AvatarSystem/AvatarGlobalBuffState.h"
#include "unitysdk/JBFAFOGGBCA.h"
class IPCGKDGGJHM;
class IPMDPMECLCP;

#define CFPOGIGOIAE_CTOR_OFFSET UNITYSDK_OFFSET(0xD60F580)
#define CFPOGIGOIAE_FPCPOBPOMHA_OFFSET UNITYSDK_OFFSET(0xD60F7E0)
#define CFPOGIGOIAE_LCOLEONJABD_OFFSET UNITYSDK_OFFSET(0xD60F5D0)
#define CFPOGIGOIAE_OGDLIGJHAON_OFFSET UNITYSDK_OFFSET(0xD60F740)

inline static constexpr unsigned int CFPOGIGOIAE_TypeDefinitionIndex = 64068;

	class CFPOGIGOIAE : public ::BHPMNMMGLHI
	{
	public:
		::IPCGKDGGJHM* EDLDCGGEPFG; // 0x20
		::System::Void _ctor(::IPCGKDGGJHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPCGKDGGJHM*))((::PBYTE)hIl2Cpp + CFPOGIGOIAE_CTOR_OFFSET))(this, a1);
		}

		::System::Void LCOLEONJABD(::JBFAFOGGBCA a1, ::RPG::AvatarSystem::AvatarGlobalBuffState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState))((::PBYTE)hIl2Cpp + CFPOGIGOIAE_LCOLEONJABD_OFFSET))(this, a1, a2);
		}

		::System::Void OGDLIGJHAON(::IPMDPMECLCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPMDPMECLCP*))((::PBYTE)hIl2Cpp + CFPOGIGOIAE_OGDLIGJHAON_OFFSET))(this, a1);
		}

		::System::Void FPCPOBPOMHA(::JBFAFOGGBCA a1, ::RPG::AvatarSystem::AvatarGlobalBuffState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState))((::PBYTE)hIl2Cpp + CFPOGIGOIAE_FPCPOBPOMHA_OFFSET))(this, a1, a2);
		}

	};
