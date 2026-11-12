#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDropZoneKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BKDEDNJCIMG_LJHMDBAMEHO;
class PAIBKBFBNJN;
namespace UnityEngine { class Camera; }

#define BKDEDNJCIMG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC104690)
#define BKDEDNJCIMG_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0xC103F60)
#define BKDEDNJCIMG_NBKMCMJICBP_OFFSET UNITYSDK_OFFSET(0xC104120)

inline static constexpr unsigned int BKDEDNJCIMG_TypeDefinitionIndex = 79767;

	class BKDEDNJCIMG : public ::System::Object
	{
	public:
		static ::BKDEDNJCIMG_LJHMDBAMEHO** StaticGet_GLKDBNONLAD()
		{
			return (::BKDEDNJCIMG_LJHMDBAMEHO**)UnitySDK::FromName("", "BKDEDNJCIMG")->GetStaticField(0x6DBD0);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_LIEMGOHMCCD()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "BKDEDNJCIMG")->GetStaticField(0x6DBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKDEDNJCIMG_CCTOR_OFFSET))();
		}

		static ::System::Boolean MNPFDFDBMNG(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::PAIBKBFBNJN* a4, ::System::Boolean a5, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Single, ::PAIBKBFBNJN*, ::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::System::Int32))((::PBYTE)hIl2Cpp + BKDEDNJCIMG_MNPFDFDBMNG_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean NBKMCMJICBP(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::System::Single, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDropZoneKind, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BKDEDNJCIMG_NBKMCMJICBP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
