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

#define OLMJHHNPJJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0A1A0)
#define OLMJHHNPJJH_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0xBF0A0E0)
#define OLMJHHNPJJH_FBOEFPJNPAL_OFFSET UNITYSDK_OFFSET(0xBF0A130)

inline static constexpr unsigned int OLMJHHNPJJH_TypeDefinitionIndex = 73827;

	class OLMJHHNPJJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OLMJHHNPJJH*>* LOMOCKGPINP; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* JFBNIECPDEN; // 0x18
		::FCHEPCNCAIM LABNFIABDFM; // 0x20
		::RPG::Client::OpenWorld::StreamingItemData* IAMKHCJJBJK; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* AHDGMHKPKBI; // 0x38
		::RPG::Client::OpenWorld::SceneItemHLODTreeExpandStatus JIIOJJKOOKM; // 0x40
		::System::Boolean JOHJKGPJIHO; // 0x44
		::System::Byte _padding0[0x3];
		::System::Int32 ICFBOIKJEEF; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::SceneItemHLODTreeEnableReason> MNJBIJGKPPO; // 0x50
		::System::Int32 AMJJFOAAGJM; // 0x58
		::System::Int32 ECOFDKGNAGP; // 0x5C
		::System::Int32 FFOIEBJCJGO; // 0x60
		::System::Int32 DFJMINPCJHN; // 0x64
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
