#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
class IMIOIKDAJOK;
class JINIOBBNJPF;
class JNGJOABNBIM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJFCKMKFGEI_ALJIOCDBMKO_1_OFFSET UNITYSDK_OFFSET(0xD1FBAB0)
#define CJFCKMKFGEI_ALJIOCDBMKO_2_OFFSET UNITYSDK_OFFSET(0xD1FBB60)
#define CJFCKMKFGEI_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xD1FB990)
#define CJFCKMKFGEI_CHECKCANTAKE_OFFSET UNITYSDK_OFFSET(0xD1FBC10)
#define CJFCKMKFGEI_CHECKHASTAKEN_OFFSET UNITYSDK_OFFSET(0xD1FBCE0)
#define CJFCKMKFGEI_CTOR_OFFSET UNITYSDK_OFFSET(0xD1FBE80)
#define CJFCKMKFGEI_FPPEBKCCBIO_OFFSET UNITYSDK_OFFSET(0xD1FB700)
#define CJFCKMKFGEI_GETCURRENTQUANTITY_OFFSET UNITYSDK_OFFSET(0xD1FBDC0)
#define CJFCKMKFGEI_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD1FB7C0)

inline static constexpr unsigned int CJFCKMKFGEI_TypeDefinitionIndex = 63539;

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

		::System::Void TakeReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFCKMKFGEI_TAKEREWARD_OFFSET))(this, a1);
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

	};
