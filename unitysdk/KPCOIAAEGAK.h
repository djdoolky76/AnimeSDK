#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"
class AOIAGGGHHBD;
class EFANNBCFAOD;
class GEDMHFPPBHN;
class MADHNHEMBOJ;
class NFGNOOMMMEK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPCOIAAEGAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B1830)
#define KPCOIAAEGAK_DCPBJLDPPOK_OFFSET UNITYSDK_OFFSET(0xB5B10A0)
#define KPCOIAAEGAK_DFJMNDPDMOI_OFFSET UNITYSDK_OFFSET(0xB5B17E0)
#define KPCOIAAEGAK_EHBMOJAFBFK_OFFSET UNITYSDK_OFFSET(0xB5B10F0)
#define KPCOIAAEGAK_LCGFJOGHOLL_OFFSET UNITYSDK_OFFSET(0xB5B1780)
#define KPCOIAAEGAK_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0xB5B1040)
#define KPCOIAAEGAK_NHHLONPGPIE_OFFSET UNITYSDK_OFFSET(0xB5B1390)
#define KPCOIAAEGAK_OOHOMCKJOHI_OFFSET UNITYSDK_OFFSET(0xB5B1410)

inline static constexpr unsigned int KPCOIAAEGAK_TypeDefinitionIndex = 71242;

	class KPCOIAAEGAK : public ::System::Object
	{
	public:
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x10
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x18
		::GJPBCNIIEOB_Mode EEGFGAEOMCO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::MADHNHEMBOJ* a1, ::GEDMHFPPBHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MADHNHEMBOJ*, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_LNGKNPJIOML_OFFSET))(this, a1, a2);
		}

		::System::Void DCPBJLDPPOK(::GJPBCNIIEOB_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_DCPBJLDPPOK_OFFSET))(this, a1);
		}

		::NFGNOOMMMEK* EHBMOJAFBFK(::System::Int32 a1)
		{
			return ((::NFGNOOMMMEK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_EHBMOJAFBFK_OFFSET))(this, a1);
		}

		::NFGNOOMMMEK* NHHLONPGPIE(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>* a1, ::System::Int32 a2)
		{
			return ((::NFGNOOMMMEK*(*)(::PVOID, ::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_NHHLONPGPIE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::EFANNBCFAOD*>* OOHOMCKJOHI(::System::Collections::Generic::List_1<::AOIAGGGHHBD*>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::EFANNBCFAOD*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::AOIAGGGHHBD*>*, ::System::Int32))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_OOHOMCKJOHI_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCGFJOGHOLL(::RPG::GameCore::ActionBarUIStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_LCGFJOGHOLL_OFFSET))(this, a1);
		}

		::System::Boolean DFJMNDPDMOI(::RPG::GameCore::ActionBarUIStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + KPCOIAAEGAK_DFJMNDPDMOI_OFFSET))(this, a1);
		}

	};
