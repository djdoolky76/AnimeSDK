#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCPHCINDJF;
class FBEONBAOLAA;
class KEMIFCIOGPE;
class ODCOIGDOFGH;
class OEENEGJBMCO;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEMIFCIOGPE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC092F0)
#define KEMIFCIOGPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC093E0)
#define KEMIFCIOGPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC09640)
#define KEMIFCIOGPE_GET_STYLEVIEWDATA_OFFSET UNITYSDK_OFFSET(0xBC09690)
#define KEMIFCIOGPE_HDIIEAELOPP_OFFSET UNITYSDK_OFFSET(0xBC093F0)
#define KEMIFCIOGPE_SET_STYLEVIEWDATA_OFFSET UNITYSDK_OFFSET(0xBC096A0)

inline static constexpr unsigned int KEMIFCIOGPE_TypeDefinitionIndex = 74240;

	class KEMIFCIOGPE : public ::System::Object
	{
	public:
		::ODCOIGDOFGH* EEFKMKMOGEB; // 0x10
		::FBEONBAOLAA* _StyleViewData_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_CTOR_OFFSET))(this);
		}

		static ::KEMIFCIOGPE* BPLPBPMEODA(::ODCOIGDOFGH* a1, ::OEENEGJBMCO* a2, ::RPG::GameCore::LevelUIComponent* a3)
		{
			return ((::KEMIFCIOGPE*(*)(::ODCOIGDOFGH*, ::OEENEGJBMCO*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::DLCPHCINDJF*>* HDIIEAELOPP()
		{
			return ((::System::Collections::Generic::List_1<::DLCPHCINDJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_HDIIEAELOPP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_DISPOSE_OFFSET))(this);
		}

		::FBEONBAOLAA* get_StyleViewData()
		{
			return ((::FBEONBAOLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_GET_STYLEVIEWDATA_OFFSET))(this);
		}

		::System::Void set_StyleViewData(::FBEONBAOLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBEONBAOLAA*))((::PBYTE)hIl2Cpp + KEMIFCIOGPE_SET_STYLEVIEWDATA_OFFSET))(this, a1);
		}

	};
