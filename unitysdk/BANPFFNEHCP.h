#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class IFCDCCJEJKD;
class PMLDGPDNEOA;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANPFFNEHCP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E7E710)
#define BANPFFNEHCP_DOHKJJBPHGP_OFFSET UNITYSDK_OFFSET(0x15E7E1C0)
#define BANPFFNEHCP_ECHADEACOIJ_OFFSET UNITYSDK_OFFSET(0x15E7DEE0)
#define BANPFFNEHCP_EKEFIGKEBOL_OFFSET UNITYSDK_OFFSET(0x15E7E5B0)
#define BANPFFNEHCP_ENPEJIIEBHM_OFFSET UNITYSDK_OFFSET(0x15E7E2D0)
#define BANPFFNEHCP_FFFDCIGDIGA_OFFSET UNITYSDK_OFFSET(0x15E7E660)
#define BANPFFNEHCP_OJOGKMPKIFL_OFFSET UNITYSDK_OFFSET(0x15E7DDD0)
#define BANPFFNEHCP_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x15E7DCF0)
#define BANPFFNEHCP_POBNPMKPBFK_OFFSET UNITYSDK_OFFSET(0x15E7E3F0)
#define BANPFFNEHCP__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15E7DC10)

inline static constexpr unsigned int BANPFFNEHCP_TypeDefinitionIndex = 68252;

	class BANPFFNEHCP : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NBAGBCDHFHB; // 0x10
		::RPG::Client::Promises::Promise* APPHGLLNJFD; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* FNEHDIHGKBH; // 0x20
		::System::Int64 DEOLOJGONND; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::IFCDCCJEJKD*>* OJOGKMPKIFL()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IFCDCCJEJKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_OJOGKMPKIFL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::PMLDGPDNEOA*>* DOHKJJBPHGP()
		{
			return ((::RPG::Client::Promises::IPromise_1<::PMLDGPDNEOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_DOHKJJBPHGP_OFFSET))(this);
		}

		::System::Boolean ENPEJIIEBHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_ENPEJIIEBHM_OFFSET))(this);
		}

		::System::Void POBNPMKPBFK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + BANPFFNEHCP_POBNPMKPBFK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ECHADEACOIJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_ECHADEACOIJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::IFCDCCJEJKD*>* EKEFIGKEBOL()
		{
			return ((::RPG::Client::Promises::IPromise_1<::IFCDCCJEJKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_EKEFIGKEBOL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::PMLDGPDNEOA*>* FFFDCIGDIGA()
		{
			return ((::RPG::Client::Promises::IPromise_1<::PMLDGPDNEOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANPFFNEHCP_FFFDCIGDIGA_OFFSET))(this);
		}

	};
