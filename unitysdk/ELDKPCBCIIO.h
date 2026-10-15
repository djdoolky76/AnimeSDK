#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
class MDBOGJINCFP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELDKPCBCIIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1551CFA0)
#define ELDKPCBCIIO_EEPDLJNHGJA_OFFSET UNITYSDK_OFFSET(0x1551DEB0)
#define ELDKPCBCIIO_GDJLAOPOAIA_OFFSET UNITYSDK_OFFSET(0x1551D900)
#define ELDKPCBCIIO_GHAFDPHHOLG_OFFSET UNITYSDK_OFFSET(0x1551DA40)
#define ELDKPCBCIIO_IJILDPAHHGM_OFFSET UNITYSDK_OFFSET(0x1551DBB0)
#define ELDKPCBCIIO_IOADDIIOBLF_OFFSET UNITYSDK_OFFSET(0x1551DC80)
#define ELDKPCBCIIO_NHMJAJMFDEE_OFFSET UNITYSDK_OFFSET(0x1551DAE0)

	class ELDKPCBCIIO : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>* JOBAHEDGFAK; // 0x18
		::MDBOGJINCFP* MLGCJCPCLJP; // 0x20
		::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::MDBOGJINCFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*, ::MDBOGJINCFP*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GDJLAOPOAIA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_GDJLAOPOAIA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GHAFDPHHOLG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_GHAFDPHHOLG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IOADDIIOBLF(::System::String* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_IOADDIIOBLF_OFFSET))(this, a1);
		}

		::System::Action* NHMJAJMFDEE(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_NHMJAJMFDEE_OFFSET))(this, a1);
		}

		::System::Action* IJILDPAHHGM(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_IJILDPAHHGM_OFFSET))(this, a1);
		}

		::LBJLBMOOJGM* EEPDLJNHGJA()
		{
			return ((::LBJLBMOOJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_EEPDLJNHGJA_OFFSET))(this);
		}

	};
