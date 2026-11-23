#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class FCECB52A00C1344E;

#define AA7CC22A25F3C50A_AFA23A83D624E5A8_OFFSET UNITYSDK_OFFSET(0x247C870)
#define AA7CC22A25F3C50A_B880A85CD1F6C9DB_OFFSET UNITYSDK_OFFSET(0x247C730)
#define AA7CC22A25F3C50A_BA9559AE18AC3344_OFFSET UNITYSDK_OFFSET(0x247C5A0)
#define AA7CC22A25F3C50A_BD2224CC7690F9E1_OFFSET UNITYSDK_OFFSET(0x247C640)
#define AA7CC22A25F3C50A_BEFDE34893BF683E_OFFSET UNITYSDK_OFFSET(0x247C7C0)
#define AA7CC22A25F3C50A__CCTOR_OFFSET UNITYSDK_OFFSET(0x247C9A0)

inline static constexpr unsigned int AA7CC22A25F3C50A_TypeDefinitionIndex = 4573;

class AA7CC22A25F3C50A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::UInt32>** StaticGet_E075B8A2949ECA63()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AA7CC22A25F3C50A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FCECB52A00C1344E<::E2DE926113CB084F>** StaticGet_AFFA199F967D2FD5()
	{
		return (::FCECB52A00C1344E<::E2DE926113CB084F>**)Il2CppClass::FromTypeDefinitionIndex(AA7CC22A25F3C50A_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean BEFDE34893BF683E(::E2DE926113CB084F F564B9A293C703ED)
	{
		return ((::System::Boolean(*)(::E2DE926113CB084F))((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A_BEFDE34893BF683E_OFFSET))(F564B9A293C703ED);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::E2DE926113CB084F>* B880A85CD1F6C9DB()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::E2DE926113CB084F>*(*)())((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A_B880A85CD1F6C9DB_OFFSET))();
	}

	static ::System::Void AFA23A83D624E5A8(::E2DE926113CB084F FF807B1207717EB4, ::System::UInt32 B8FD51FFA29BB0AE, ::System::Boolean E8E4B18F8423D406)
	{
		return ((::System::Void(*)(::E2DE926113CB084F, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A_AFA23A83D624E5A8_OFFSET))(FF807B1207717EB4, B8FD51FFA29BB0AE, E8E4B18F8423D406);
	}

	static ::System::UInt32 BD2224CC7690F9E1(::E2DE926113CB084F FF807B1207717EB4)
	{
		return ((::System::UInt32(*)(::E2DE926113CB084F))((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A_BD2224CC7690F9E1_OFFSET))(FF807B1207717EB4);
	}

	static ::System::Collections::Generic::IEnumerable_1<::E2DE926113CB084F>* BA9559AE18AC3344()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::E2DE926113CB084F>*(*)())((::PBYTE)hIl2Cpp + AA7CC22A25F3C50A_BA9559AE18AC3344_OFFSET))();
	}
};
