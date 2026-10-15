#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCLAKDAHDB.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/ValueTuple.h"
class FKIODIMJPNA;
class HFFHEPEBJFE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IDMPBNELEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDCFE0)
#define IDMPBNELEDH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15EDCDD0)
#define IDMPBNELEDH_HIBJNGKEKOG_OFFSET UNITYSDK_OFFSET(0x15EDC0C0)
#define IDMPBNELEDH_HMDEGMNIFGO_OFFSET UNITYSDK_OFFSET(0x15EDC160)
#define IDMPBNELEDH_IICGHDNEBKN_OFFSET UNITYSDK_OFFSET(0x15EDC5C0)
#define IDMPBNELEDH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EDCAC0)
#define IDMPBNELEDH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EDC0E0)
#define IDMPBNELEDH_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0x15EDC0D0)

inline static constexpr unsigned int IDMPBNELEDH_TypeDefinitionIndex = 60197;

	class IDMPBNELEDH : public ::DGCLAKDAHDB
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Object*>* FDHOAEDHKCH; // 0x10
		::System::Single JDJGAJFHIDK; // 0x18
		// static const ::System::Object CJOHBGHEONO; // 0x0
		// static const ::System::Object FOKKGCIOJEC; // 0x0
		// static const ::System::String* GJDEBBJHEDE; // 0x0
		// static const ::System::Object PFDCDAPKIGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PetDiySlotType HIBJNGKEKOG()
		{
			return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_HIBJNGKEKOG_OFFSET))(this);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_NCBGDCINJEB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFFHEPEBJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFFHEPEBJFE*))((::PBYTE)hIl2Cpp + IDMPBNELEDH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HMDEGMNIFGO(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + IDMPBNELEDH_HMDEGMNIFGO_OFFSET))(this, a1);
		}

		::System::Void IICGHDNEBKN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + IDMPBNELEDH_IICGHDNEBKN_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDMPBNELEDH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBNELEDH_HADOHLNHHGB_OFFSET))(this);
		}

	};
