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

#define LDICEBCKAPP_BJLDMFEPHJG_OFFSET UNITYSDK_OFFSET(0x1AC7E580)
#define LDICEBCKAPP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AC7E410)
#define LDICEBCKAPP_CNLPPGFKLKI_OFFSET UNITYSDK_OFFSET(0x1AC7E8C0)
#define LDICEBCKAPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7E920)
#define LDICEBCKAPP_EDONENHMMCJ_OFFSET UNITYSDK_OFFSET(0x1AC7E790)
#define LDICEBCKAPP_IMHGGMPFCAP_OFFSET UNITYSDK_OFFSET(0x1AC7E5E0)
#define LDICEBCKAPP_KNLFFAKIPAH_OFFSET UNITYSDK_OFFSET(0x1AC7E910)
#define LDICEBCKAPP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AC7E2E0)
#define LDICEBCKAPP_PNFPLDEENKP_OFFSET UNITYSDK_OFFSET(0x1AC7E480)

inline static constexpr unsigned int LDICEBCKAPP_TypeDefinitionIndex = 54888;

	class LDICEBCKAPP : public ::System::Object
	{
	public:
		::ACBDGIHICCD* PJKNMFIDFLF; // 0x10
		::FGMHNMKDFMA* MPBLOCHCGHF; // 0x18
		::System::Collections::Generic::List_1<::BMICACAAOGP*>* AGLOMMKDCDN; // 0x20
		::LNHNKDOIOAG* MJKMKDGAINA; // 0x28
		::IPHPIAKCCDD* HEJKAEOIBGB; // 0x30
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
