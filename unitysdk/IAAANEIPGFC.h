#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEONGANBHM;
namespace RPG::Client { class AvatarOutfit; }

#define IAAANEIPGFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DE8CA0)
#define IAAANEIPGFC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE8D00)

inline static constexpr unsigned int IAAANEIPGFC_TypeDefinitionIndex = 62614;

	class IAAANEIPGFC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAANEIPGFC_CTOR_OFFSET))(this);
		}

		::HFEONGANBHM* BPLPBPMEODA(::RPG::Client::AvatarOutfit* a1)
		{
			return ((::HFEONGANBHM*(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + IAAANEIPGFC_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
