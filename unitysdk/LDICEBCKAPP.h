#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
class ACBDGIHICCD;
class BMICACAAOGP;
class FGMHNMKDFMA;
class IPHPIAKCCDD;
class LNHNKDOIOAG;
class OLAPJIKMNMH;
namespace RPG::GameCore { class GameEntityList; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDICEBCKAPP_BJLDMFEPHJG_OFFSET UNITYSDK_OFFSET(0xB61D750)
#define LDICEBCKAPP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB61D5E0)
#define LDICEBCKAPP_CNLPPGFKLKI_OFFSET UNITYSDK_OFFSET(0xB61DA90)
#define LDICEBCKAPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB61DAF0)
#define LDICEBCKAPP_EDONENHMMCJ_OFFSET UNITYSDK_OFFSET(0xB61D960)
#define LDICEBCKAPP_IMHGGMPFCAP_OFFSET UNITYSDK_OFFSET(0xB61D7B0)
#define LDICEBCKAPP_KNLFFAKIPAH_OFFSET UNITYSDK_OFFSET(0xB61DAE0)
#define LDICEBCKAPP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB61D4B0)
#define LDICEBCKAPP_PNFPLDEENKP_OFFSET UNITYSDK_OFFSET(0xB61D650)

inline static constexpr unsigned int LDICEBCKAPP_TypeDefinitionIndex = 53724;

	class LDICEBCKAPP : public ::System::Object
	{
	public:
		::ACBDGIHICCD* PJKNMFIDFLF; // 0x10
		::LNHNKDOIOAG* MJKMKDGAINA; // 0x18
		::FGMHNMKDFMA* MPBLOCHCGHF; // 0x20
		::IPHPIAKCCDD* HEJKAEOIBGB; // 0x28
		::System::Collections::Generic::List_1<::BMICACAAOGP*>* AGLOMMKDCDN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDICEBCKAPP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::IPHPIAKCCDD* a1, ::FGMHNMKDFMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPHPIAKCCDD*, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + LDICEBCKAPP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDICEBCKAPP_CLEAR_OFFSET))(this);
		}

		::System::Void BJLDMFEPHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDICEBCKAPP_BJLDMFEPHJG_OFFSET))(this);
		}

		::System::Int32 IMHGGMPFCAP(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + LDICEBCKAPP_IMHGGMPFCAP_OFFSET))(this, a1);
		}

		::System::Boolean EDONENHMMCJ(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + LDICEBCKAPP_EDONENHMMCJ_OFFSET))(this, a1);
		}

		::System::Void PNFPLDEENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDICEBCKAPP_PNFPLDEENKP_OFFSET))(this);
		}

		::System::Boolean CNLPPGFKLKI(::OLAPJIKMNMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLAPJIKMNMH*))((::PBYTE)hIl2Cpp + LDICEBCKAPP_CNLPPGFKLKI_OFFSET))(this, a1);
		}

		::FGMHNMKDFMA* KNLFFAKIPAH()
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDICEBCKAPP_KNLFFAKIPAH_OFFSET))(this);
		}

	};
