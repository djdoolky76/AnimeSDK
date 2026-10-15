#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"
class ECMDJLGJFHH;
class MHMLBEJKFDE_DDKCAGBNBDC;
namespace RPG::Client { class AvatarEmotionClipConfig; }
namespace RPG::Client { class EmotionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MHMLBEJKFDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9478A0)
#define MHMLBEJKFDE_DEFEFLKBPOK_OFFSET UNITYSDK_OFFSET(0xB947220)
#define MHMLBEJKFDE_EJKLMMPEDBE_OFFSET UNITYSDK_OFFSET(0xB947120)
#define MHMLBEJKFDE_GBCBKAOOKMK_OFFSET UNITYSDK_OFFSET(0xB947520)
#define MHMLBEJKFDE_HKAHLNPMLHL_OFFSET UNITYSDK_OFFSET(0xB946FF0)
#define MHMLBEJKFDE_MCFLBFCDADF_OFFSET UNITYSDK_OFFSET(0xB946F90)
#define MHMLBEJKFDE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB946DD0)

	class MHMLBEJKFDE : public ::System::Object
	{
	public:
		::ECMDJLGJFHH* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* GDEICGCKOAM; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>* AELAGDGDBNO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>* MCFLBFCDADF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_MCFLBFCDADF_OFFSET))(this, a1);
		}

		::RPG::Client::EmotionData* EJKLMMPEDBE(::System::UInt32 a1, ::RPG::GameCore::EmotionID a2)
		{
			return ((::RPG::Client::EmotionData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_EJKLMMPEDBE_OFFSET))(this, a1, a2);
		}

		::MHMLBEJKFDE_DDKCAGBNBDC* HKAHLNPMLHL(::System::UInt32 a1)
		{
			return ((::MHMLBEJKFDE_DDKCAGBNBDC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_HKAHLNPMLHL_OFFSET))(this, a1);
		}

		::MHMLBEJKFDE_DDKCAGBNBDC* DEFEFLKBPOK(::System::UInt32 a1)
		{
			return ((::MHMLBEJKFDE_DDKCAGBNBDC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_DEFEFLKBPOK_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarEmotionClipConfig* GBCBKAOOKMK(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarEmotionClipConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_GBCBKAOOKMK_OFFSET))(this, a1);
		}

	};
