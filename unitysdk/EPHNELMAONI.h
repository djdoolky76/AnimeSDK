#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHNELMAONI;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPHNELMAONI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16B38400)
#define EPHNELMAONI_CTOR_OFFSET UNITYSDK_OFFSET(0x16B38470)
#define EPHNELMAONI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16B38480)

inline static constexpr unsigned int EPHNELMAONI_TypeDefinitionIndex = 63968;

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
