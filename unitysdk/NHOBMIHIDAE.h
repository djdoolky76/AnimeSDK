#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHOBMIHIDAE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHOBMIHIDAE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBD4470)
#define NHOBMIHIDAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD44E0)
#define NHOBMIHIDAE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBBD44F0)

inline static constexpr unsigned int NHOBMIHIDAE_TypeDefinitionIndex = 62557;

	class NHOBMIHIDAE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOBMIHIDAE_CTOR_OFFSET))(this);
		}

		static ::NHOBMIHIDAE* BPLPBPMEODA()
		{
			return ((::NHOBMIHIDAE*(*)())((::PBYTE)hIl2Cpp + NHOBMIHIDAE_BPLPBPMEODA_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + NHOBMIHIDAE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
