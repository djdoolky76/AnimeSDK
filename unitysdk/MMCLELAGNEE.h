#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMCLELAGNEE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMCLELAGNEE_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xB9BA620)
#define MMCLELAGNEE_AKKOMIOOBDI_OFFSET UNITYSDK_OFFSET(0xB9BA440)
#define MMCLELAGNEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BA820)
#define MMCLELAGNEE_GCHFKGJOFJO_OFFSET UNITYSDK_OFFSET(0xB9BA560)
#define MMCLELAGNEE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB9BA3D0)

inline static constexpr unsigned int MMCLELAGNEE_TypeDefinitionIndex = 62799;

	class MMCLELAGNEE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarComparer*>* AAMPDBBPEBD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCLELAGNEE_CTOR_OFFSET))(this);
		}

		::MMCLELAGNEE* PJPFIHFAHGO()
		{
			return ((::MMCLELAGNEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCLELAGNEE_PJPFIHFAHGO_OFFSET))(this);
		}

		::MMCLELAGNEE* AKKOMIOOBDI(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Boolean a2)
		{
			return ((::MMCLELAGNEE*(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMCLELAGNEE_AKKOMIOOBDI_OFFSET))(this, a1, a2);
		}

		::MMCLELAGNEE* GCHFKGJOFJO(::RPG::Client::IAvatarComparer* a1)
		{
			return ((::MMCLELAGNEE*(*)(::PVOID, ::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + MMCLELAGNEE_GCHFKGJOFJO_OFFSET))(this, a1);
		}

		::RPG::Client::IAvatarComparer* AKJABINEGDJ()
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCLELAGNEE_AKJABINEGDJ_OFFSET))(this);
		}

	};
