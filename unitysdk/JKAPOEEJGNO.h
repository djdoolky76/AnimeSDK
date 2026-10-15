#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"
class JKAPOEEJGNO;
namespace RPG::Client { class EnvWindReceiverBehavior; }
namespace RPG::Client { class EnvWindTriggerBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define JKAPOEEJGNO_AIEKBLJLAEF_OFFSET UNITYSDK_OFFSET(0xB20EB80)
#define JKAPOEEJGNO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB210FA0)
#define JKAPOEEJGNO_CFNGGIMFDGA_OFFSET UNITYSDK_OFFSET(0xB20E110)
#define JKAPOEEJGNO_CIKBONOLELF_OFFSET UNITYSDK_OFFSET(0xB210290)
#define JKAPOEEJGNO_CNKNPNOPPDI_OFFSET UNITYSDK_OFFSET(0xB20DBD0)
#define JKAPOEEJGNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB20DAB0)
#define JKAPOEEJGNO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB20E750)
#define JKAPOEEJGNO_DODKPEFHMKD_OFFSET UNITYSDK_OFFSET(0xB20E3F0)
#define JKAPOEEJGNO_EGHIJHLMLPD_OFFSET UNITYSDK_OFFSET(0xB20DFA0)
#define JKAPOEEJGNO_EPNDKBCOFCB_OFFSET UNITYSDK_OFFSET(0xB2103F0)
#define JKAPOEEJGNO_GFMMGCKHIGA_OFFSET UNITYSDK_OFFSET(0xB20FE50)
#define JKAPOEEJGNO_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB20D970)
#define JKAPOEEJGNO_GGHJOALJAAH_OFFSET UNITYSDK_OFFSET(0xB20DB20)
#define JKAPOEEJGNO_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xB20FD10)
#define JKAPOEEJGNO_HMLFLEPBAIM_OFFSET UNITYSDK_OFFSET(0xB20FF30)
#define JKAPOEEJGNO_IAHHCHGCGLM_OFFSET UNITYSDK_OFFSET(0xB20DCC0)
#define JKAPOEEJGNO_KODAMGFMJPL_OFFSET UNITYSDK_OFFSET(0xB20E3A0)
#define JKAPOEEJGNO_LLFMDAEMNJP_OFFSET UNITYSDK_OFFSET(0xB20E0D0)
#define JKAPOEEJGNO_MCGPMBKJPLA_OFFSET UNITYSDK_OFFSET(0xB2100B0)
#define JKAPOEEJGNO_NOPCLLMFHHG_OFFSET UNITYSDK_OFFSET(0xB20E270)

inline static constexpr unsigned int JKAPOEEJGNO_TypeDefinitionIndex = 49632;

	class JKAPOEEJGNO : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* HFKKKDIPMLI; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* HJMDECCDGCP; // 0x18
		::UnityEngine::ComputeBuffer* KKFHKKCCDIH; // 0x20
		::UnityEngine::Texture3D* KJPKOMPGFBP; // 0x28
		::UnityEngine::ComputeShader* KOECHKLKMLL; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* BHEKEAFCDHK; // 0x38
		::UnityEngine::Vector4 GLJNDCGOANC; // 0x40
		::UnityEngine::Vector3 CHNAOPLBFIB; // 0x50
		::UnityEngine::Vector3 FOALPCMNMOI; // 0x5C
		::System::Int32 IFHNOFMLLPC; // 0x68
		::System::Boolean PFNKIIHONLI; // 0x6C
		::System::Boolean POJPJLJPDEJ; // 0x6D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3Int JHGMJEJDPOC; // 0x70
		static ::JKAPOEEJGNO** StaticGet_FLMODBLFAGD()
		{
			return (::JKAPOEEJGNO**)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x160E0);
		}

		static ::UnityEngine::Vector3Int* StaticGet_LADHFHDECHH()
		{
			return (::UnityEngine::Vector3Int*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5330);
		}

		static ::System::Int32* StaticGet_DPJKMHLAIPL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x533C);
		}

		static ::UnityEngine::Vector3Int* StaticGet_CMDKLBINEEG()
		{
			return (::UnityEngine::Vector3Int*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5340);
		}

		static ::System::Int32* StaticGet_GCELPBDCIEH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x534C);
		}

		static ::System::Int32* StaticGet_HLLGKCPBENO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5350);
		}

		static ::System::Int32* StaticGet_EIOKMHMOBLN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5354);
		}

		static ::System::Int32* StaticGet_PDCBJLNLPHH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5358);
		}

		static ::System::Int32* StaticGet_ENBFKGFGKPG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x535C);
		}

		static ::System::Int32* StaticGet_NFBBNMPCEPN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5360);
		}

		static ::System::Int32* StaticGet_DCEDIGGAIMN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5364);
		}

		static ::System::Int32* StaticGet_MHBDOAPDKMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5368);
		}

		static ::System::Int32* StaticGet_PFBMMNLMGJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x536C);
		}

		static ::System::Int32* StaticGet_LNFPGLEOBKP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5370);
		}

		static ::System::Int32* StaticGet_ODIBIIFNFAJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5374);
		}

		static ::System::Int32* StaticGet_DFGBCDBAFGH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x5378);
		}

		static ::System::Int32* StaticGet_KPOLLAIGBMA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKAPOEEJGNO")->GetStaticField(0x537C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKAPOEEJGNO_CCTOR_OFFSET))();
		}

		static ::JKAPOEEJGNO* GGBLHEHJBDO()
		{
			return ((::JKAPOEEJGNO*(*)())((::PBYTE)hIl2Cpp + JKAPOEEJGNO_GGBLHEHJBDO_OFFSET))();
		}

		::UnityEngine::ComputeShader* GGHJOALJAAH()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_GGHJOALJAAH_OFFSET))(this);
		}

		::System::Void CNKNPNOPPDI(::RPG::Client::EnvWindTriggerBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_CNKNPNOPPDI_OFFSET))(this, a1);
		}

		::System::Void EGHIJHLMLPD(::RPG::Client::EnvWindTriggerBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindTriggerBehavior*))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_EGHIJHLMLPD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>* LLFMDAEMNJP()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindTriggerBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_LLFMDAEMNJP_OFFSET))(this);
		}

		::System::Void CFNGGIMFDGA(::RPG::Client::EnvWindReceiverBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_CFNGGIMFDGA_OFFSET))(this, a1);
		}

		::System::Void NOPCLLMFHHG(::RPG::Client::EnvWindReceiverBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvWindReceiverBehavior*))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_NOPCLLMFHHG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>* KODAMGFMJPL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EnvWindReceiverBehavior*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_KODAMGFMJPL_OFFSET))(this);
		}

		::System::Void IAHHCHGCGLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_IAHHCHGCGLM_OFFSET))(this);
		}

		::System::Void DODKPEFHMKD(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_DODKPEFHMKD_OFFSET))(this, a1);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GFMMGCKHIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_GFMMGCKHIGA_OFFSET))(this);
		}

		::System::Void MCGPMBKJPLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_MCGPMBKJPLA_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* HMLFLEPBAIM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_HMLFLEPBAIM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIEKBLJLAEF(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3Int a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_AIEKBLJLAEF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CIKBONOLELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_CIKBONOLELF_OFFSET))(this);
		}

		::System::Void EPNDKBCOFCB(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + JKAPOEEJGNO_EPNDKBCOFCB_OFFSET))(this, a1);
		}

	};
