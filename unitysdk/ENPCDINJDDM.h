#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCEBGLLMGPE;
class LIAIOEBDNEE;
class PAPOPANPGIJ;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define ENPCDINJDDM_CFLIMPAIIGJ_OFFSET UNITYSDK_OFFSET(0x1C5DB4F0)
#define ENPCDINJDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C606F40)
#define ENPCDINJDDM_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1C606E80)
#define ENPCDINJDDM_DMKNFMMPEMA_OFFSET UNITYSDK_OFFSET(0x1C606B20)
#define ENPCDINJDDM_HFODDGLNJGJ_OFFSET UNITYSDK_OFFSET(0x1C606970)
#define ENPCDINJDDM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6067B0)
#define ENPCDINJDDM_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1C606850)
#define ENPCDINJDDM_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x1C606D30)
#define ENPCDINJDDM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C606BA0)
#define ENPCDINJDDM_KPOBDDBABJG_OFFSET UNITYSDK_OFFSET(0x1C606B60)
#define ENPCDINJDDM_LNDJJFIKDKH_OFFSET UNITYSDK_OFFSET(0x1C606A40)
#define ENPCDINJDDM_LNKFDPNJMBC_OFFSET UNITYSDK_OFFSET(0x1C606AC0)
#define ENPCDINJDDM_ONIPLEMHAME_OFFSET UNITYSDK_OFFSET(0x1C6069D0)
#define ENPCDINJDDM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C6068E0)

	class ENPCDINJDDM : public ::System::Object
	{
	public:
		::PAPOPANPGIJ* DDDNLILNMKA; // 0x10
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x18
		::System::String* FOMHLLCANPB; // 0x20
		::GCEBGLLMGPE* HDMEPPFFIDK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCDINJDDM_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENPCDINJDDM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCDINJDDM_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCDINJDDM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HFODDGLNJGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_HFODDGLNJGJ_OFFSET))(this, a1);
		}

		::System::Void CFLIMPAIIGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_CFLIMPAIIGJ_OFFSET))(this, a1);
		}

		::System::Void ONIPLEMHAME(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENPCDINJDDM_ONIPLEMHAME_OFFSET))(this, a1, a2);
		}

		::System::Void LNDJJFIKDKH(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ENPCDINJDDM_LNDJJFIKDKH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIVariable* LNKFDPNJMBC(::System::String* a1)
		{
			return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_LNKFDPNJMBC_OFFSET))(this, a1);
		}

		::GCEBGLLMGPE* DMKNFMMPEMA()
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCDINJDDM_DMKNFMMPEMA_OFFSET))(this);
		}

		::System::String* KPOBDDBABJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPCDINJDDM_KPOBDDBABJG_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LIAIOEBDNEE* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LIAIOEBDNEE*, ::Entitas::IEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP_1(::LIAIOEBDNEE* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::LIAIOEBDNEE*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::AIConfig*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void DCADIANHPFD(::PAPOPANPGIJ* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PAPOPANPGIJ*, ::System::String*))((::PBYTE)hIl2Cpp + ENPCDINJDDM_DCADIANHPFD_OFFSET))(a1, a2);
		}

	};
