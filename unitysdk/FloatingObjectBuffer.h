#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FloatingProxyParticle.h"
#include "unitysdk/System/Object.h"
class WaveFloating;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define FLOATINGOBJECTBUFFER_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15933110)
#define FLOATINGOBJECTBUFFER_ADMHFFKLJAG_OFFSET UNITYSDK_OFFSET(0x15933BE0)
#define FLOATINGOBJECTBUFFER_CEFJHFJCHAG_OFFSET UNITYSDK_OFFSET(0x15933AE0)
#define FLOATINGOBJECTBUFFER_CIKFKBNFOLB_OFFSET UNITYSDK_OFFSET(0x15933430)
#define FLOATINGOBJECTBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x15933C30)
#define FLOATINGOBJECTBUFFER_DCOLDGOPDNF_OFFSET UNITYSDK_OFFSET(0x159333A0)
#define FLOATINGOBJECTBUFFER_DEIPBJJNANM_OFFSET UNITYSDK_OFFSET(0x15933350)
#define FLOATINGOBJECTBUFFER_EOPJJANHHFL_OFFSET UNITYSDK_OFFSET(0x159338A0)
#define FLOATINGOBJECTBUFFER_FONEMEIFAGH_OFFSET UNITYSDK_OFFSET(0x15933A90)
#define FLOATINGOBJECTBUFFER_GET_SIMPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x15932BD0)
#define FLOATINGOBJECTBUFFER_HJGPGKDHLDG_OFFSET UNITYSDK_OFFSET(0x15933A50)
#define FLOATINGOBJECTBUFFER_IKDDDKELENO_OFFSET UNITYSDK_OFFSET(0x15933B60)
#define FLOATINGOBJECTBUFFER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x159332F0)
#define FLOATINGOBJECTBUFFER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15932C20)
#define FLOATINGOBJECTBUFFER_MAIJBFIEGCN_OFFSET UNITYSDK_OFFSET(0x159333F0)

inline static constexpr unsigned int FloatingObjectBuffer_TypeDefinitionIndex = 47494;

	class FloatingObjectBuffer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Texture*>* renderTextures; // 0x10
		::UnityEngine::Texture2D* textureStage; // 0x18
		::System::Collections::Generic::List_1<::FloatingProxyParticle>* simParticlesRaw; // 0x20
		::System::Int32 id; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SimParticleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_GET_SIMPARTICLECOUNT_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void DEIPBJJNANM(::WaveFloating* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WaveFloating*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_DEIPBJJNANM_OFFSET))(this, a1);
		}

		::System::Void DCOLDGOPDNF(::WaveFloating* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WaveFloating*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_DCOLDGOPDNF_OFFSET))(this, a1);
		}

		::System::Void MAIJBFIEGCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_MAIJBFIEGCN_OFFSET))(this);
		}

		::System::Void CIKFKBNFOLB(::System::Collections::Generic::List_1<::FloatingProxyParticle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FloatingProxyParticle>*))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_CIKFKBNFOLB_OFFSET))(this, a1);
		}

		::System::Void EOPJJANHHFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_EOPJJANHHFL_OFFSET))(this);
		}

		::System::Void HJGPGKDHLDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_HJGPGKDHLDG_OFFSET))(this);
		}

		::System::Void FONEMEIFAGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_FONEMEIFAGH_OFFSET))(this);
		}

		::UnityEngine::Texture* CEFJHFJCHAG()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_CEFJHFJCHAG_OFFSET))(this);
		}

		::UnityEngine::Texture* IKDDDKELENO()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_IKDDDKELENO_OFFSET))(this);
		}

		::System::Int32 ADMHFFKLJAG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATINGOBJECTBUFFER_ADMHFFKLJAG_OFFSET))(this);
		}

	};
