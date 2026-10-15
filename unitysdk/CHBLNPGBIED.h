#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMDMAGLLNI;
class KLECENLPBJL;
class OIPLJGNIGKD;
class OMOEFAHFJFL;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CHBLNPGBIED_AELKHHIPHGD_OFFSET UNITYSDK_OFFSET(0xCC8C200)
#define CHBLNPGBIED_APKKKGFAFNE_OFFSET UNITYSDK_OFFSET(0xCC8BE80)
#define CHBLNPGBIED_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8BE70)
#define CHBLNPGBIED_FFIGBOBCMMK_OFFSET UNITYSDK_OFFSET(0xCC8C040)
#define CHBLNPGBIED_HOCNDKBLFNL_OFFSET UNITYSDK_OFFSET(0xCC8C240)

inline static constexpr unsigned int CHBLNPGBIED_TypeDefinitionIndex = 81494;

	class CHBLNPGBIED : public ::System::Object
	{
	public:
		::OMOEFAHFJFL* MJHHLOPFDNK; // 0x10
		::System::UInt32 DHFNIFJGPJA; // 0x18
		::System::Void _ctor(::OMOEFAHFJFL* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMOEFAHFJFL*, ::System::UInt32))((::PBYTE)hIl2Cpp + CHBLNPGBIED_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::KLECENLPBJL*>* APKKKGFAFNE(::FOMDMAGLLNI* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::KLECENLPBJL*>*(*)(::PVOID, ::FOMDMAGLLNI*, ::System::Int32))((::PBYTE)hIl2Cpp + CHBLNPGBIED_APKKKGFAFNE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::KLECENLPBJL*>* FFIGBOBCMMK(::System::Int32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::KLECENLPBJL*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHBLNPGBIED_FFIGBOBCMMK_OFFSET))(this, a1);
		}

		::OIPLJGNIGKD* AELKHHIPHGD()
		{
			return ((::OIPLJGNIGKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBLNPGBIED_AELKHHIPHGD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HOCNDKBLFNL(::FOMDMAGLLNI* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + CHBLNPGBIED_HOCNDKBLFNL_OFFSET))(this, a1);
		}

	};
