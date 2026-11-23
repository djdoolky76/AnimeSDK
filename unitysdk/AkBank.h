#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

namespace AK::Wwise { class Bank; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKBANK_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2915860)
#define AKBANK_AB47FB01EC556AB4_OFFSET UNITYSDK_OFFSET(0x2915BA0)
#define AKBANK_BA5D948B943E88B1_1_OFFSET UNITYSDK_OFFSET(0x2915780)
#define AKBANK_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x2915830)
#define AKBANK_EEB9DDFB10458E56_OFFSET UNITYSDK_OFFSET(0x2915A30)
#define AKBANK_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2915970)
#define AKBANK_FBB7DD023CC868DE_OFFSET UNITYSDK_OFFSET(0x2915C00)
#define AKBANK_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915670)
#define AKBANK__CTOR_OFFSET UNITYSDK_OFFSET(0x2915A50)

inline static constexpr unsigned int AkBank_TypeDefinitionIndex = 20427;

class AkBank : public ::AkTriggerHandler
{
public:
	::AK::Wwise::Bank* data; // 0x38
	::System::Boolean decodeBank; // 0x40
	::System::Boolean overrideLoadSetting; // 0x41
	::System::Boolean loadAsynchronous; // 0x42
	::System::Boolean saveDecodedBank; // 0x43
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Int32>* unloadTriggerList; // 0x48
	::System::String* bankNameInternal; // 0x50
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x58

	::Il2CppArray<::System::Byte>* FBB7DD023CC868DE()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_FBB7DD023CC868DE_OFFSET))(this);
	}

	::System::String* AB47FB01EC556AB4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_AB47FB01EC556AB4_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_BA5D948B943E88B1_OFFSET))(this);
	}

	::System::Void EEB9DDFB10458E56(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKBANK_EEB9DDFB10458E56_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1_1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKBANK_BA5D948B943E88B1_1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK__CTOR_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANK_AB36E0EE549986E5_OFFSET))(this);
	}
};
