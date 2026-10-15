#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXOverlayCharacterBackgroundPositionInfo.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define LLFKNCJJAIG_ALJGGAALBBL_OFFSET UNITYSDK_OFFSET(0xB762C20)
#define LLFKNCJJAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB763180)
#define LLFKNCJJAIG_EAAKGHCMJGA_OFFSET UNITYSDK_OFFSET(0xB762F50)
#define LLFKNCJJAIG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB763130)
#define LLFKNCJJAIG_HMBNEEKJGCE_OFFSET UNITYSDK_OFFSET(0xB762920)
#define LLFKNCJJAIG_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xB762910)
#define LLFKNCJJAIG_LGIEBLDJPOB_OFFSET UNITYSDK_OFFSET(0xB762E40)
#define LLFKNCJJAIG_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB762DD0)
#define LLFKNCJJAIG_NKEFHMBAHNL_OFFSET UNITYSDK_OFFSET(0xB762900)
#define LLFKNCJJAIG_PBLJHCFPEGL_OFFSET UNITYSDK_OFFSET(0xB7629F0)

inline static constexpr unsigned int LLFKNCJJAIG_TypeDefinitionIndex = 48666;

	class LLFKNCJJAIG : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* AAGHPLMLFPB; // 0x10
		::DEBEAKKOHLN* DBCCOEFFKCM; // 0x18
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x20
		::System::Boolean DIMECBLLOGB; // 0x28
		::System::Byte _padding0[0x3];
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo KNGOOHANMPG; // 0x2C
		// static const ::System::Object IGJNBDLOLAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_CTOR_OFFSET))(this);
		}

		::DEBEAKKOHLN* NKEFHMBAHNL()
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_NKEFHMBAHNL_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void HMBNEEKJGCE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_HMBNEEKJGCE_OFFSET))(this, a1);
		}

		::System::Void ALJGGAALBBL(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_ALJGGAALBBL_OFFSET))(this, a1, a2);
		}

		::System::Void PBLJHCFPEGL(::DEBEAKKOHLN* a1, ::UnityEngine::Renderer* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_PBLJHCFPEGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void LGIEBLDJPOB(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_LGIEBLDJPOB_OFFSET))(this, a1);
		}

		::System::Void EAAKGHCMJGA(::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_EAAKGHCMJGA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFKNCJJAIG_HADOHLNHHGB_OFFSET))(this);
		}

	};
