#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABMAPHBEJFA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB106650)
#define ABMAPHBEJFA_IEDAOBCAEEP_OFFSET UNITYSDK_OFFSET(0xB106290)
#define ABMAPHBEJFA_INMDIOHABLJ_OFFSET UNITYSDK_OFFSET(0xB106510)
#define ABMAPHBEJFA_PIBEJIEGMLP_OFFSET UNITYSDK_OFFSET(0xB1063D0)

inline static constexpr unsigned int ABMAPHBEJFA_TypeDefinitionIndex = 81358;

	class ABMAPHBEJFA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>** StaticGet_KILMAKECMBL()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*>**)UnitySDK::FromName("", "ABMAPHBEJFA")->GetStaticField(0x40C50);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_KCJKPDBIIBK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)UnitySDK::FromName("", "ABMAPHBEJFA")->GetStaticField(0x40C58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>** StaticGet_KFELEMDFEGK()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*>**)UnitySDK::FromName("", "ABMAPHBEJFA")->GetStaticField(0x40C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABMAPHBEJFA_CCTOR_OFFSET))();
		}

		static ::System::Boolean IEDAOBCAEEP(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChenLingFesDialogStyleType, ::System::String*))((::PBYTE)hIl2Cpp + ABMAPHBEJFA_IEDAOBCAEEP_OFFSET))(a1, a2);
		}

		static ::System::Boolean PIBEJIEGMLP(::RPG::GameCore::ChenLingFesToastStyleType a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChenLingFesToastStyleType, ::System::String*))((::PBYTE)hIl2Cpp + ABMAPHBEJFA_PIBEJIEGMLP_OFFSET))(a1, a2);
		}

		static ::System::Boolean INMDIOHABLJ(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + ABMAPHBEJFA_INMDIOHABLJ_OFFSET))(a1, a2);
		}

	};
