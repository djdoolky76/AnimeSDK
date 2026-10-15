#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJIMDIILCBF.h"
#include "unitysdk/System/Object.h"
class BEFIOALJIMP;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEHBFNOEMIF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xE50BE00)
#define DEHBFNOEMIF_CTOR_OFFSET UNITYSDK_OFFSET(0xE50BD40)
#define DEHBFNOEMIF_HGLDMFDHEBF_OFFSET UNITYSDK_OFFSET(0xE50BF50)

inline static constexpr unsigned int DEHBFNOEMIF_TypeDefinitionIndex = 62745;

	class DEHBFNOEMIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::IJIMDIILCBF, ::RPG::AvatarSystem::AvatarSkin*>* MIPFIEOKNAM; // 0x10
		::BEFIOALJIMP* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::BEFIOALJIMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFIOALJIMP*))((::PBYTE)hIl2Cpp + DEHBFNOEMIF_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkin* ACMKLFOMPFC(::IJIMDIILCBF a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + DEHBFNOEMIF_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarSkin* HGLDMFDHEBF(::IJIMDIILCBF a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::IJIMDIILCBF))((::PBYTE)hIl2Cpp + DEHBFNOEMIF_HGLDMFDHEBF_OFFSET))(this, a1);
		}

	};
