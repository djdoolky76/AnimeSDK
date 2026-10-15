#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
class BOMMJNIPOLG;
namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_CLDKCDOGOBC_OFFSET UNITYSDK_OFFSET(0xD9225D0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_CTOR_OFFSET UNITYSDK_OFFSET(0xD923870)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD922580)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_MNGDOFEDPPB_OFFSET UNITYSDK_OFFSET(0xD922720)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_NECDHCIJKHM_OFFSET UNITYSDK_OFFSET(0xD9226A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementMatBlendTex_TypeDefinitionIndex = 70815;

	class MusicVisualization_BeatEffectElementMatBlendTex : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Int32 MaterialIndex; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* PropertyName; // 0x38
		::System::Boolean IsSetStateTex; // 0x40
		::System::Byte _padding1[0x7];
		::System::String* StateTexPropertyName; // 0x48
		::System::String* StateTex2PropertyName; // 0x50
		::System::String* StateTexLerpValPropertyName; // 0x58
		::System::Boolean _IsInitPropertyID; // 0x60
		::System::Byte _padding2[0x3];
		::System::Int32 CustomPropertyID; // 0x64
		::System::Int32 StateTexLerpValPropertyID; // 0x68
		::System::Int32 StateTexPropertyID; // 0x6C
		::System::Int32 StateTex2PropertyID; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void NECDHCIJKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_NECDHCIJKHM_OFFSET))(this);
		}

		::System::Void CLDKCDOGOBC(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_CLDKCDOGOBC_OFFSET))(this, a1);
		}

		::System::Void MNGDOFEDPPB(::BOMMJNIPOLG* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATBLENDTEX_MNGDOFEDPPB_OFFSET))(this, a1, a2);
		}

	};
}
