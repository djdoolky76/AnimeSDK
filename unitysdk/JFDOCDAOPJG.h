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

#define JFDOCDAOPJG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB991530)
#define JFDOCDAOPJG_ACMHECPDDDG_OFFSET UNITYSDK_OFFSET(0xB991910)
#define JFDOCDAOPJG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9927A0)
#define JFDOCDAOPJG_COKMDIMBLHN_1_OFFSET UNITYSDK_OFFSET(0xB991170)
#define JFDOCDAOPJG_COKMDIMBLHN_2_OFFSET UNITYSDK_OFFSET(0xB991350)
#define JFDOCDAOPJG_COKMDIMBLHN_3_OFFSET UNITYSDK_OFFSET(0xB991200)
#define JFDOCDAOPJG_COKMDIMBLHN_4_OFFSET UNITYSDK_OFFSET(0xB991400)
#define JFDOCDAOPJG_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xB9910F0)
#define JFDOCDAOPJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB991060)
#define JFDOCDAOPJG_DGMNCELGAHM_OFFSET UNITYSDK_OFFSET(0xB990E80)
#define JFDOCDAOPJG_DPLJBPDEJMA_OFFSET UNITYSDK_OFFSET(0xB990E00)
#define JFDOCDAOPJG_GAHFBGHFEEF_OFFSET UNITYSDK_OFFSET(0xB9926B0)
#define JFDOCDAOPJG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB991A90)
#define JFDOCDAOPJG_JINFPHCABMO_OFFSET UNITYSDK_OFFSET(0xB991810)
#define JFDOCDAOPJG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB9916F0)
#define JFDOCDAOPJG_KKMAEKDGECI_OFFSET UNITYSDK_OFFSET(0xB991800)
#define JFDOCDAOPJG_LIBDHMPPLDP_OFFSET UNITYSDK_OFFSET(0xB992750)
#define JFDOCDAOPJG_NKLKAGGNIDK_OFFSET UNITYSDK_OFFSET(0xB992660)
#define JFDOCDAOPJG_OHLCJLBMKCL_OFFSET UNITYSDK_OFFSET(0xB991870)
#define JFDOCDAOPJG_OPGIGLPBCIF_OFFSET UNITYSDK_OFFSET(0xB9918D0)

inline static constexpr unsigned int JFDOCDAOPJG_TypeDefinitionIndex = 50198;

	class JFDOCDAOPJG : public ::ONEMIJCPBEO
	{
	public:
		::DHBOGGBEMFF_FANENNLGHPH* NDFNNOHBHBF; // 0x38
		::CNNIBJAKKOI* EADOBHDMBAN; // 0x40
		::System::String* LGGFAPBKNHB; // 0x48
		::UnityEngine::GameObject* EHJGKDIFINJ; // 0x50
		::System::Object* OBLLIIPMBKG; // 0x58
		::System::Byte _padding0[0x10];
		::CELOMGMBCKK* JMPKCMOMBCA; // 0x70
		::System::Boolean MPHLLNPEBLA; // 0x78
		::System::Byte _padding1[0x3];
		::System::Int32 KBKCIKHHFDL; // 0x7C
		::ScenenLightManager::LightOp BGKEEIDDGOB; // 0x80
		::System::Int32 JHBAAEHHPDE; // 0x84
		static ::System::Collections::Generic::Queue_1<::JFDOCDAOPJG*>** StaticGet_BCMFCPOOAEJ()
		{
			return (::System::Collections::Generic::Queue_1<::JFDOCDAOPJG*>**)UnitySDK::FromName("", "JFDOCDAOPJG")->GetStaticField(0x69070);
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
