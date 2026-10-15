#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class EOOAMCPDPCE;
namespace RPG::Client { class MonoAtlasMouthTalk; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LEMHJKCMAPK_AFDPHIEAGPC_OFFSET UNITYSDK_OFFSET(0xB656A70)
#define LEMHJKCMAPK_APGEIPBCJOK_OFFSET UNITYSDK_OFFSET(0xB656E30)
#define LEMHJKCMAPK_CTOR_OFFSET UNITYSDK_OFFSET(0xB656B70)
#define LEMHJKCMAPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB656BF0)
#define LEMHJKCMAPK_DPAPDILDIHM_OFFSET UNITYSDK_OFFSET(0xB656B30)
#define LEMHJKCMAPK_EMOIPDPFLEG_OFFSET UNITYSDK_OFFSET(0xB656930)
#define LEMHJKCMAPK_HHGJLAAOCBI_OFFSET UNITYSDK_OFFSET(0xB656EA0)
#define LEMHJKCMAPK_JEOIIKOINHJ_OFFSET UNITYSDK_OFFSET(0xB656DD0)
#define LEMHJKCMAPK_JIGGKFCHEEB_OFFSET UNITYSDK_OFFSET(0xB656990)
#define LEMHJKCMAPK_LOGCHOFEDMC_OFFSET UNITYSDK_OFFSET(0xB656AD0)
#define LEMHJKCMAPK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB656B50)
#define LEMHJKCMAPK_OJCOENFILOM_OFFSET UNITYSDK_OFFSET(0xB656A00)
#define LEMHJKCMAPK_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB656C50)
#define LEMHJKCMAPK_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB656CE0)
#define LEMHJKCMAPK_PJDNHKCNBOC_OFFSET UNITYSDK_OFFSET(0xB656EF0)
#define LEMHJKCMAPK_TICK_OFFSET UNITYSDK_OFFSET(0xB656D30)

inline static constexpr unsigned int LEMHJKCMAPK_TypeDefinitionIndex = 57153;

	class LEMHJKCMAPK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::EOOAMCPDPCE* IMEPGKKCOMD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_CTOR_OFFSET))(this);
		}

		::System::Void EMOIPDPFLEG(::RPG::Client::MonoAtlasMouthTalk* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAtlasMouthTalk*))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_EMOIPDPFLEG_OFFSET))(this, a1);
		}

		::System::Void JIGGKFCHEEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_JIGGKFCHEEB_OFFSET))(this);
		}

		::System::Void OJCOENFILOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_OJCOENFILOM_OFFSET))(this);
		}

		::System::Boolean AFDPHIEAGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_AFDPHIEAGPC_OFFSET))(this);
		}

		::UnityEngine::GameObject* LOGCHOFEDMC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_LOGCHOFEDMC_OFFSET))(this);
		}

		::UnityEngine::GameObject* DPAPDILDIHM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_DPAPDILDIHM_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_TICK_OFFSET))(this, a1);
		}

		::System::Void JEOIIKOINHJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_JEOIIKOINHJ_OFFSET))(this, a1);
		}

		::System::Void APGEIPBCJOK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_APGEIPBCJOK_OFFSET))(this, a1, a2);
		}

		::System::Void HHGJLAAOCBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_HHGJLAAOCBI_OFFSET))(this);
		}

		::System::Void PJDNHKCNBOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMHJKCMAPK_PJDNHKCNBOC_OFFSET))(this);
		}

	};
