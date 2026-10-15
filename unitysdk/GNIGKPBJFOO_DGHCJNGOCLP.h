#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMEEKJAKLIJ;
class DFFKOJEMIDD;
class DKDIIGPELCN;
class JKLMMFFKNFH;
class NPECKAJCCAH;
class OOBCBPNPOLG;
class PNDNFPHFBMK;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define GNIGKPBJFOO_DGHCJNGOCLP_CFGMEFOKIEM_OFFSET UNITYSDK_OFFSET(0x15B11890)
#define GNIGKPBJFOO_DGHCJNGOCLP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B11700)
#define GNIGKPBJFOO_DGHCJNGOCLP_EMCBGMALFPC_OFFSET UNITYSDK_OFFSET(0x15B12030)
#define GNIGKPBJFOO_DGHCJNGOCLP_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B120D0)
#define GNIGKPBJFOO_DGHCJNGOCLP_HILFMNDKAOB_OFFSET UNITYSDK_OFFSET(0x15B115B0)
#define GNIGKPBJFOO_DGHCJNGOCLP_ICIFMFBBKPK_OFFSET UNITYSDK_OFFSET(0x15B11B20)

	class GNIGKPBJFOO_DGHCJNGOCLP : public ::System::Object
	{
	public:
		::NPECKAJCCAH* KALACGGGCDE; // 0x10
		::DKDIIGPELCN* BAOLJMHELNH; // 0x18
		::JKLMMFFKNFH* IFAHBJDHGFH; // 0x20
		::CMEEKJAKLIJ* JIODLOKNHBO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_CTOR_OFFSET))(this);
		}

		::System::Void CFGMEFOKIEM(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_CFGMEFOKIEM_OFFSET))(this, a1);
		}

		::System::Void HILFMNDKAOB(::OOBCBPNPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBCBPNPOLG*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_HILFMNDKAOB_OFFSET))(this, a1);
		}

		::System::Void ICIFMFBBKPK(::PNDNFPHFBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNDNFPHFBMK*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_ICIFMFBBKPK_OFFSET))(this, a1);
		}

		::System::Void EMCBGMALFPC(::DFFKOJEMIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFKOJEMIDD*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_EMCBGMALFPC_OFFSET))(this, a1);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_DGHCJNGOCLP_GETCONTEXT_OFFSET))(this, a1);
		}

	};
