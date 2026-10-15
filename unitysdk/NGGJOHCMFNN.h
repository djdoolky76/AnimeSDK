#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class HCNMEKGNDNN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGGJOHCMFNN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA0470)
#define NGGJOHCMFNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9FF40)
#define NGGJOHCMFNN_ELHHEJLIOJD_OFFSET UNITYSDK_OFFSET(0xBBA0060)
#define NGGJOHCMFNN_FHOABPMIBPI_OFFSET UNITYSDK_OFFSET(0xBB9FB50)
#define NGGJOHCMFNN_IJKKABCJAOO_OFFSET UNITYSDK_OFFSET(0xBBA0100)
#define NGGJOHCMFNN_KKLHJCEJGEG_OFFSET UNITYSDK_OFFSET(0xBB9FEF0)
#define NGGJOHCMFNN_LBECMAJODAM_OFFSET UNITYSDK_OFFSET(0xBBA0270)
#define NGGJOHCMFNN_LGDLFMGDHLH_OFFSET UNITYSDK_OFFSET(0xBB9FE10)
#define NGGJOHCMFNN_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBB9FAB0)

inline static constexpr unsigned int NGGJOHCMFNN_TypeDefinitionIndex = 57177;

	class NGGJOHCMFNN : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::AvatarSystem::IAvatar* KPPPJFKOFIL; // 0x18
		::System::String* JFJFFBCEMHF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GLFFOJBPECG; // 0x28
		::HCNMEKGNDNN* JAGKEMEJMPK; // 0x30
		::System::UInt32 EIBGIMPFFPK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void LGDLFMGDHLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_LGDLFMGDHLH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_DISPOSE_OFFSET))(this);
		}

		::System::Void FHOABPMIBPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_FHOABPMIBPI_OFFSET))(this);
		}

		::System::Void ELHHEJLIOJD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_ELHHEJLIOJD_OFFSET))(this, a1);
		}

		::System::Void IJKKABCJAOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_IJKKABCJAOO_OFFSET))(this);
		}

		::System::Void KKLHJCEJGEG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_KKLHJCEJGEG_OFFSET))(this, a1);
		}

		static ::System::Void LBECMAJODAM(::RPG::GameCore::CharacterModelComponent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterModelComponent*, ::System::String*))((::PBYTE)hIl2Cpp + NGGJOHCMFNN_LBECMAJODAM_OFFSET))(a1, a2);
		}

	};
