#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class NNOALJAEMCG;
class NOIACLKKLBJ;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IDACDDHLPKI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5A130)
#define IDACDDHLPKI_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x15E5A1F0)
#define IDACDDHLPKI_GET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0x15E5A110)
#define IDACDDHLPKI_GET_SKINIDS_OFFSET UNITYSDK_OFFSET(0x15E5A100)
#define IDACDDHLPKI_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x15E5A140)
#define IDACDDHLPKI_SET_DRESSEDSKIN_OFFSET UNITYSDK_OFFSET(0x15E5A120)

inline static constexpr unsigned int IDACDDHLPKI_TypeDefinitionIndex = 51945;

	class IDACDDHLPKI : public ::System::Object
	{
	public:
		::NOIACLKKLBJ* ONAJFBCPFGO; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* _SkinIDs_k__BackingField; // 0x18
		::RPG::AvatarSystem::AvatarSkin* _DressedSkin_k__BackingField; // 0x20
		::APCGKBOPGJL ODMGLBEOBDP; // 0x28
		::System::Void _ctor(::APCGKBOPGJL a1, ::NOIACLKKLBJ* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::NOIACLKKLBJ*, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + IDACDDHLPKI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* get_SkinIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDACDDHLPKI_GET_SKINIDS_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarSkin* get_DressedSkin()
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDACDDHLPKI_GET_DRESSEDSKIN_OFFSET))(this);
		}

		::System::Void set_DressedSkin(::RPG::AvatarSystem::AvatarSkin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + IDACDDHLPKI_SET_DRESSEDSKIN_OFFSET))(this, a1);
		}

		::System::Void ImportProfile(::NNOALJAEMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + IDACDDHLPKI_IMPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + IDACDDHLPKI_EXPORTPROFILE_OFFSET))(this, a1);
		}

	};
