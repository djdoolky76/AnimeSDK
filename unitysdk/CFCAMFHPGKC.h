#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CFCAMFHPGKC_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0xC9FF4C0)

inline static constexpr unsigned int CFCAMFHPGKC_TypeDefinitionIndex = 62680;

	class CFCAMFHPGKC : public ::System::Object
	{
	public:
		static ::System::Boolean DJMAKDCNPDA(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + CFCAMFHPGKC_DJMAKDCNPDA_OFFSET))(a1, a2);
		}

	};
