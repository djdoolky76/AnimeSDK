#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/CarSlotType.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/System/Nullable_1.h"
class MONJFDPKFBA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define NOGJOIKFJGE_BBCFANNMFOA_OFFSET UNITYSDK_OFFSET(0xBCE6620)
#define NOGJOIKFJGE_BDNHCLGJADP_OFFSET UNITYSDK_OFFSET(0xBCE6240)
#define NOGJOIKFJGE_BHKFMHPJCGD_OFFSET UNITYSDK_OFFSET(0xBCE7440)
#define NOGJOIKFJGE_BKKONCGMFFE_OFFSET UNITYSDK_OFFSET(0xBCE5150)
#define NOGJOIKFJGE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCE8500)
#define NOGJOIKFJGE_CHNAFEFNFHM_OFFSET UNITYSDK_OFFSET(0xBCE79A0)
#define NOGJOIKFJGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE4CD0)
#define NOGJOIKFJGE_DFHIPDBGKFO_OFFSET UNITYSDK_OFFSET(0xBCE6FE0)
#define NOGJOIKFJGE_DINJFKKHCLM_OFFSET UNITYSDK_OFFSET(0xBCE5430)
#define NOGJOIKFJGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE7C00)
#define NOGJOIKFJGE_DKKDGKPPDJE_OFFSET UNITYSDK_OFFSET(0xBCE5390)
#define NOGJOIKFJGE_FNBCEONFIJG_OFFSET UNITYSDK_OFFSET(0xBCE7C50)
#define NOGJOIKFJGE_GOPANPABLIE_OFFSET UNITYSDK_OFFSET(0xBCE6B00)
#define NOGJOIKFJGE_HBLCMLHNMBN_OFFSET UNITYSDK_OFFSET(0xBCE6F30)
#define NOGJOIKFJGE_IEANEHKAGLC_OFFSET UNITYSDK_OFFSET(0xBCE8220)
#define NOGJOIKFJGE_JJNMOCNGGLO_OFFSET UNITYSDK_OFFSET(0xBCE78E0)
#define NOGJOIKFJGE_JLGHJNPPCMC_OFFSET UNITYSDK_OFFSET(0xBCE83C0)
#define NOGJOIKFJGE_KGHMNNLHOJK_OFFSET UNITYSDK_OFFSET(0xBCE5E20)
#define NOGJOIKFJGE_LANLOPHDPID_OFFSET UNITYSDK_OFFSET(0xBCE6950)
#define NOGJOIKFJGE_LAPHBDLCIDB_OFFSET UNITYSDK_OFFSET(0xBCE4EF0)
#define NOGJOIKFJGE_LKOLBMMAPDE_OFFSET UNITYSDK_OFFSET(0xBCE5CF0)
#define NOGJOIKFJGE_MKALHGMFFJO_OFFSET UNITYSDK_OFFSET(0xBCE6430)
#define NOGJOIKFJGE_NAKIKEPOPHC_OFFSET UNITYSDK_OFFSET(0xBCE76A0)
#define NOGJOIKFJGE_NDJALBFBCEE_OFFSET UNITYSDK_OFFSET(0xBCE6050)
#define NOGJOIKFJGE_OAIMDJELLKA_OFFSET UNITYSDK_OFFSET(0xBCE66F0)
#define NOGJOIKFJGE_OAMINILLJBK_OFFSET UNITYSDK_OFFSET(0xBCE79F0)
#define NOGJOIKFJGE_OGGAECIBJHF_OFFSET UNITYSDK_OFFSET(0xBCE6520)
#define NOGJOIKFJGE_OMPCJOHICOP_OFFSET UNITYSDK_OFFSET(0xBCE5990)
#define NOGJOIKFJGE_OOHEABNLHKN_OFFSET UNITYSDK_OFFSET(0xBCE7F30)
#define NOGJOIKFJGE_PCHGGMJFNKI_OFFSET UNITYSDK_OFFSET(0xBCE6BE0)

