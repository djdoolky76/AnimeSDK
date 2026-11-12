#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAKCLAJLOB.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class GGJFAFONDHN;
class IOAJJFGGHAF;
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define HNHPHDLGHHB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x16D36A50)
#define HNHPHDLGHHB_AHNDNJDFPED_OFFSET UNITYSDK_OFFSET(0x16D37650)
#define HNHPHDLGHHB_BBALAIEDJCG_OFFSET UNITYSDK_OFFSET(0x16D36A10)
#define HNHPHDLGHHB_BIHLEOGDIDK_OFFSET UNITYSDK_OFFSET(0x16D365C0)
#define HNHPHDLGHHB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x16D36890)
#define HNHPHDLGHHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D378E0)
#define HNHPHDLGHHB_CTOR_OFFSET UNITYSDK_OFFSET(0x16D377C0)
#define HNHPHDLGHHB_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x16D36520)
#define HNHPHDLGHHB_GGHGDFBEANG_OFFSET UNITYSDK_OFFSET(0x16D36730)
#define HNHPHDLGHHB_GHNMPAHLLJA_1_OFFSET UNITYSDK_OFFSET(0x16D36FE0)
#define HNHPHDLGHHB_GHNMPAHLLJA_OFFSET UNITYSDK_OFFSET(0x16D373B0)
#define HNHPHDLGHHB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16D36350)
#define HNHPHDLGHHB_MIDBIIDBIMC_OFFSET UNITYSDK_OFFSET(0x16D374B0)
#define HNHPHDLGHHB_ONGEFLHHCAG_OFFSET UNITYSDK_OFFSET(0x16D36AF0)
#define HNHPHDLGHHB_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x16D36E30)
#define HNHPHDLGHHB__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x16D37950)
#define HNHPHDLGHHB__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x16D37970)
#define HNHPHDLGHHB__INIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x16D37990)
#define HNHPHDLGHHB__INIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x16D379C0)

inline static constexpr unsigned int HNHPHDLGHHB_TypeDefinitionIndex = 50392;

	class HNHPHDLGHHB : public ::KHAKCLAJLOB
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>* NOOHFKBEHOH; // 0x70
		::IOAJJFGGHAF* CELDAJGLMEI; // 0x78
		::Il2CppArray<::UnityEngine::Matrix4x4>* PNMIACMCOCC; // 0x80
		::IOAJJFGGHAF* ECJNALNIKIF; // 0x88
		::System::Boolean ECIAIPLAENC; // 0x90
		static ::System::String** StaticGet_HKAMADMCGLB()
		{
			return (::System::String**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x1CD00);
		}

		static ::UnityEngine::Texture2D** StaticGet_BIIKOOAPPPF()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x1CD08);
		}

		static ::System::String** StaticGet_IGJIENODPCA()
		{
			return (::System::String**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x1CD10);
		}

		static ::UnityEngine::Texture2D** StaticGet_PEFKMODDAAB()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x1CD18);
		}

		static ::System::Int32* StaticGet_HJMHJLLIPCF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x5E40);
		}

		static ::System::Int32* StaticGet_JCKILNLNDJO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x5E44);
		}

		static ::System::Int32* StaticGet_CHDFDHFNOBE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x5E48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNHPHDLGHHB_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EPNKLHCHFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_EPNKLHCHFIH_OFFSET))(this);
		}

		static ::System::Void BIHLEOGDIDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNHPHDLGHHB_BIHLEOGDIDK_OFFSET))();
		}

		static ::System::Void GGHGDFBEANG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNHPHDLGHHB_GGHGDFBEANG_OFFSET))();
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void BBALAIEDJCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_BBALAIEDJCG_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void ONGEFLHHCAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_ONGEFLHHCAG_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void GHNMPAHLLJA(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_GHNMPAHLLJA_OFFSET))(this, a1, a2);
		}

		::System::Void GHNMPAHLLJA_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_GHNMPAHLLJA_1_OFFSET))(this);
		}

		::System::Void MIDBIIDBIMC(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_MIDBIIDBIMC_OFFSET))(this, a1);
		}

		::System::Void AHNDNJDFPED(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB_AHNDNJDFPED_OFFSET))(this, a1);
		}

		::System::Void _Init_b__4_0(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB__INIT_B__4_0_OFFSET))(this, a1);
		}

		::System::Void _Init_b__4_1(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB__INIT_B__4_1_OFFSET))(this, a1);
		}

		::System::Void _Init_b__4_2(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB__INIT_B__4_2_OFFSET))(this, a1);
		}

		::System::Void _Init_b__4_3(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + HNHPHDLGHHB__INIT_B__4_3_OFFSET))(this, a1);
		}

	};
