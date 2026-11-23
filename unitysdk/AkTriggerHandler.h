#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkTriggerBase_AAC2413668A9336F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKTRIGGERHANDLER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2915CC0)
#define AKTRIGGERHANDLER_BA4BE91C75D2EE5F_OFFSET UNITYSDK_OFFSET(0x2927D50)
#define AKTRIGGERHANDLER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2927E50)
#define AKTRIGGERHANDLER_EB9FD86C94D3D6A7_OFFSET UNITYSDK_OFFSET(0x2928300)
#define AKTRIGGERHANDLER_F243D14872192CC3_OFFSET UNITYSDK_OFFSET(0x2927EC0)
#define AKTRIGGERHANDLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2915CD0)
#define AKTRIGGERHANDLER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2927C50)
#define AKTRIGGERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x29286C0)
#define AKTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2928710)

inline static constexpr unsigned int AkTriggerHandler_TypeDefinitionIndex = 20434;

class AkTriggerHandler : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_B78FD685FEFC0C3A()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AkTriggerHandler_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean B1BAF6E28C299750; // 0x20
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::System::Int32>* triggerList; // 0x28
	::System::Boolean useOtherObject; // 0x30

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void BA4BE91C75D2EE5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_BA4BE91C75D2EE5F_OFFSET))(this);
	}

	::System::Void F243D14872192CC3(::System::Collections::Generic::List_1<::System::Int32>* E2D202392BA65BAF, ::AkTriggerBase_AAC2413668A9336F* A8A268F171D860EC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_AAC2413668A9336F*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_F243D14872192CC3_OFFSET))(this, E2D202392BA65BAF, A8A268F171D860EC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER__CCTOR_OFFSET))();
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void EB9FD86C94D3D6A7(::System::Collections::Generic::List_1<::System::Int32>* E2D202392BA65BAF, ::AkTriggerBase_AAC2413668A9336F* A8A268F171D860EC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::AkTriggerBase_AAC2413668A9336F*))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_EB9FD86C94D3D6A7_OFFSET))(this, E2D202392BA65BAF, A8A268F171D860EC);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERHANDLER_BF13C91AD80643D2_OFFSET))(this);
	}
};
