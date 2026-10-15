#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"
class OHHKEHGMALH;

#define OHHKEHGMALH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE6B8C0)
#define OHHKEHGMALH_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE6B860)
#define OHHKEHGMALH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6B850)
#define OHHKEHGMALH_LCIKHMKJIAD_OFFSET UNITYSDK_OFFSET(0xBE6B870)
#define OHHKEHGMALH_PHONGPNKEFD_OFFSET UNITYSDK_OFFSET(0xBE6B980)

inline static constexpr unsigned int OHHKEHGMALH_TypeDefinitionIndex = 58200;

	class OHHKEHGMALH : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleOperationType>* FKOGNAFPIGP; // 0x10
		::System::Int32 GMGJFJCDGGN; // 0x18
		static ::OHHKEHGMALH** StaticGet_FLMMCFGJCHP()
		{
			return (::OHHKEHGMALH**)UnitySDK::FromName("", "OHHKEHGMALH")->GetStaticField(0x65CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEHGMALH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + OHHKEHGMALH_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void LCIKHMKJIAD(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + OHHKEHGMALH_LCIKHMKJIAD_OFFSET))(this, a1);
		}

		static ::OHHKEHGMALH* BPLPBPMEODA(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1)
		{
			return ((::OHHKEHGMALH*(*)(::Il2CppArray<::RPG::GameCore::BattleOperationType>*))((::PBYTE)hIl2Cpp + OHHKEHGMALH_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::OHHKEHGMALH* PHONGPNKEFD()
		{
			return ((::OHHKEHGMALH*(*)())((::PBYTE)hIl2Cpp + OHHKEHGMALH_PHONGPNKEFD_OFFSET))();
		}

	};
