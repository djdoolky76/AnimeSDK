#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisionDisableReason.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class COKLGCPKGIE;
class EAHGHBMGCJE;
class MHEPLMICGAO;
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEEGAJPPPBG_CTOR_OFFSET UNITYSDK_OFFSET(0xE505820)
#define DEEGAJPPPBG_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xE504270)
#define DEEGAJPPPBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE505740)
#define DEEGAJPPPBG_DKOIMGEHNCF_OFFSET UNITYSDK_OFFSET(0xE5042C0)
#define DEEGAJPPPBG_FCOMCBOECID_OFFSET UNITYSDK_OFFSET(0xE504D60)
#define DEEGAJPPPBG_KCLCICKJBCH_OFFSET UNITYSDK_OFFSET(0xE504CD0)
#define DEEGAJPPPBG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xE5041B0)
#define DEEGAJPPPBG_MGHBJGAFLBI_OFFSET UNITYSDK_OFFSET(0xE504F80)
#define DEEGAJPPPBG_MNDDGALECDH_OFFSET UNITYSDK_OFFSET(0xE504BF0)
#define DEEGAJPPPBG_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xE504220)
#define DEEGAJPPPBG_NOKLFHJPEAE_OFFSET UNITYSDK_OFFSET(0xE504F40)
#define DEEGAJPPPBG_OLEHHDHEJGB_OFFSET UNITYSDK_OFFSET(0xE5057D0)
#define DEEGAJPPPBG_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0xE504210)
#define DEEGAJPPPBG_PKNAKPALBEK_1_OFFSET UNITYSDK_OFFSET(0xE504AD0)
#define DEEGAJPPPBG_PKNAKPALBEK_OFFSET UNITYSDK_OFFSET(0xE5047C0)

inline static constexpr unsigned int DEEGAJPPPBG_TypeDefinitionIndex = 56978;

	class DEEGAJPPPBG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* GBCANCFOAKP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::COKLGCPKGIE*>* ILMKKLLICHA; // 0x20
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x28
		::MHEPLMICGAO* HPBCADIENBE; // 0x30
		::EAHGHBMGCJE* DJFOLMKFBLL; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* IPMGFAJEEFP; // 0x40
		::System::Int32 BIILCFAOPLN; // 0x48
		::System::Single HKEGCBCHCKJ; // 0x4C
		static ::System::Single* StaticGet_KNLOFMMHMOF()
		{
			return (::System::Single*)UnitySDK::FromName("", "DEEGAJPPPBG")->GetStaticField(0x7C60);
		}

		static ::System::Single* StaticGet_JGFCHJCLKKH()
		{
			return (::System::Single*)UnitySDK::FromName("", "DEEGAJPPPBG")->GetStaticField(0x7C64);
		}

		static ::System::Single* StaticGet_MMEGPLFBNAK()
		{
			return (::System::Single*)UnitySDK::FromName("", "DEEGAJPPPBG")->GetStaticField(0x7C68);
		}

		static ::System::Single* StaticGet_MCIJCCJMCAG()
		{
			return (::System::Single*)UnitySDK::FromName("", "DEEGAJPPPBG")->GetStaticField(0x7C6C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_PFCKLEMPAAD_OFFSET))(this);
		}

		::System::Void MOKNCFJICIC(::RPG::GameCore::CharacterVisionDisableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisionDisableReason))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_MOKNCFJICIC_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::RPG::GameCore::CharacterVisionDisableReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisionDisableReason))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_DHFBDMHFNIK_OFFSET))(this, a1);
		}

		::System::Boolean DKOIMGEHNCF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_DKOIMGEHNCF_OFFSET))(this, a1, a2);
		}

		::System::Void PKNAKPALBEK(::RPG::GameCore::VisionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_PKNAKPALBEK_OFFSET))(this, a1);
		}

		::System::Void PKNAKPALBEK_1(::RPG::GameCore::ConicalVisionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_PKNAKPALBEK_1_OFFSET))(this, a1);
		}

		::System::Void MNDDGALECDH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_MNDDGALECDH_OFFSET))(this, a1);
		}

		::System::Void KCLCICKJBCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_KCLCICKJBCH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::COKLGCPKGIE*>* FCOMCBOECID()
		{
			return ((::System::Collections::Generic::List_1<::COKLGCPKGIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_FCOMCBOECID_OFFSET))(this);
		}

		::EAHGHBMGCJE* NOKLFHJPEAE()
		{
			return ((::EAHGHBMGCJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_NOKLFHJPEAE_OFFSET))(this);
		}

		::System::Void MGHBJGAFLBI(::System::String* a1, ::System::Boolean a2, ::Il2CppArray<::RPG::GameCore::EntityTag>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_MGHBJGAFLBI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEGAJPPPBG_DISPOSE_OFFSET))(this);
		}

		static ::System::Void OLEHHDHEJGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEEGAJPPPBG_OLEHHDHEJGB_OFFSET))();
		}

	};
