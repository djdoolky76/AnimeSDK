#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LECGPPJIBBM.h"
#include "unitysdk/NBEKNJDCLEI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/JJEABHDCGLE.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
class HIOEAKHGILF;
class JIAJFGCHLJE;
class LBKJOGEFFOK;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBKJOGEFFOK_AJEACBNHIEI_OFFSET UNITYSDK_OFFSET(0xB6028F0)
#define LBKJOGEFFOK_CDNAEKBGHAI_OFFSET UNITYSDK_OFFSET(0xB603700)
#define LBKJOGEFFOK_CIIOMDLMKEG_OFFSET UNITYSDK_OFFSET(0xB600E00)
#define LBKJOGEFFOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB600C40)
#define LBKJOGEFFOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB600C80)
#define LBKJOGEFFOK_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xB6018A0)
#define LBKJOGEFFOK_EOHHJLDLHIP_OFFSET UNITYSDK_OFFSET(0xB601730)
#define LBKJOGEFFOK_FAPCGFCCFJD_OFFSET UNITYSDK_OFFSET(0xB602A30)
#define LBKJOGEFFOK_FGPEMIOEDMC_OFFSET UNITYSDK_OFFSET(0xB601A60)
#define LBKJOGEFFOK_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xB603940)
#define LBKJOGEFFOK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB600BA0)
#define LBKJOGEFFOK_GGICGCHAGBG_OFFSET UNITYSDK_OFFSET(0xB602300)
#define LBKJOGEFFOK_GHBJCMNGDDO_OFFSET UNITYSDK_OFFSET(0xB602700)
#define LBKJOGEFFOK_GHEDADIDPFO_OFFSET UNITYSDK_OFFSET(0xB602010)
#define LBKJOGEFFOK_GOIGIBMANDA_OFFSET UNITYSDK_OFFSET(0xB600E50)
#define LBKJOGEFFOK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB602350)
#define LBKJOGEFFOK_HOHHLBALJCO_OFFSET UNITYSDK_OFFSET(0xB6032E0)
#define LBKJOGEFFOK_IDBNFCDCFLE_OFFSET UNITYSDK_OFFSET(0xB602990)
#define LBKJOGEFFOK_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xB602BF0)
#define LBKJOGEFFOK_NPAIHICFFNB_OFFSET UNITYSDK_OFFSET(0xB6013E0)
#define LBKJOGEFFOK_NPGJNHKKAMI_OFFSET UNITYSDK_OFFSET(0xB600CE0)
#define LBKJOGEFFOK_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xB603950)

inline static constexpr unsigned int LBKJOGEFFOK_TypeDefinitionIndex = 60531;

	class LBKJOGEFFOK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::List_1<::NBEKNJDCLEI>*>* ODKMIPIKMNE; // 0x10
		::System::Collections::Generic::List_1<::LECGPPJIBBM>* HFBCDHKLFGN; // 0x18
		::JIAJFGCHLJE* _BoundsOccluderForJob_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>, ::System::Int32>* IALOMHHHMJK; // 0x28
		::System::Collections::Generic::List_1<::NBEKNJDCLEI>* IAJGIEJLKBL; // 0x30
		::RPG::Client::FiveDimManager* EEOHCCOCEDI; // 0x38
		static ::LBKJOGEFFOK** StaticGet_FLMODBLFAGD()
		{
			return (::LBKJOGEFFOK**)UnitySDK::FromName("", "LBKJOGEFFOK")->GetStaticField(0x54350);
		}

		// static const ::System::Object OHBJOEKJBAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_CTOR_OFFSET))(this);
		}

		static ::LBKJOGEFFOK* GGBLHEHJBDO()
		{
			return ((::LBKJOGEFFOK*(*)())((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_DISPOSE_OFFSET))(this);
		}

		::System::Void CIIOMDLMKEG(::RPG::Client::FiveDimManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager*))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_CIIOMDLMKEG_OFFSET))(this, a1);
		}

		::System::Void NPGJNHKKAMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_NPGJNHKKAMI_OFFSET))(this);
		}

		::System::Void GOIGIBMANDA(::RPG::Client::FiveDimGameInstance* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GOIGIBMANDA_OFFSET))(this, a1, a2);
		}

		::System::Void NPAIHICFFNB(::RPG::Client::FiveDimGameInstance* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_NPAIHICFFNB_OFFSET))(this, a1, a2);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void FGPEMIOEDMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_FGPEMIOEDMC_OFFSET))(this);
		}

		::System::Int32 GGICGCHAGBG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GGICGCHAGBG_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_HKKFFCBJOKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJEACBNHIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_AJEACBNHIEI_OFFSET))(this);
		}

		::System::Void IDBNFCDCFLE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_IDBNFCDCFLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 FAPCGFCCFJD(::Unity::Collections::NativeArray_1<::JJEABHDCGLE> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::JJEABHDCGLE>))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_FAPCGFCCFJD_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_KHNCMBEFIKI_OFFSET))(this);
		}

		static ::System::Void EOHHJLDLHIP(::System::Collections::Generic::List_1<::LECGPPJIBBM>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::LECGPPJIBBM>*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_EOHHJLDLHIP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void GHEDADIDPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GHEDADIDPFO_OFFSET))(this);
		}

		::System::Void CDNAEKBGHAI(::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_CDNAEKBGHAI_OFFSET))(this, a1);
		}

		::System::Void HOHHLBALJCO(::NBEKNJDCLEI a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBEKNJDCLEI))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_HOHHLBALJCO_OFFSET))(this, a1);
		}

		::System::Boolean GHBJCMNGDDO(::NBEKNJDCLEI a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBEKNJDCLEI, ::System::Boolean))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GHBJCMNGDDO_OFFSET))(this, a1, a2);
		}

		::JIAJFGCHLJE* get_BoundsOccluderForJob()
		{
			return ((::JIAJFGCHLJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
		}

		::System::Void set_BoundsOccluderForJob(::JIAJFGCHLJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIAJFGCHLJE*))((::PBYTE)hIl2Cpp + LBKJOGEFFOK_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, a1);
		}

	};
