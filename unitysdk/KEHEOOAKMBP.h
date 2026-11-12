#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/System/Object.h"
class NOBCAKJMGPH;
namespace RPG::AvatarSystem { class AvatarPath; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KEHEOOAKMBP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBC05080)
#define KEHEOOAKMBP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC05190)
#define KEHEOOAKMBP_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBC05060)
#define KEHEOOAKMBP_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xBC05070)

inline static constexpr unsigned int KEHEOOAKMBP_TypeDefinitionIndex = 64173;

	class KEHEOOAKMBP : public ::System::Object
	{
	public:
		::NOBCAKJMGPH* _Factory_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::LMNEKOLMGEM, ::RPG::AvatarSystem::AvatarPath*>* HPHMLKJONAM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_CTOR_OFFSET))(this);
		}

		::NOBCAKJMGPH* get_Factory()
		{
			return ((::NOBCAKJMGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::NOBCAKJMGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOBCAKJMGPH*))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_SET_FACTORY_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarPath* ACMKLFOMPFC(::LMNEKOLMGEM a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + KEHEOOAKMBP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
