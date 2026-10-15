#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
namespace System { class Object; }
namespace System { class String; }

#define OEGABLPGGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE25450)
#define OEGABLPGGIE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE24EC0)
#define OEGABLPGGIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE25440)
#define OEGABLPGGIE_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0xBE24F10)
#define OEGABLPGGIE_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBE25420)
#define OEGABLPGGIE_IHCGLGFILCH_OFFSET UNITYSDK_OFFSET(0xBE253C0)
#define OEGABLPGGIE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE24E40)
#define OEGABLPGGIE_PBBFABLNIGC_OFFSET UNITYSDK_OFFSET(0xBE251E0)
#define OEGABLPGGIE_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0xBE25430)

inline static constexpr unsigned int OEGABLPGGIE_TypeDefinitionIndex = 73379;

	class OEGABLPGGIE : public ::System::Object
	{
	public:
		::System::Int32 _Precision_k__BackingField; // 0x10
		static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEGABLPGGIE")->GetStaticField(0x5FD50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGABLPGGIE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGABLPGGIE_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEGABLPGGIE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGABLPGGIE_CLEAR_OFFSET))(this);
		}

		::System::String* DDCENCNBHDN(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + OEGABLPGGIE_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

		static ::System::String* PBBFABLNIGC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OEGABLPGGIE_PBBFABLNIGC_OFFSET))(a1);
		}

		static ::System::String* IHCGLGFILCH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OEGABLPGGIE_IHCGLGFILCH_OFFSET))(a1);
		}

		::System::Int32 get_Precision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGABLPGGIE_GET_PRECISION_OFFSET))(this);
		}

		::System::Void set_Precision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEGABLPGGIE_SET_PRECISION_OFFSET))(this, a1);
		}

	};
