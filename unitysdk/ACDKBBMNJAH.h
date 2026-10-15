#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }

#define ACDKBBMNJAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1181A0)
#define ACDKBBMNJAH__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0xB1181B0)

inline static constexpr unsigned int ACDKBBMNJAH_TypeDefinitionIndex = 62811;

	class ACDKBBMNJAH : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* AHFBNFMCJLI; // 0x18
		::System::Void _ctor(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + ACDKBBMNJAH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + ACDKBBMNJAH__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

	};
