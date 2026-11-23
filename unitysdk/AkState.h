#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkDragDropTriggerHandler.h"

namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class State; }
namespace UnityEngine { class GameObject; }

#define AKSTATE_B60CEDA00387A3B9_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKSTATE_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x29244D0)
#define AKSTATE_E3411B0751C760CF_OFFSET UNITYSDK_OFFSET(0x2924640)
#define AKSTATE_ED275465BEDF56A2_OFFSET UNITYSDK_OFFSET(0x2924710)
#define AKSTATE_F44A32D482753C3A_OFFSET UNITYSDK_OFFSET(0x2924590)
#define AKSTATE_FBB7DD023CC868DE_OFFSET UNITYSDK_OFFSET(0x2924660)
#define AKSTATE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915CB0)
#define AKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x29244F0)

inline static constexpr unsigned int AkState_TypeDefinitionIndex = 20448;

class AkState : public ::AkDragDropTriggerHandler
{
public:
	::AK::Wwise::State* data; // 0x38
	::System::Int32 valueIdInternal; // 0x40
	::System::Int32 groupIdInternal; // 0x44
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x48
	::Il2CppArray<::System::Byte>* groupGuidInternal; // 0x50

	::System::Int32 ED275465BEDF56A2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_ED275465BEDF56A2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE__CTOR_OFFSET))(this);
	}

	::System::Int32 E3411B0751C760CF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_E3411B0751C760CF_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* FBB7DD023CC868DE()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_FBB7DD023CC868DE_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSTATE_BA5D948B943E88B1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::Il2CppArray<::System::Byte>* F44A32D482753C3A()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_F44A32D482753C3A_OFFSET))(this);
	}

	::AK::Wwise::BaseType* B60CEDA00387A3B9()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTATE_B60CEDA00387A3B9_OFFSET))(this);
	}
};
