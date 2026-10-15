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

#define HNHPHDLGHHB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15D89180)
#define HNHPHDLGHHB_AHNDNJDFPED_OFFSET UNITYSDK_OFFSET(0x15D89D90)
#define HNHPHDLGHHB_BBALAIEDJCG_OFFSET UNITYSDK_OFFSET(0x15D89140)
#define HNHPHDLGHHB_BIHLEOGDIDK_OFFSET UNITYSDK_OFFSET(0x15D88CF0)
#define HNHPHDLGHHB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15D88FC0)
#define HNHPHDLGHHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D8A020)
#define HNHPHDLGHHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D89F00)
#define HNHPHDLGHHB_EPNKLHCHFIH_OFFSET UNITYSDK_OFFSET(0x15D88C50)
#define HNHPHDLGHHB_GGHGDFBEANG_OFFSET UNITYSDK_OFFSET(0x15D88E60)
#define HNHPHDLGHHB_GHNMPAHLLJA_1_OFFSET UNITYSDK_OFFSET(0x15D89720)
#define HNHPHDLGHHB_GHNMPAHLLJA_OFFSET UNITYSDK_OFFSET(0x15D89AE0)
#define HNHPHDLGHHB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15D88A80)
#define HNHPHDLGHHB_MIDBIIDBIMC_OFFSET UNITYSDK_OFFSET(0x15D89BE0)
#define HNHPHDLGHHB_ONGEFLHHCAG_OFFSET UNITYSDK_OFFSET(0x15D89220)
#define HNHPHDLGHHB_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15D89570)
#define HNHPHDLGHHB__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15D8A090)
#define HNHPHDLGHHB__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x15D8A0B0)
#define HNHPHDLGHHB__INIT_B__4_2_OFFSET UNITYSDK_OFFSET(0x15D8A0D0)
#define HNHPHDLGHHB__INIT_B__4_3_OFFSET UNITYSDK_OFFSET(0x15D8A100)

inline static constexpr unsigned int HNHPHDLGHHB_TypeDefinitionIndex = 49316;

	class HNHPHDLGHHB : public ::KHAKCLAJLOB
	{
	public:
		::IOAJJFGGHAF* CELDAJGLMEI; // 0x70
		::Il2CppArray<::UnityEngine::Matrix4x4>* PNMIACMCOCC; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>* NOOHFKBEHOH; // 0x80
		::IOAJJFGGHAF* ECJNALNIKIF; // 0x88
		::System::Boolean ECIAIPLAENC; // 0x90
		static ::System::String** StaticGet_HKAMADMCGLB()
		{
			return (::System::String**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x2E370);
		}

		static ::UnityEngine::Texture2D** StaticGet_BIIKOOAPPPF()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x2E378);
		}

		static ::UnityEngine::Texture2D** StaticGet_PEFKMODDAAB()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x2E380);
		}

		static ::System::String** StaticGet_IGJIENODPCA()
		{
			return (::System::String**)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x2E388);
		}

		static ::System::Int32* StaticGet_JCKILNLNDJO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x9930);
		}

		static ::System::Int32* StaticGet_HJMHJLLIPCF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x9934);
		}

		static ::System::Int32* StaticGet_CHDFDHFNOBE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNHPHDLGHHB")->GetStaticField(0x9938);
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
