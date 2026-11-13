#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
class DOLMCHMNEIL;
class IMIOIKDAJOK;
class JINIOBBNJPF;
class JNGJOABNBIM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJFCKMKFGEI_ALJIOCDBMKO_1_OFFSET UNITYSDK_OFFSET(0x177C68C0)
#define CJFCKMKFGEI_ALJIOCDBMKO_2_OFFSET UNITYSDK_OFFSET(0x177C6970)
#define CJFCKMKFGEI_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x177C67A0)
#define CJFCKMKFGEI_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0x177C6A20)
#define CJFCKMKFGEI_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0x177C6AF0)
#define CJFCKMKFGEI_CTOR_OFFSET UNITYSDK_OFFSET(0x177C7170)
#define CJFCKMKFGEI_FPPEBKCCBIO_OFFSET UNITYSDK_OFFSET(0x177C6550)
#define CJFCKMKFGEI_GETCHOSENOPTIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x177C6C90)
#define CJFCKMKFGEI_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0x177C6BD0)
#define CJFCKMKFGEI_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x177C6610)

inline static constexpr unsigned int CJFCKMKFGEI_TypeDefinitionIndex = 64981;

	class CJFCKMKFGEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BCAJNMLLIED*>* CNPMNHGHKFG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_CTOR_OFFSET))(this);
		}

		::System::Void FPPEBKCCBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_FPPEBKCCBIO_OFFSET))(this);
		}

		::System::Void TakeReward(::System::UInt32 a1, ::System::Collections::Generic::List_1<::DOLMCHMNEIL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::DOLMCHMNEIL*>*))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_TAKEREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO(::JNGJOABNBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNGJOABNBIM*))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO_1(::IMIOIKDAJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMIOIKDAJOK*))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_ALJIOCDBMKO_1_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO_2(::JINIOBBNJPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JINIOBBNJPF*))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_ALJIOCDBMKO_2_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanTake(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_CHECKCANTAKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckHasTaken(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_CHECKHASTAKEN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetCurrentQuantity(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_GETCURRENTQUANTITY_OFFSET))(this, a1);
		}

		::System::UInt32 GetChosenOptionalRewardID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_GETCHOSENOPTIONALREWARDID_OFFSET))(this, a1, a2);
		}

	};
