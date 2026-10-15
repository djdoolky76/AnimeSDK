#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KGMPJMIAPCI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PCGKKAMOHBE_AKKPEONJFFK_OFFSET UNITYSDK_OFFSET(0xC000540)
#define PCGKKAMOHBE_CTOR_OFFSET UNITYSDK_OFFSET(0xC000730)
#define PCGKKAMOHBE_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBFFFB60)
#define PCGKKAMOHBE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBFFFC40)
#define PCGKKAMOHBE_GHDNPKNPCDA_OFFSET UNITYSDK_OFFSET(0xBFFFCB0)
#define PCGKKAMOHBE_HBIDGLCEAGM_OFFSET UNITYSDK_OFFSET(0xBFFFAC0)
#define PCGKKAMOHBE_LFINMLHCELH_OFFSET UNITYSDK_OFFSET(0xC000330)
#define PCGKKAMOHBE_OFGLEAFJGAN_OFFSET UNITYSDK_OFFSET(0xC000250)
#define PCGKKAMOHBE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBFFFB10)
#define PCGKKAMOHBE_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBFFFA50)
#define PCGKKAMOHBE_OOOKCBIBHBA_OFFSET UNITYSDK_OFFSET(0xC000060)
#define PCGKKAMOHBE_OPOCHDENOHL_OFFSET UNITYSDK_OFFSET(0xC0003B0)
#define PCGKKAMOHBE__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFFFBB0)

	class PCGKKAMOHBE : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::System::String*>* DBIABMGPFME; // 0x60
		::System::Collections::Generic::List_1<::KGMPJMIAPCI*>* MLJDAEMEBFJ; // 0x68
		::UnityEngine::Transform* NBAPJOBMGNF; // 0x70
		::System::Int32 DEBFEIKENAO; // 0x78
		// static const ::System::String* LJPHIHJHIAJ; // 0x0
		// static const ::System::String* CMFAEPNLGIB; // 0x0
		// static const ::System::String* MGDFDECEKGP; // 0x0
		// static const ::System::String* KCMFDJLBJPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_CTOR_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HBIDGLCEAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_HBIDGLCEAGM_OFFSET))(this);
		}

		::System::Void GHDNPKNPCDA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_GHDNPKNPCDA_OFFSET))(this, a1, a2);
		}

		::System::Void OPOCHDENOHL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OPOCHDENOHL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOOKCBIBHBA(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OOOKCBIBHBA_OFFSET))(this, a1, a2);
		}

		::System::Void OFGLEAFJGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_OFGLEAFJGAN_OFFSET))(this);
		}

		::System::String* LFINMLHCELH(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_LFINMLHCELH_OFFSET))(this, a1, a2);
		}

		::System::Void AKKPEONJFFK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCGKKAMOHBE_AKKPEONJFFK_OFFSET))(this, a1);
		}

	};
