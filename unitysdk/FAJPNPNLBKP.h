#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FAJPNPNLBKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15682940)
#define FAJPNPNLBKP__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0x15682950)

	class FAJPNPNLBKP : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* IPPKBDCLJHC; // 0x18
		::System::Void _ctor(::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FAJPNPNLBKP_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + FAJPNPNLBKP__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

	};
