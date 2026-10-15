#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/System/Object.h"
class MGLBNNIPDMC;
class NNOALJAEMCG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreviewAvatarProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDICLAJIEKA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x162FB0E0)
#define BDICLAJIEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x162FB060)
#define BDICLAJIEKA_MLAJEHANLNL_OFFSET UNITYSDK_OFFSET(0x162FB510)
#define BDICLAJIEKA_NKFLPDLCLCM_OFFSET UNITYSDK_OFFSET(0x162FB310)

inline static constexpr unsigned int BDICLAJIEKA_TypeDefinitionIndex = 62697;

	class BDICLAJIEKA : public ::System::Object
	{
	public:
		::MGLBNNIPDMC* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::AHHNGJGLOKA, ::RPG::Client::PreviewAvatarProxy*>* LMDLPAPLEBK; // 0x18
		::System::Void _ctor(::MGLBNNIPDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGLBNNIPDMC*))((::PBYTE)hIl2Cpp + BDICLAJIEKA_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* ACMKLFOMPFC(::AHHNGJGLOKA a1, ::NNOALJAEMCG* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::AHHNGJGLOKA, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + BDICLAJIEKA_ACMKLFOMPFC_OFFSET))(this, a1, a2);
		}

		::System::Void NKFLPDLCLCM(::RPG::Client::PreviewAvatarProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreviewAvatarProxy*))((::PBYTE)hIl2Cpp + BDICLAJIEKA_NKFLPDLCLCM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* MLAJEHANLNL(::AHHNGJGLOKA a1, ::NNOALJAEMCG* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::AHHNGJGLOKA, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + BDICLAJIEKA_MLAJEHANLNL_OFFSET))(this, a1, a2);
		}

	};
