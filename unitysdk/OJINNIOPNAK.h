#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FFCGHKGDAJF;
class GFBAEDGGPMM;
class GIJPBMMNJKO;
class IOEPMPAKMOK;
class OJINNIOPNAK;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJINNIOPNAK_ABKFIGGLPAI_OFFSET UNITYSDK_OFFSET(0xBEB6180)
#define OJINNIOPNAK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBEB3460)
#define OJINNIOPNAK_CNEAGABFLGJ_OFFSET UNITYSDK_OFFSET(0xBEB34E0)
#define OJINNIOPNAK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB34D0)
#define OJINNIOPNAK_DAFIMENKAPD_OFFSET UNITYSDK_OFFSET(0xBEB3960)
#define OJINNIOPNAK_HEAFEHKDDFM_OFFSET UNITYSDK_OFFSET(0xBEB4690)
#define OJINNIOPNAK_OHCBNANFLFK_OFFSET UNITYSDK_OFFSET(0xBEB3570)

inline static constexpr unsigned int OJINNIOPNAK_TypeDefinitionIndex = 74581;

	class OJINNIOPNAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINNIOPNAK_CTOR_OFFSET))(this);
		}

		static ::OJINNIOPNAK* BPLPBPMEODA()
		{
			return ((::OJINNIOPNAK*(*)())((::PBYTE)hIl2Cpp + OJINNIOPNAK_BPLPBPMEODA_OFFSET))();
		}

		::GFBAEDGGPMM* CNEAGABFLGJ(::FFCGHKGDAJF* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
		{
			return ((::GFBAEDGGPMM*(*)(::PVOID, ::FFCGHKGDAJF*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + OJINNIOPNAK_CNEAGABFLGJ_OFFSET))(this, a1, a2, a3);
		}

		::GFBAEDGGPMM* OHCBNANFLFK(::FFCGHKGDAJF* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
		{
			return ((::GFBAEDGGPMM*(*)(::PVOID, ::FFCGHKGDAJF*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + OJINNIOPNAK_OHCBNANFLFK_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::GIJPBMMNJKO*, ::IOEPMPAKMOK*> DAFIMENKAPD(::FFCGHKGDAJF* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
		{
			return ((::System::ValueTuple_2<::GIJPBMMNJKO*, ::IOEPMPAKMOK*>(*)(::PVOID, ::FFCGHKGDAJF*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + OJINNIOPNAK_DAFIMENKAPD_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* HEAFEHKDDFM(::FFCGHKGDAJF* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::IOEPMPAKMOK* a3, ::GIJPBMMNJKO* a4)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*(*)(::FFCGHKGDAJF*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::IOEPMPAKMOK*, ::GIJPBMMNJKO*))((::PBYTE)hIl2Cpp + OJINNIOPNAK_HEAFEHKDDFM_OFFSET))(a1, a2, a3, a4);
		}

		::GIJPBMMNJKO* ABKFIGGLPAI(::FFCGHKGDAJF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* a2)
		{
			return ((::GIJPBMMNJKO*(*)(::PVOID, ::FFCGHKGDAJF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*))((::PBYTE)hIl2Cpp + OJINNIOPNAK_ABKFIGGLPAI_OFFSET))(this, a1, a2);
		}

	};
