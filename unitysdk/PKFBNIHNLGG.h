#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKFBNIHNLGG__PropertyRawValues_e__FixedBuffer.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define PKFBNIHNLGG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2AD320)
#define PKFBNIHNLGG_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0xDE750)
#define PKFBNIHNLGG_KFPKDOLMMNC_OFFSET UNITYSDK_OFFSET(0xDE700)

inline static constexpr unsigned int PKFBNIHNLGG_TypeDefinitionIndex = 59006;

	struct alignas(4) PKFBNIHNLGG
	{
		::System::UInt32 CEGOPEIKDLA; // 0x10
		::System::Byte _padding0[0x4];
		::PKFBNIHNLGG__PropertyRawValues_e__FixedBuffer PDPFAANPNGG; // 0x18
		static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_FPECNMCINKN()
		{
			return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)UnitySDK::FromName("", "PKFBNIHNLGG")->GetStaticField(0x54D10);
		}

		// static const ::System::Object AIBKIIGHLBM; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFBNIHNLGG_CCTOR_OFFSET))();
		}

		/*
		::System::Boolean KFPKDOLMMNC(::PKFBNIHNLGG a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKFBNIHNLGG, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PKFBNIHNLGG_KFPKDOLMMNC_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void FJGGODFCDCJ(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + PKFBNIHNLGG_FJGGODFCDCJ_OFFSET))(this, a1);
		}

	};
