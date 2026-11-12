#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJIEGMAKIMA_EPerformanceInstanceState.h"
#include "unitysdk/System/Object.h"
class FJIEGMAKIMA;
class FJIEGMAKIMA_LMKGCKHMBLP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJIEGMAKIMA_DFFGFGJNPMP_BCCBKJKKHAE_OFFSET UNITYSDK_OFFSET(0x166F20B0)
#define FJIEGMAKIMA_DFFGFGJNPMP_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x166F2190)
#define FJIEGMAKIMA_DFFGFGJNPMP_CTOR_OFFSET UNITYSDK_OFFSET(0x166EF980)
#define FJIEGMAKIMA_DFFGFGJNPMP_DEJFCHGNDBL_OFFSET UNITYSDK_OFFSET(0x166F0BC0)
#define FJIEGMAKIMA_DFFGFGJNPMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166ECAE0)
#define FJIEGMAKIMA_DFFGFGJNPMP_EPODAGHCEKF_OFFSET UNITYSDK_OFFSET(0x166EDFB0)
#define FJIEGMAKIMA_DFFGFGJNPMP_FNPGEPDGOAC_OFFSET UNITYSDK_OFFSET(0x166EFEB0)
#define FJIEGMAKIMA_DFFGFGJNPMP_GEDADHAGCEB_OFFSET UNITYSDK_OFFSET(0x166F0C90)
#define FJIEGMAKIMA_DFFGFGJNPMP_GNJMGFBAACI_OFFSET UNITYSDK_OFFSET(0x166F2060)
#define FJIEGMAKIMA_DFFGFGJNPMP_HEEMIIBNCBJ_OFFSET UNITYSDK_OFFSET(0x166F1AF0)
#define FJIEGMAKIMA_DFFGFGJNPMP_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x166F21A0)
#define FJIEGMAKIMA_DFFGFGJNPMP_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x166F21B0)
#define FJIEGMAKIMA_DFFGFGJNPMP_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x166ED430)
#define FJIEGMAKIMA_DFFGFGJNPMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x166EE250)
#define FJIEGMAKIMA_DFFGFGJNPMP_LKCBDNDDAGN_OFFSET UNITYSDK_OFFSET(0x166F21C0)
#define FJIEGMAKIMA_DFFGFGJNPMP_MFEPFKKGDEB_OFFSET UNITYSDK_OFFSET(0x166F14F0)
#define FJIEGMAKIMA_DFFGFGJNPMP_NJAIPHGPPNB_OFFSET UNITYSDK_OFFSET(0x166F0DA0)
#define FJIEGMAKIMA_DFFGFGJNPMP_NOEPMGAKLGN_OFFSET UNITYSDK_OFFSET(0x166F1370)
#define FJIEGMAKIMA_DFFGFGJNPMP_NPLKLNMPOHH_OFFSET UNITYSDK_OFFSET(0x166F19A0)
#define FJIEGMAKIMA_DFFGFGJNPMP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x166ECFD0)
#define FJIEGMAKIMA_DFFGFGJNPMP_OINBDMGFFJL_1_OFFSET UNITYSDK_OFFSET(0x166EFB80)
#define FJIEGMAKIMA_DFFGFGJNPMP_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x166EFC20)

inline static constexpr unsigned int FJIEGMAKIMA_DFFGFGJNPMP_TypeDefinitionIndex = 61512;

	class FJIEGMAKIMA_DFFGFGJNPMP : public ::System::Object
	{
	public:
		::FJIEGMAKIMA* CPIIOIPAAKK; // 0x10
		::RPG::GameCore::GameEntity* OALILMALLAI; // 0x18
		::RPG::GameCore::TrainPartyPerformance* JLGLHMJIKOF; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* NMMHJPOOPEB; // 0x28
		::FJIEGMAKIMA_LMKGCKHMBLP* BEHHICMOFIE; // 0x30
		::System::UInt32 PEEFHNHDBMF; // 0x38
		::System::Boolean GOFKAELMOPB; // 0x3C
		::System::Byte _padding0[0x3];
		::FJIEGMAKIMA_EPerformanceInstanceState DLNIGFGLPLJ; // 0x40
		::System::Void _ctor(::FJIEGMAKIMA* a1, ::System::UInt32 a2, ::FJIEGMAKIMA_LMKGCKHMBLP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FJIEGMAKIMA*, ::System::UInt32, ::FJIEGMAKIMA_LMKGCKHMBLP*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL_1(::RPG::GameCore::TrainPartyPerformance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_OINBDMGFFJL_1_OFFSET))(this, a1);
		}

		::System::Void MFEPFKKGDEB(::RPG::GameCore::TrainPartyPerformance* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_MFEPFKKGDEB_OFFSET))(this, a1, a2);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_IECIAPPANHI_OFFSET))(this);
		}

		::System::Boolean EPODAGHCEKF(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_EPODAGHCEKF_OFFSET))(this, a1);
		}

		::System::Boolean FNPGEPDGOAC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_FNPGEPDGOAC_OFFSET))(this);
		}

		::System::Boolean HEEMIIBNCBJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_HEEMIIBNCBJ_OFFSET))(this, a1);
		}

		::System::Void NPLKLNMPOHH(::RPG::GameCore::TrainPartyPerformance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_NPLKLNMPOHH_OFFSET))(this, a1);
		}

		::System::Void NJAIPHGPPNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_NJAIPHGPPNB_OFFSET))(this);
		}

		::System::Boolean GEDADHAGCEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_GEDADHAGCEB_OFFSET))(this);
		}

		::System::Void GNJMGFBAACI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_GNJMGFBAACI_OFFSET))(this);
		}

		::System::Void DEJFCHGNDBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_DEJFCHGNDBL_OFFSET))(this);
		}

		::System::Void NOEPMGAKLGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_NOEPMGAKLGN_OFFSET))(this);
		}

		::System::Void BCCBKJKKHAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_BCCBKJKKHAE_OFFSET))(this, a1);
		}

		::FJIEGMAKIMA_EPerformanceInstanceState BGDKFHEBDFJ()
		{
			return ((::FJIEGMAKIMA_EPerformanceInstanceState(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::FJIEGMAKIMA_EPerformanceInstanceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIEGMAKIMA_EPerformanceInstanceState))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* LKCBDNDDAGN()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_DFFGFGJNPMP_LKCBDNDDAGN_OFFSET))(this);
		}

	};
