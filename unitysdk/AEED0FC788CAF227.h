#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E2DE926113CB084F.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define AEED0FC788CAF227_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x269E760)
#define AEED0FC788CAF227_E7F9DA86244A97FE_1_OFFSET UNITYSDK_OFFSET(0x269EAE0)
#define AEED0FC788CAF227_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x269E7D0)
#define AEED0FC788CAF227__CTOR_OFFSET UNITYSDK_OFFSET(0x269EC80)

inline static constexpr unsigned int AEED0FC788CAF227_TypeDefinitionIndex = 6487;

class AEED0FC788CAF227 : public ::System::Object
{
public:
	::System::Boolean EA692957B26C7AC3; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::Dictionary_2<::E865F6F8B8B44C1E, ::System::Object*>* F86E29E8A76936A3; // 0x18
	::System::Collections::Generic::List_1<::System::UInt64>* B101151A35ECB8F5; // 0x20

	::UnityEngine::Object* E7F9DA86244A97FE_1(::E865F6F8B8B44C1E EFF983A80A48BB2A, ::E2DE926113CB084F A288CB28FC2A6DA3)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::E865F6F8B8B44C1E, ::E2DE926113CB084F))((::PBYTE)hIl2Cpp + AEED0FC788CAF227_E7F9DA86244A97FE_1_OFFSET))(this, EFF983A80A48BB2A, A288CB28FC2A6DA3);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEED0FC788CAF227_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEED0FC788CAF227__CTOR_OFFSET))(this);
	}

	static ::AEED0FC788CAF227* BD9CD726F874B523()
	{
		return ((::AEED0FC788CAF227*(*)())((::PBYTE)hIl2Cpp + AEED0FC788CAF227_BD9CD726F874B523_OFFSET))();
	}
};
