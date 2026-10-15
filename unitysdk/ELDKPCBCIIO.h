#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
class MDBOGJINCFP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELDKPCBCIIO_CTOR_OFFSET UNITYSDK_OFFSET(0x155112F0)
#define ELDKPCBCIIO_EEPDLJNHGJA_OFFSET UNITYSDK_OFFSET(0x15512200)
#define ELDKPCBCIIO_GDJLAOPOAIA_OFFSET UNITYSDK_OFFSET(0x15511C50)
#define ELDKPCBCIIO_GHAFDPHHOLG_OFFSET UNITYSDK_OFFSET(0x15511D90)
#define ELDKPCBCIIO_IJILDPAHHGM_OFFSET UNITYSDK_OFFSET(0x15511F00)
#define ELDKPCBCIIO_IOADDIIOBLF_OFFSET UNITYSDK_OFFSET(0x15511FD0)
#define ELDKPCBCIIO_NHMJAJMFDEE_OFFSET UNITYSDK_OFFSET(0x15511E30)

inline static constexpr unsigned int ELDKPCBCIIO_TypeDefinitionIndex = 80616;

	class ELDKPCBCIIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>* JOBAHEDGFAK; // 0x10
		::MDBOGJINCFP* MLGCJCPCLJP; // 0x18
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x20
		::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::MDBOGJINCFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*, ::MDBOGJINCFP*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* GDJLAOPOAIA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_GDJLAOPOAIA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* GHAFDPHHOLG()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_GHAFDPHHOLG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* IOADDIIOBLF(::System::String* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELDKPCBCIIO_IOADDIIOBLF_OFFSET))(this, a1);
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
