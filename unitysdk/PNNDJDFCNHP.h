#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"
class IEMDNENKNDF;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PNNDJDFCNHP_CTOR_OFFSET UNITYSDK_OFFSET(0xC34FA70)
#define PNNDJDFCNHP_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0xC34FCC0)
#define PNNDJDFCNHP_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0xC34FB40)
#define PNNDJDFCNHP_OCBLLILHAPG_OFFSET UNITYSDK_OFFSET(0xC34FAE0)

inline static constexpr unsigned int PNNDJDFCNHP_TypeDefinitionIndex = 81209;

	class PNNDJDFCNHP : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BPKKKMOCFIP; // 0x10
		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + PNNDJDFCNHP_CTOR_OFFSET))(this, a1);
		}

		::IEMDNENKNDF* OCBLLILHAPG()
		{
			return ((::IEMDNENKNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNDJDFCNHP_OCBLLILHAPG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNDJDFCNHP_GET_SKINIDS_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNDJDFCNHP_GET_DRESSEDSKIN_OFFSET))(this);
		}

	};
