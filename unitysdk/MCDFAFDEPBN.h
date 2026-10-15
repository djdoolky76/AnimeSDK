#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDFAFDEPBN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCDFAFDEPBN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB874740)
#define MCDFAFDEPBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB874780)
#define MCDFAFDEPBN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB874790)

inline static constexpr unsigned int MCDFAFDEPBN_TypeDefinitionIndex = 62556;

	class MCDFAFDEPBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDFAFDEPBN_CTOR_OFFSET))(this);
		}

		static ::MCDFAFDEPBN* BPLPBPMEODA()
		{
			return ((::MCDFAFDEPBN*(*)())((::PBYTE)hIl2Cpp + MCDFAFDEPBN_BPLPBPMEODA_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + MCDFAFDEPBN_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
