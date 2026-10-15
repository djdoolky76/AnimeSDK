#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOENIOPIGHK;
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMDLIGBIKAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC30F480)
#define PMDLIGBIKAA_DCFAKMPMNFJ_OFFSET UNITYSDK_OFFSET(0xC30F5E0)

inline static constexpr unsigned int PMDLIGBIKAA_TypeDefinitionIndex = 65563;

	class PMDLIGBIKAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KOENIOPIGHK*>* OOPCLGFHEJF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDLIGBIKAA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* DCFAKMPMNFJ(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PMDLIGBIKAA_DCFAKMPMNFJ_OFFSET))(this, a1);
		}

	};
