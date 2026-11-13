#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
namespace RPG::GameCore { class EventManager; }
namespace System { class Object; }

#define NDNEGPMIMBH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16FCC4B0)
#define NDNEGPMIMBH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16FCC580)
#define NDNEGPMIMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x16FCC0B0)
#define NDNEGPMIMBH_GBGALIOKBHN_OFFSET UNITYSDK_OFFSET(0x16FCC3B0)
#define NDNEGPMIMBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16FCC260)
#define NDNEGPMIMBH_NIOPMOPLOFP_OFFSET UNITYSDK_OFFSET(0x16FCC2B0)
#define NDNEGPMIMBH__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x16FCC100)
#define NDNEGPMIMBH__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x16FCC210)

inline static constexpr unsigned int NDNEGPMIMBH_TypeDefinitionIndex = 73629;

	class NDNEGPMIMBH : public ::RPG::Client::UIController
	{
	public:
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x190
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNEGPMIMBH__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNEGPMIMBH__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::EventManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void NIOPMOPLOFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_NIOPMOPLOFP_OFFSET))(this, a1);
		}

		::System::Void GBGALIOKBHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_GBGALIOKBHN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNEGPMIMBH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