inline static constexpr unsigned int NOGJOIKFJGE_TypeDefinitionIndex = 81765;

	class NOGJOIKFJGE : public ::System::Object
	{
	public:
		::UnityEngine::Material* EPEDOBNKDLF; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::ValueTuple_2<::UnityEngine::GameObject*, ::UnityEngine::GameObject*>>* DEKIFDHJENM; // 0x18
		::Il2CppArray<::UnityEngine::Texture*>* JMFOCJGFNDB; // 0x20
		::UnityEngine::GameObject* MIPBLBPFAHN; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::System::String*>* MNAAOABJNBK; // 0x30
		::System::String* KPCBGLNNIPD; // 0x38
		::Il2CppArray<::UnityEngine::GameObject*>* OPMOMFEFAFP; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::B51Racing::CarSlotType, ::UnityEngine::Material*>* NNFPPGJJBDO; // 0x48
		::UnityEngine::GameObject* LAGMCOKAFNI; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* AEIGNJDCKDN; // 0x58
		::System::UInt32 FGDDLAMEBFP; // 0x60
		::System::Int32 FKBDOPJFBNI; // 0x64
		::UnityEngine::Color GLAMDOPKGIF; // 0x68
		::System::Boolean NEOLELCAJEK; // 0x78
		static ::System::Int32* StaticGet_LMJPOMLNAJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NOGJOIKFJGE")->GetStaticField(0x12990);
		}

		// static const ::System::String* FMNHMAOJOIL; // 0x0
		// static const ::System::String* KNABIJOPHFE; // 0x0
		// static const ::System::String* EJHJELCIDJI; // 0x0
		// static const ::System::String* MFOJDDIDIFF; // 0x0
		// static const ::System::Object OLKODBGHJKM; // 0x0
		// static const ::System::Object JCMCCGNIALA; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOGJOIKFJGE_CCTOR_OFFSET))();
		}

		::System::Void LAPHBDLCIDB(::MONJFDPKFBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_LAPHBDLCIDB_OFFSET))(this, a1);
		}

		::System::Void DINJFKKHCLM(::RPG::Client::B51Racing::CarSlotType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType, ::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_DINJFKKHCLM_OFFSET))(this, a1, a2);
		}

		::System::Void BDNHCLGJADP(::RPG::Client::B51Racing::CarSlotType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_BDNHCLGJADP_OFFSET))(this, a1);
		}

		::System::Void KGHMNNLHOJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_KGHMNNLHOJK_OFFSET))(this, a1);
		}

		::System::Void OMPCJOHICOP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_OMPCJOHICOP_OFFSET))(this, a1);
		}

		::System::Void LKOLBMMAPDE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_LKOLBMMAPDE_OFFSET))(this, a1);
		}

		::System::Void CHNAFEFNFHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_CHNAFEFNFHM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_DISPOSE_OFFSET))(this);
		}

		::System::Void FNBCEONFIJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_FNBCEONFIJG_OFFSET))(this);
		}

		::System::Void NAKIKEPOPHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_NAKIKEPOPHC_OFFSET))(this);
		}

		::UnityEngine::Transform* MKALHGMFFJO(::RPG::Client::B51Racing::CarSlotType a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_MKALHGMFFJO_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* IEANEHKAGLC(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_IEANEHKAGLC_OFFSET))(a1, a2);
		}

		static ::System::String* OGGAECIBJHF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_OGGAECIBJHF_OFFSET))(a1);
		}

		static ::UnityEngine::Material* BBCFANNMFOA(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_BBCFANNMFOA_OFFSET))(a1, a2);
		}

		::System::Void JJNMOCNGGLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_JJNMOCNGGLO_OFFSET))(this);
		}

		::System::Void OAIMDJELLKA(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_OAIMDJELLKA_OFFSET))(this, a1, a2);
		}

		::System::Void OAMINILLJBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_OAMINILLJBK_OFFSET))(this);
		}

		::System::Void GOPANPABLIE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_GOPANPABLIE_OFFSET))(this, a1);
		}

		::System::Void BHKFMHPJCGD(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_BHKFMHPJCGD_OFFSET))(this, a1);
		}

		static ::System::Void LANLOPHDPID(::UnityEngine::GameObject* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_LANLOPHDPID_OFFSET))(a1, a2);
		}

		static ::System::Nullable_1<::RPG::Client::B51Racing::CarSlotType> DKKDGKPPDJE(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Nullable_1<::RPG::Client::B51Racing::CarSlotType>(*)(::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_DKKDGKPPDJE_OFFSET))(a1);
		}

		static ::System::Void HBLCMLHNMBN(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_HBLCMLHNMBN_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean PCHGGMJFNKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_PCHGGMJFNKI_OFFSET))(this);
		}

		::System::Void DFHIPDBGKFO(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_DFHIPDBGKFO_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void JLGHJNPPCMC(::UnityEngine::GameObject* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_JLGHJNPPCMC_OFFSET))(a1, a2);
		}

		::System::Void BKKONCGMFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_BKKONCGMFFE_OFFSET))(this);
		}

		::System::Void OOHEABNLHKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_OOHEABNLHKN_OFFSET))(this);
		}

		::System::Void NDJALBFBCEE(::MONJFDPKFBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + NOGJOIKFJGE_NDJALBFBCEE_OFFSET))(this, a1);
		}

	};
