#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHNELMAONI;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPHNELMAONI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155C9430)
#define EPHNELMAONI_CTOR_OFFSET UNITYSDK_OFFSET(0x155C94A0)
#define EPHNELMAONI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x155C94B0)

inline static constexpr unsigned int EPHNELMAONI_TypeDefinitionIndex = 62555;

	class EPHNELMAONI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNELMAONI_CTOR_OFFSET))(this);
		}

		static ::EPHNELMAONI* BPLPBPMEODA()
		{
			return ((::EPHNELMAONI*(*)())((::PBYTE)hIl2Cpp + EPHNELMAONI_BPLPBPMEODA_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + EPHNELMAONI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
