#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_BeatEffectElementVisualBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class BOMMJNIPOLG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Random; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CBPHCAMBJAF_OFFSET UNITYSDK_OFFSET(0xD923BD0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CLDKCDOGOBC_OFFSET UNITYSDK_OFFSET(0xD923920)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD924C50)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xD923B80)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_FLBKOKFECMO_OFFSET UNITYSDK_OFFSET(0xD923E30)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_IHMMMGLGMDP_OFFSET UNITYSDK_OFFSET(0xD924B90)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_JHAPPDCNFME_OFFSET UNITYSDK_OFFSET(0xD924390)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xD9238D0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_LHFCIHCENCO_OFFSET UNITYSDK_OFFSET(0xD924A40)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_LIFHDILPHDG_OFFSET UNITYSDK_OFFSET(0xD924310)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_OKGOFLLBCJF_1_OFFSET UNITYSDK_OFFSET(0xD9246F0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_OKGOFLLBCJF_OFFSET UNITYSDK_OFFSET(0xD9243F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementMatSimple_TypeDefinitionIndex = 70816;

	class MusicVisualization_BeatEffectElementMatSimple : public ::RPG::Client::MusicVisualization_BeatEffectElementVisualBase
	{
	public:
		::System::Boolean UseLoudnessValue; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 MaterialIndex; // 0x34
		::System::String* PropertyName; // 0x38
		::System::Boolean ValueMapToColor; // 0x40
		::System::Boolean MapToChildsColorFlow; // 0x41
		::System::Boolean FlowRandomly; // 0x42
		::System::Byte _padding1[0x1];
		::System::UInt32 PerPeriodColorNum; // 0x44
		::System::Boolean FlowInverse; // 0x48
		::System::Byte _padding2[0x7];
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x50
		::System::Boolean _IsInit; // 0x58
		::System::Byte _padding3[0x3];
		::System::Int32 CustomPropertyID; // 0x5C
		::System::Int32 _ColorIndex; // 0x60
		::System::Single _PerMusicVal; // 0x64
		::System::Collections::Generic::List_1<::System::Int32>* _RandomPhaseOffset; // 0x68
		::UnityEngine::Random* _Random; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void CLDKCDOGOBC(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CLDKCDOGOBC_OFFSET))(this, a1);
		}

		::System::Void JHAPPDCNFME(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_JHAPPDCNFME_OFFSET))(this, a1);
		}

		::System::Void OKGOFLLBCJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_OKGOFLLBCJF_OFFSET))(this, a1);
		}

		::System::Void OKGOFLLBCJF_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_OKGOFLLBCJF_1_OFFSET))(this, a1);
		}

		::System::Void LIFHDILPHDG(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_LIFHDILPHDG_OFFSET))(this, a1);
		}

		::System::Void FLBKOKFECMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_FLBKOKFECMO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* LHFCIHCENCO(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_LHFCIHCENCO_OFFSET))(this, a1);
		}

		::System::Void IHMMMGLGMDP(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_IHMMMGLGMDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CBPHCAMBJAF(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTMATSIMPLE_CBPHCAMBJAF_OFFSET))(this, a1);
		}

	};
}
