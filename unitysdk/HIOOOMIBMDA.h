#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APLEMBNFLAA;
class HIOOOMIBMDA;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIOOOMIBMDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CFD5B0)
#define HIOOOMIBMDA_DIKCOEDBGLA_OFFSET UNITYSDK_OFFSET(0x15D00E20)
#define HIOOOMIBMDA_DOAILEHLIKH_1_OFFSET UNITYSDK_OFFSET(0x15CFFE10)
#define HIOOOMIBMDA_DOAILEHLIKH_OFFSET UNITYSDK_OFFSET(0x15CFFD20)
#define HIOOOMIBMDA_EELIPIABMFH_OFFSET UNITYSDK_OFFSET(0x15CFE9B0)
#define HIOOOMIBMDA_EPPOKBFGABE_OFFSET UNITYSDK_OFFSET(0x15CFEDC0)
#define HIOOOMIBMDA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15CFDB20)
#define HIOOOMIBMDA_HILELDGBKKM_OFFSET UNITYSDK_OFFSET(0x15D009F0)
#define HIOOOMIBMDA_HIMMIMHNCHA_1_OFFSET UNITYSDK_OFFSET(0x15CFD7F0)
#define HIOOOMIBMDA_HIMMIMHNCHA_OFFSET UNITYSDK_OFFSET(0x15CFFAE0)
#define HIOOOMIBMDA_IBDCDPNEIFE_OFFSET UNITYSDK_OFFSET(0x15CFF300)
#define HIOOOMIBMDA_LIKBNPONOAL_OFFSET UNITYSDK_OFFSET(0x15D00DD0)
#define HIOOOMIBMDA_NFCGOPKCBCP_OFFSET UNITYSDK_OFFSET(0x15D00D00)
#define HIOOOMIBMDA_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15CFE310)

inline static constexpr unsigned int HIOOOMIBMDA_TypeDefinitionIndex = 73941;

	class HIOOOMIBMDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Collections::Pooled::PooledList_1<::APLEMBNFLAA*>*>* IHHKBFCBPBJ; // 0x10
		::System::Collections::Generic::List_1<::APLEMBNFLAA*>* GBMCFKOEJCA; // 0x18
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::Collections::Pooled::PooledList_1<::APLEMBNFLAA*>*>* FPLPMPJBOFD; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* IHDILINHDDJ; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::APLEMBNFLAA*>* MDCLCCHILMI; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::APLEMBNFLAA*>* BPKBIBKGDEH; // 0x38
		::System::Int32 JIBOGDFLMIJ; // 0x40
		::System::Boolean NCIIJGCCJKO; // 0x44
		::System::Boolean LEJEINIBNDB; // 0x45
		::System::Void _ctor(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::HIOOOMIBMDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOOOMIBMDA*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EPPOKBFGABE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_EPPOKBFGABE_OFFSET))(this);
		}

		::System::Void EELIPIABMFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_EELIPIABMFH_OFFSET))(this);
		}

		::System::Void HIMMIMHNCHA(::System::String* a1, ::APLEMBNFLAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_HIMMIMHNCHA_OFFSET))(this, a1, a2);
		}

		::System::Void HIMMIMHNCHA_1(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_HIMMIMHNCHA_1_OFFSET))(this, a1);
		}

		::System::Void DOAILEHLIKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_DOAILEHLIKH_OFFSET))(this, a1);
		}

		::System::Void DOAILEHLIKH_1(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_DOAILEHLIKH_1_OFFSET))(this, a1);
		}

		::System::Boolean HILELDGBKKM(::APLEMBNFLAA* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_HILELDGBKKM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::APLEMBNFLAA*>* NFCGOPKCBCP(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::APLEMBNFLAA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_NFCGOPKCBCP_OFFSET))(this, a1);
		}

		::Collections::Pooled::PooledList_1<::APLEMBNFLAA*>* IBDCDPNEIFE(::System::Int32 a1)
		{
			return ((::Collections::Pooled::PooledList_1<::APLEMBNFLAA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_IBDCDPNEIFE_OFFSET))(this, a1);
		}

		::System::Void LIKBNPONOAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_LIKBNPONOAL_OFFSET))(this);
		}

		::System::Void DIKCOEDBGLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOOMIBMDA_DIKCOEDBGLA_OFFSET))(this);
		}

	};
