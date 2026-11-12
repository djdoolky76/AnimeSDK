#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KLEFGGIHGMI;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class GrassData; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }

#define LEAKCHFEDDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE0860)
#define LEAKCHFEDDK_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xBEE1100)
#define LEAKCHFEDDK_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xBEE0FB0)
#define LEAKCHFEDDK_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xBEE1020)
#define LEAKCHFEDDK_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0xBEE12A0)
#define LEAKCHFEDDK_GETRECT_OFFSET UNITYSDK_OFFSET(0xBEE10A0)
#define LEAKCHFEDDK_IBNIJBDKBDD_OFFSET UNITYSDK_OFFSET(0xBEE1260)
#define LEAKCHFEDDK_MLHNJEGGOAI_OFFSET UNITYSDK_OFFSET(0xBEE0F40)

inline static constexpr unsigned int LEAKCHFEDDK_TypeDefinitionIndex = 75916;

	class LEAKCHFEDDK : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::KLEFGGIHGMI* NCEAKEDDIIF; // 0xB8
		::RPG::GameCore::GrassData* NFEKIEANHJI; // 0xC0
		::System::Single LBJEHIBFAJL; // 0xC8
		::UnityEngine::Rect OELFHMCCBBD; // 0xCC
		::System::Byte CKNIIAHDNHC; // 0xDC
		::System::Boolean HLJINKCCGON; // 0xDD
		::System::Byte _padding0[0x2];
		::System::Single KNHBFMOFBFC; // 0xE0
		::System::Single FHDIAHDOFFC; // 0xE4
		static ::System::Boolean* StaticGet_MMADKOEOKOC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LEAKCHFEDDK")->GetStaticField(0x9900);
		}

		::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::RPG::GameCore::LodTemplate* a3, ::RPG::GameCore::GrassData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::RPG::GameCore::LodTemplate*, ::RPG::GameCore::GrassData*))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void MLHNJEGGOAI(::UnityEngine::Bounds a1, ::UnityEngine::Color a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_MLHNJEGGOAI_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_GETBOUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_GETRECT_OFFSET))(this);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::System::Void IBNIJBDKBDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_IBNIJBDKBDD_OFFSET))(this);
		}

		::System::String* GetPersistentAssetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEAKCHFEDDK_GETPERSISTENTASSETPATH_OFFSET))(this, a1);
		}

	};
