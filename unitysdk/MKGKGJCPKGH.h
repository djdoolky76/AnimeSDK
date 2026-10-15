#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipInteractionType.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class DDCDKHALPDP;
class IOGNBKGNPFD;
class OMBIMJDIHLE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define MKGKGJCPKGH_CLGGIJAAPMJ_OFFSET UNITYSDK_OFFSET(0xB997870)
#define MKGKGJCPKGH_IGNNFLIGEGH_OFFSET UNITYSDK_OFFSET(0xB997700)
#define MKGKGJCPKGH_JFLMDNMGLEP_OFFSET UNITYSDK_OFFSET(0xB997070)
#define MKGKGJCPKGH_JLFADGEIGHB_OFFSET UNITYSDK_OFFSET(0xB996EC0)
#define MKGKGJCPKGH_NADOHHAONDP_OFFSET UNITYSDK_OFFSET(0xB997600)
#define MKGKGJCPKGH_OAMEDKGKLNO_OFFSET UNITYSDK_OFFSET(0xB9972D0)

	class MKGKGJCPKGH : public ::System::Object
	{
	public:
		// static const ::System::Object DIEHMHCJGMA; // 0x0
		static ::DDCDKHALPDP* JLFADGEIGHB()
		{
			return ((::DDCDKHALPDP*(*)())((::PBYTE)hIl2Cpp + MKGKGJCPKGH_JLFADGEIGHB_OFFSET))();
		}

		static ::System::Void JFLMDNMGLEP(::BCLKDMAHONE* a1, ::BCLKDMAHONE* a2, ::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType a3, ::BCLKDMAHONE* a4)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::Client::LittleGame::PixAir::PixAirEquipInteractionType, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + MKGKGJCPKGH_JFLMDNMGLEP_OFFSET))(a1, a2, a3, a4);
		}

		static ::BCLKDMAHONE* OAMEDKGKLNO(::IOGNBKGNPFD* a1)
		{
			return ((::BCLKDMAHONE*(*)(::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + MKGKGJCPKGH_OAMEDKGKLNO_OFFSET))(a1);
		}

		static ::System::Void NADOHHAONDP(::System::Int32 a1, ::RPG::GameCore::PixAirEventType a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + MKGKGJCPKGH_NADOHHAONDP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint IGNNFLIGEGH(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKGKGJCPKGH_IGNNFLIGEGH_OFFSET))(a1, a2);
		}

		static ::System::Void CLGGIJAAPMJ(::BCLKDMAHONE* a1, ::OMBIMJDIHLE* a2, ::RPG::GameCore::FixPoint a3, ::DDCDKHALPDP* a4)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::OMBIMJDIHLE*, ::RPG::GameCore::FixPoint, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + MKGKGJCPKGH_CLGGIJAAPMJ_OFFSET))(a1, a2, a3, a4);
		}

	};
