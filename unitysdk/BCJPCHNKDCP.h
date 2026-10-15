#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/System/Object.h"
class CFALFIPEHJH;
class DMPMGGKKIBH;
class FFPAFGCOKHK;
namespace RPG::GameCore { class ParkourTriggerEventRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCJPCHNKDCP_CTOR_OFFSET UNITYSDK_OFFSET(0x162DF070)
#define BCJPCHNKDCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162E00B0)
#define BCJPCHNKDCP_ENPNBNPCGOM_OFFSET UNITYSDK_OFFSET(0x162DF1F0)
#define BCJPCHNKDCP_FGKNIIMHOAK_OFFSET UNITYSDK_OFFSET(0x162E0650)
#define BCJPCHNKDCP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x162E0290)
#define BCJPCHNKDCP_KKIPKMHADAP_OFFSET UNITYSDK_OFFSET(0x162E0590)
#define BCJPCHNKDCP_NHDBLMOHPFN_OFFSET UNITYSDK_OFFSET(0x162E03F0)

	class BCJPCHNKDCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FFPAFGCOKHK*>* EHJHENOKIGG; // 0x10
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x18
		::System::Void _ctor(::DMPMGGKKIBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NHDBLMOHPFN(::System::UInt32 a1, ::CFALFIPEHJH* a2, ::CFALFIPEHJH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CFALFIPEHJH*, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_NHDBLMOHPFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::CFALFIPEHJH*>* KKIPKMHADAP(::RPG::GameCore::EParkourEventEntityType a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::CFALFIPEHJH*>*(*)(::PVOID, ::RPG::GameCore::EParkourEventEntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_KKIPKMHADAP_OFFSET))(this, a1, a2);
		}

		::System::Void ENPNBNPCGOM(::RPG::GameCore::ParkourTriggerEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_ENPNBNPCGOM_OFFSET))(this, a1);
		}

		static ::FFPAFGCOKHK* FGKNIIMHOAK(::RPG::GameCore::ParkourTriggerEventRow* a1, ::CFALFIPEHJH* a2, ::CFALFIPEHJH* a3)
		{
			return ((::FFPAFGCOKHK*(*)(::RPG::GameCore::ParkourTriggerEventRow*, ::CFALFIPEHJH*, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + BCJPCHNKDCP_FGKNIIMHOAK_OFFSET))(a1, a2, a3);
		}

	};
