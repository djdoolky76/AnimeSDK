#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDKMIHKKOA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMDKMIHKKOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15ACA4F0)
#define GMDKMIHKKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACA530)
#define GMDKMIHKKOA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15ACA540)

	class GMDKMIHKKOA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDKMIHKKOA_CTOR_OFFSET))(this);
		}

		static ::GMDKMIHKKOA* BPLPBPMEODA()
		{
			return ((::GMDKMIHKKOA*(*)())((::PBYTE)hIl2Cpp + GMDKMIHKKOA_BPLPBPMEODA_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + GMDKMIHKKOA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
