#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMKFHBKCFGN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class DDPFPHOOCLN;
class DEBEAKKOHLN;
class JNPKHNPNMFC;
class PDJCPAFHFIN;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define PDJCPAFHFIN_CJOEIGGINGO_OFFSET UNITYSDK_OFFSET(0xC00E410)
#define PDJCPAFHFIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC011870)
#define PDJCPAFHFIN_DDGJANGKHGM_OFFSET UNITYSDK_OFFSET(0xC010540)
#define PDJCPAFHFIN_DHJKJJLMDIE_OFFSET UNITYSDK_OFFSET(0xC00F510)
#define PDJCPAFHFIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00E6C0)
#define PDJCPAFHFIN_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC011860)
#define PDJCPAFHFIN_HIMFHMADFPC_OFFSET UNITYSDK_OFFSET(0xC00E200)
#define PDJCPAFHFIN_JDFLPLPJKNM_1_OFFSET UNITYSDK_OFFSET(0xC0106C0)
#define PDJCPAFHFIN_JDFLPLPJKNM_OFFSET UNITYSDK_OFFSET(0xC00FDC0)
#define PDJCPAFHFIN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC010D40)
#define PDJCPAFHFIN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC00E600)
#define PDJCPAFHFIN_LFFKFFCLPCJ_OFFSET UNITYSDK_OFFSET(0xC00FBA0)
#define PDJCPAFHFIN_LJMPPCOBMMD_OFFSET UNITYSDK_OFFSET(0xC00EDC0)
#define PDJCPAFHFIN_NBBFPODFPCG_1_OFFSET UNITYSDK_OFFSET(0xC00F180)
#define PDJCPAFHFIN_NBBFPODFPCG_OFFSET UNITYSDK_OFFSET(0xC00F050)
#define PDJCPAFHFIN_NNGNPIPECLO_OFFSET UNITYSDK_OFFSET(0xC00E140)
#define PDJCPAFHFIN_NNJLBOAOAAI_OFFSET UNITYSDK_OFFSET(0xC00FFC0)
#define PDJCPAFHFIN_NPMBPNOEKAK_OFFSET UNITYSDK_OFFSET(0xC00F270)
#define PDJCPAFHFIN_OFKMNDLDHIC_OFFSET UNITYSDK_OFFSET(0xC00F690)
#define PDJCPAFHFIN_OKCEBMECNGL_OFFSET UNITYSDK_OFFSET(0xC00E730)
#define PDJCPAFHFIN_OOMLFJGCECD_1_OFFSET UNITYSDK_OFFSET(0xC010B30)
#define PDJCPAFHFIN_OOMLFJGCECD_OFFSET UNITYSDK_OFFSET(0xC010980)
#define PDJCPAFHFIN_PLOLEHDCPNM_OFFSET UNITYSDK_OFFSET(0xC00FCD0)

inline static constexpr unsigned int PDJCPAFHFIN_TypeDefinitionIndex = 69837;

	class PDJCPAFHFIN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* MLKCONHHMGG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RendererMaterialCache*>* MAHGHAJKNMC; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DEBEAKKOHLN*>>* MKIBNBKNFFI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EHKNOEJBDPK; // 0x28
		::System::Collections::Generic::Dictionary_2<::Il2CppArray<::UnityEngine::Material*>*, ::DDPFPHOOCLN*>* IONMNMMPHLL; // 0x30
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DEBEAKKOHLN*>>* PAKBEHGFNLJ; // 0x38
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DEBEAKKOHLN*>>* OMNDMNNKEPM; // 0x40
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DEBEAKKOHLN*>>* AOJDBNIIFDG; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* LJDOJBCOGBI; // 0x50
		::System::Collections::Generic::Dictionary_2<::HMKFHBKCFGN, ::JNPKHNPNMFC*>* PMFNNDPNDKO; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::DEBEAKKOHLN*>* PJEJKNJFAFN; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* DPBDAEEALEM; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* JPCBNMCGBLM; // 0x70
		::System::Single PBJNHEPGICP; // 0x78
		::System::UInt32 LLKPCJNLJMP; // 0x7C
		::System::Int32 JIOMPGLFCLN; // 0x80
		::System::Int32 NNCGDFEPCAB; // 0x84
		static ::PDJCPAFHFIN** StaticGet_FLMODBLFAGD()
		{
			return (::PDJCPAFHFIN**)UnitySDK::FromName("", "PDJCPAFHFIN")->GetStaticField(0xDF50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_CTOR_OFFSET))(this);
		}

		::System::Void NNGNPIPECLO(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_NNGNPIPECLO_OFFSET))(this, a1);
		}

		::System::Void HIMFHMADFPC(::DDPFPHOOCLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDPFPHOOCLN*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_HIMFHMADFPC_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* CJOEIGGINGO(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_CJOEIGGINGO_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RendererMaterialCache* LJMPPCOBMMD(::UnityEngine::Renderer* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::RendererMaterialCache*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_LJMPPCOBMMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NBBFPODFPCG(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_NBBFPODFPCG_OFFSET))(this, a1);
		}

		::System::Void NBBFPODFPCG_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_NBBFPODFPCG_1_OFFSET))(this, a1);
		}

		::DEBEAKKOHLN* NPMBPNOEKAK(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_NPMBPNOEKAK_OFFSET))(this, a1, a2);
		}

		::System::Void DHJKJJLMDIE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_DHJKJJLMDIE_OFFSET))(this, a1);
		}

		::System::Void OKCEBMECNGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_OKCEBMECNGL_OFFSET))(this);
		}

		::System::Void OFKMNDLDHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_OFKMNDLDHIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* LFFKFFCLPCJ()
		{
			return ((::System::Collections::Generic::List_1<::DEBEAKKOHLN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_LFFKFFCLPCJ_OFFSET))(this);
		}

		::System::Void PLOLEHDCPNM(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_PLOLEHDCPNM_OFFSET))(this, a1);
		}

		::System::Void JDFLPLPJKNM(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_JDFLPLPJKNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDGJANGKHGM(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_DDGJANGKHGM_OFFSET))(this, a1);
		}

		::System::Void JDFLPLPJKNM_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_JDFLPLPJKNM_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OOMLFJGCECD(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_OOMLFJGCECD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOMLFJGCECD_1(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_OOMLFJGCECD_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NNJLBOAOAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_NNJLBOAOAAI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDJCPAFHFIN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		static ::PDJCPAFHFIN* GGBLHEHJBDO()
		{
			return ((::PDJCPAFHFIN*(*)())((::PBYTE)hIl2Cpp + PDJCPAFHFIN_GGBLHEHJBDO_OFFSET))();
		}

	};
