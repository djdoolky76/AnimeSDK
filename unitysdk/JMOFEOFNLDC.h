#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class APANODGHDHP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMOFEOFNLDC_AJJMOIHDCAO_OFFSET UNITYSDK_OFFSET(0xB26D9C0)
#define JMOFEOFNLDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB260550)
#define JMOFEOFNLDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB260670)
#define JMOFEOFNLDC_HDOLAAAFKHH_OFFSET UNITYSDK_OFFSET(0xB26D6F0)
#define JMOFEOFNLDC_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0xB26D0E0)
#define JMOFEOFNLDC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB26D3C0)
#define JMOFEOFNLDC_OPEMCGDODLP_OFFSET UNITYSDK_OFFSET(0xB26D7C0)

inline static constexpr unsigned int JMOFEOFNLDC_TypeDefinitionIndex = 69546;

	class JMOFEOFNLDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CILADKCCENH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::APANODGHDHP*>* DHMPCDDDJGK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_DISPOSE_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::APANODGHDHP* a1, ::System::UInt32 a2, ::RPG::MVector3 a3, ::System::Nullable_1<::RPG::MVector3> a4)
		{
			return ((::System::Void(*)(::PVOID, ::APANODGHDHP*, ::System::UInt32, ::RPG::MVector3, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_JKHOBGMGIHJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::MVector3 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::APANODGHDHP* HDOLAAAFKHH()
		{
			return ((::APANODGHDHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_HDOLAAAFKHH_OFFSET))(this);
		}

		::System::Void OPEMCGDODLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_OPEMCGDODLP_OFFSET))(this, a1);
		}

		::System::Boolean AJJMOIHDCAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOFEOFNLDC_AJJMOIHDCAO_OFFSET))(this);
		}

	};
