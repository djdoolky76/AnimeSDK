#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDAMCBDNMKL.h"
#include "unitysdk/JMLOMHHEAEJ_FECOHAAGCNC.h"
namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMLOMHHEAEJ_ALHKLLOHLOI_OFFSET UNITYSDK_OFFSET(0xB270B30)
#define JMLOMHHEAEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB271BC0)
#define JMLOMHHEAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB271B40)
#define JMLOMHHEAEJ_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB2709B0)
#define JMLOMHHEAEJ_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB2719A0)

inline static constexpr unsigned int JMLOMHHEAEJ_TypeDefinitionIndex = 57201;

	class JMLOMHHEAEJ : public ::MDAMCBDNMKL
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DAGOAIPECKG; // 0x20
		static ::Il2CppArray<::System::Int32>** StaticGet_INDALFDGAGD()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "JMLOMHHEAEJ")->GetStaticField(0x1F8F0);
		}

		static ::System::Int32* StaticGet_FCLPNFEHLFB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JMLOMHHEAEJ")->GetStaticField(0x7340);
		}

		static ::System::Int32* StaticGet_JHIMOHCAMCK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JMLOMHHEAEJ")->GetStaticField(0x7344);
		}

		static ::System::Int32* StaticGet_FOEMGBMLAJJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JMLOMHHEAEJ")->GetStaticField(0x7348);
		}

		// static const ::System::Object OHCMDJEPCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOMHHEAEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLOMHHEAEJ_CCTOR_OFFSET))();
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::SetCharacterPartsVisibility* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + JMLOMHHEAEJ_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOMHHEAEJ_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void ALHKLLOHLOI(::JMLOMHHEAEJ_FECOHAAGCNC a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLOMHHEAEJ_FECOHAAGCNC))((::PBYTE)hIl2Cpp + JMLOMHHEAEJ_ALHKLLOHLOI_OFFSET))(this, a1);
		}

	};
