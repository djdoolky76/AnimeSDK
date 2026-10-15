#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
class BJHMBGLPOLB;
class COOONBGCCCM;
class HLOHDPOEMDK;
class JCGJEBAIBPL;
class OOCCBMLAELL;
class PEEJLLENABM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMPFPHCKIFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1558D910)
#define AMPFPHCKIFP_DOMEMPAEEKD_OFFSET UNITYSDK_OFFSET(0x1558E1A0)
#define AMPFPHCKIFP_MJFKHPEKPBP_OFFSET UNITYSDK_OFFSET(0x1558D9C0)

inline static constexpr unsigned int AMPFPHCKIFP_TypeDefinitionIndex = 81105;

	class AMPFPHCKIFP : public ::System::Object
	{
	public:
		::JCGJEBAIBPL* JJANKLBLJBG; // 0x10
		::PEEJLLENABM* IDHHCHBHALO; // 0x18
		::System::Void _ctor(::PEEJLLENABM* a1, ::JCGJEBAIBPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEEJLLENABM*, ::JCGJEBAIBPL*))((::PBYTE)hIl2Cpp + AMPFPHCKIFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MJFKHPEKPBP(::HLOHDPOEMDK* a1, ::OOCCBMLAELL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLOHDPOEMDK*, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + AMPFPHCKIFP_MJFKHPEKPBP_OFFSET))(this, a1, a2);
		}

		::System::Void DOMEMPAEEKD(::System::Collections::Generic::List_1<::COOONBGCCCM*>* a1, ::System::Collections::Generic::IEnumerable_1<::BJHMBGLPOLB*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::COOONBGCCCM*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COOONBGCCCM*>*, ::System::Collections::Generic::IEnumerable_1<::BJHMBGLPOLB*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::COOONBGCCCM*>*))((::PBYTE)hIl2Cpp + AMPFPHCKIFP_DOMEMPAEEKD_OFFSET))(this, a1, a2, a3);
		}

	};
