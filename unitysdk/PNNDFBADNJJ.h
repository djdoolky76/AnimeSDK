#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNNDFBADNJJ_PointState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }

#define PNNDFBADNJJ_BKDCMOJMNDL_OFFSET UNITYSDK_OFFSET(0xC34F6A0)
#define PNNDFBADNJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC34ED20)
#define PNNDFBADNJJ_DGGNHPBDFDM_OFFSET UNITYSDK_OFFSET(0xC34F300)
#define PNNDFBADNJJ_FIOFKNHMPCD_OFFSET UNITYSDK_OFFSET(0xC34F290)
#define PNNDFBADNJJ_GFDIDMJHFDA_OFFSET UNITYSDK_OFFSET(0xC34F210)
#define PNNDFBADNJJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC34EFC0)
#define PNNDFBADNJJ_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC34F030)
#define PNNDFBADNJJ_NAKLCDFEOCE_OFFSET UNITYSDK_OFFSET(0xC34F5A0)
#define PNNDFBADNJJ_PLKABJDCOCH_OFFSET UNITYSDK_OFFSET(0xC34F780)

	class PNNDFBADNJJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* GDEEJGLLLHA; // 0x10
		::Il2CppArray<::RPG::Client::UIStateCtrl*>* AAPNEOJKEIH; // 0x18
		::Il2CppArray<::RPG::Client::UIStateCtrl*>* MDGKBOMPLBP; // 0x20
		::System::Boolean HOFHCMFOLIN; // 0x28
		// static const ::System::String* JACGIOMODBK; // 0x0
		// static const ::System::String* BIJOOPFHDJF; // 0x0
		// static const ::System::String* CGIJAFOICML; // 0x0
		// static const ::System::String* KEJADFGOLKC; // 0x0
		// static const ::System::String* JGHNCIBDIHK; // 0x0
		::System::Void _ctor(::RPG::Client::UIStateCtrl* a1, ::RPG::Client::UIStateCtrl* a2, ::RPG::Client::UIStateCtrl* a3, ::RPG::Client::UIStateCtrl* a4, ::RPG::Client::UIStateCtrl* a5, ::RPG::Client::UIStateCtrl* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_LJBCDJNNBJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGGNHPBDFDM(::System::Int32 a1, ::PNNDFBADNJJ_PointState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PNNDFBADNJJ_PointState, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_DGGNHPBDFDM_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void BKDCMOJMNDL(::RPG::Client::UIStateCtrl* a1, ::PNNDFBADNJJ_PointState a2, ::PNNDFBADNJJ_PointState a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::Client::UIStateCtrl*, ::PNNDFBADNJJ_PointState, ::PNNDFBADNJJ_PointState, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_BKDCMOJMNDL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PLKABJDCOCH(::RPG::Client::UIStateCtrl* a1, ::PNNDFBADNJJ_PointState a2, ::PNNDFBADNJJ_PointState a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::Client::UIStateCtrl*, ::PNNDFBADNJJ_PointState, ::PNNDFBADNJJ_PointState, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_PLKABJDCOCH_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::PNNDFBADNJJ_PointState FIOFKNHMPCD(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::PNNDFBADNJJ_PointState(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_FIOFKNHMPCD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GFDIDMJHFDA(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_GFDIDMJHFDA_OFFSET))(a1);
		}

		static ::System::Void NAKLCDFEOCE(::RPG::Client::UIStateCtrl* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::UIStateCtrl*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNDFBADNJJ_NAKLCDFEOCE_OFFSET))(a1, a2, a3);
		}

	};
