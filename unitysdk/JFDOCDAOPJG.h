#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEMIJCPBEO.h"
#include "unitysdk/ScenenLightManager/AfterExecOperation.h"
#include "unitysdk/ScenenLightManager/LightOp.h"
#include "unitysdk/UnityEngine/Vector4.h"
class CELOMGMBCKK;
class CNNIBJAKKOI;
class DHBOGGBEMFF;
class DHBOGGBEMFF_FANENNLGHPH;
class JFDOCDAOPJG;
class MEIGMBOLDOF;
class ONEMIJCPBEO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define JFDOCDAOPJG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x16647FA0)
#define JFDOCDAOPJG_ACMHECPDDDG_OFFSET UNITYSDK_OFFSET(0x16648390)
#define JFDOCDAOPJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x16649200)
#define JFDOCDAOPJG_COKMDIMBLHN_1_OFFSET UNITYSDK_OFFSET(0x16647BE0)
#define JFDOCDAOPJG_COKMDIMBLHN_2_OFFSET UNITYSDK_OFFSET(0x16647DC0)
#define JFDOCDAOPJG_COKMDIMBLHN_3_OFFSET UNITYSDK_OFFSET(0x16647C70)
#define JFDOCDAOPJG_COKMDIMBLHN_4_OFFSET UNITYSDK_OFFSET(0x16647E70)
#define JFDOCDAOPJG_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0x16647B60)
#define JFDOCDAOPJG_CTOR_OFFSET UNITYSDK_OFFSET(0x16647AD0)
#define JFDOCDAOPJG_DGMNCELGAHM_OFFSET UNITYSDK_OFFSET(0x166478F0)
#define JFDOCDAOPJG_DPLJBPDEJMA_OFFSET UNITYSDK_OFFSET(0x16647870)
#define JFDOCDAOPJG_GAHFBGHFEEF_OFFSET UNITYSDK_OFFSET(0x16649120)
#define JFDOCDAOPJG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16648500)
#define JFDOCDAOPJG_JINFPHCABMO_OFFSET UNITYSDK_OFFSET(0x16648290)
#define JFDOCDAOPJG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16648160)
#define JFDOCDAOPJG_KKMAEKDGECI_OFFSET UNITYSDK_OFFSET(0x16648280)
#define JFDOCDAOPJG_LIBDHMPPLDP_OFFSET UNITYSDK_OFFSET(0x166491B0)
#define JFDOCDAOPJG_NKLKAGGNIDK_OFFSET UNITYSDK_OFFSET(0x166490D0)
#define JFDOCDAOPJG_OHLCJLBMKCL_OFFSET UNITYSDK_OFFSET(0x166482F0)
#define JFDOCDAOPJG_OPGIGLPBCIF_OFFSET UNITYSDK_OFFSET(0x16648350)

inline static constexpr unsigned int JFDOCDAOPJG_TypeDefinitionIndex = 49122;

	class JFDOCDAOPJG : public ::ONEMIJCPBEO
	{
	public:
		::UnityEngine::GameObject* EHJGKDIFINJ; // 0x38
		::CNNIBJAKKOI* EADOBHDMBAN; // 0x40
		::CELOMGMBCKK* JMPKCMOMBCA; // 0x48
		::DHBOGGBEMFF_FANENNLGHPH* NDFNNOHBHBF; // 0x50
		::System::String* LGGFAPBKNHB; // 0x58
		::System::Object* OBLLIIPMBKG; // 0x60
		::System::Byte _padding0[0x10];
		::ScenenLightManager::LightOp BGKEEIDDGOB; // 0x78
		::System::Boolean MPHLLNPEBLA; // 0x7C
		::System::Byte _padding1[0x3];
		::System::Int32 KBKCIKHHFDL; // 0x80
		::System::Int32 JHBAAEHHPDE; // 0x84
		static ::System::Collections::Generic::Queue_1<::JFDOCDAOPJG*>** StaticGet_BCMFCPOOAEJ()
		{
			return (::System::Collections::Generic::Queue_1<::JFDOCDAOPJG*>**)UnitySDK::FromName("", "JFDOCDAOPJG")->GetStaticField(0xC0D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDOCDAOPJG_CCTOR_OFFSET))();
		}

		static ::System::Int32 DPLJBPDEJMA()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + JFDOCDAOPJG_DPLJBPDEJMA_OFFSET))();
		}

		static ::JFDOCDAOPJG* DGMNCELGAHM()
		{
			return ((::JFDOCDAOPJG*(*)())((::PBYTE)hIl2Cpp + JFDOCDAOPJG_DGMNCELGAHM_OFFSET))();
		}

		static ::JFDOCDAOPJG* COKMDIMBLHN(::CELOMGMBCKK* a1)
		{
			return ((::JFDOCDAOPJG*(*)(::CELOMGMBCKK*))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_COKMDIMBLHN_OFFSET))(a1);
		}

		static ::JFDOCDAOPJG* COKMDIMBLHN_1(::CNNIBJAKKOI* a1, ::ScenenLightManager::LightOp a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::JFDOCDAOPJG*(*)(::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_COKMDIMBLHN_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::JFDOCDAOPJG* COKMDIMBLHN_2(::CNNIBJAKKOI* a1, ::ScenenLightManager::LightOp a2, ::System::Int32 a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::JFDOCDAOPJG*(*)(::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_COKMDIMBLHN_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::JFDOCDAOPJG* COKMDIMBLHN_3(::CNNIBJAKKOI* a1, ::ScenenLightManager::LightOp a2, ::System::Int32 a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::JFDOCDAOPJG*(*)(::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_COKMDIMBLHN_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::JFDOCDAOPJG* COKMDIMBLHN_4(::CNNIBJAKKOI* a1, ::ScenenLightManager::LightOp a2, ::System::Int32 a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5, ::UnityEngine::Vector4 a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::JFDOCDAOPJG*(*)(::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Int32, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_COKMDIMBLHN_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_KHGIKBFDLFB_OFFSET))(this);
		}

		::ScenenLightManager::LightOp KKMAEKDGECI()
		{
			return ((::ScenenLightManager::LightOp(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_KKMAEKDGECI_OFFSET))(this);
		}

		::System::Int32 JINFPHCABMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_JINFPHCABMO_OFFSET))(this);
		}

		::System::Void OHLCJLBMKCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_OHLCJLBMKCL_OFFSET))(this);
		}

		::System::Void OPGIGLPBCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_OPGIGLPBCIF_OFFSET))(this);
		}

		::System::Boolean ACMHECPDDDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_ACMHECPDDDG_OFFSET))(this);
		}

		::ScenenLightManager::AfterExecOperation HKKFFCBJOKM(::DHBOGGBEMFF* a1)
		{
			return ((::ScenenLightManager::AfterExecOperation(*)(::PVOID, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void NKLKAGGNIDK(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_NKLKAGGNIDK_OFFSET))(this, a1);
		}

		::System::Boolean GAHFBGHFEEF(::ONEMIJCPBEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONEMIJCPBEO*))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_GAHFBGHFEEF_OFFSET))(this, a1);
		}

		::System::Boolean LIBDHMPPLDP(::ONEMIJCPBEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONEMIJCPBEO*))((::PBYTE)hIl2Cpp + JFDOCDAOPJG_LIBDHMPPLDP_OFFSET))(this, a1);
		}

	};
