#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class BKPEADLKFGJ;
class KOAOAKKCCPK_AHOLCAKHGMC;
namespace System { class String; }

#define KOAOAKKCCPK_ABACKOIPNJO_OFFSET UNITYSDK_OFFSET(0xB589210)
#define KOAOAKKCCPK_CTOR_OFFSET UNITYSDK_OFFSET(0xB589110)
#define KOAOAKKCCPK_NDHJKKDPGMO_1_OFFSET UNITYSDK_OFFSET(0xB589270)
#define KOAOAKKCCPK_NDHJKKDPGMO_OFFSET UNITYSDK_OFFSET(0xB589160)

inline static constexpr unsigned int KOAOAKKCCPK_TypeDefinitionIndex = 72343;

	class KOAOAKKCCPK : public ::System::Object
	{
	public:
		::KOAOAKKCCPK_AHOLCAKHGMC* JGOCPIOEJNJ; // 0x10
		::System::Void _ctor(::KOAOAKKCCPK_AHOLCAKHGMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOAOAKKCCPK_AHOLCAKHGMC*))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_CTOR_OFFSET))(this, a1);
		}

		::System::Void NDHJKKDPGMO(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_NDHJKKDPGMO_OFFSET))(this, a1);
		}

		::System::Void NDHJKKDPGMO_1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_NDHJKKDPGMO_1_OFFSET))(this, a1);
		}

		::BKPEADLKFGJ* ABACKOIPNJO()
		{
			return ((::BKPEADLKFGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_ABACKOIPNJO_OFFSET))(this);
		}

	};
