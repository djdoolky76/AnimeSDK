#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCHEPCNCAIM.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeExpandStatus.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
class OLMJHHNPJJH;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLMJHHNPJJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC80E730)
#define OLMJHHNPJJH_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0xC80E670)
#define OLMJHHNPJJH_FBOEFPJNPAL_OFFSET UNITYSDK_OFFSET(0xC80E6C0)

inline static constexpr unsigned int OLMJHHNPJJH_TypeDefinitionIndex = 75954;

	class OLMJHHNPJJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* AHDGMHKPKBI; // 0x10
		::FCHEPCNCAIM LABNFIABDFM; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* IAMKHCJJBJK; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* JFBNIECPDEN; // 0x30
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* LOMOCKGPINP; // 0x38
		::System::Int32 DFJMINPCJHN; // 0x40
		::System::Int32 ECOFDKGNAGP; // 0x44
		::System::Boolean JOHJKGPJIHO; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::Client::OpenWorld::SceneItemHLODTreeExpandStatus JIIOJJKOOKM; // 0x4C
		::System::Int32 AMJJFOAAGJM; // 0x50
		::System::Int32 ICFBOIKJEEF; // 0x54
		::System::Int32 FFOIEBJCJGO; // 0x58
		::System::Byte _padding1[0x4];
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason> MNJBIJGKPPO; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMJHHNPJJH_CTOR_OFFSET))(this);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMJHHNPJJH_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void FBOEFPJNPAL(::System::Boolean a1, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason))((::PBYTE)hIl2Cpp + OLMJHHNPJJH_FBOEFPJNPAL_OFFSET))(this, a1, a2);
		}

	};
