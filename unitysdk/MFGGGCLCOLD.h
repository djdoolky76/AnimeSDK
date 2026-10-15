#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MFGGGCLCOLD_HEECDJDMACG;
namespace RPG::Client { class RegionVolume; }
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MFGGGCLCOLD_BBPAFFJGJLI_OFFSET UNITYSDK_OFFSET(0xB8F6130)
#define MFGGGCLCOLD_DBPMKHEFHNO_OFFSET UNITYSDK_OFFSET(0xB8F8EF0)
#define MFGGGCLCOLD_FHONNDIPNKB_OFFSET UNITYSDK_OFFSET(0xB8F8A00)
#define MFGGGCLCOLD_FPODGDOHDCD_OFFSET UNITYSDK_OFFSET(0xB8F9890)
#define MFGGGCLCOLD_GFKGDBEINDI_OFFSET UNITYSDK_OFFSET(0xB8F8FE0)
#define MFGGGCLCOLD_GGFLPGANAIL_1_OFFSET UNITYSDK_OFFSET(0xB8F6920)
#define MFGGGCLCOLD_GGFLPGANAIL_OFFSET UNITYSDK_OFFSET(0xB8F6790)
#define MFGGGCLCOLD_KODHJIJCKFJ_OFFSET UNITYSDK_OFFSET(0xB8F7110)
#define MFGGGCLCOLD_MHNABLFEMNE_OFFSET UNITYSDK_OFFSET(0xB8F62A0)
#define MFGGGCLCOLD_MOLPHNGCDDI_OFFSET UNITYSDK_OFFSET(0xB8F8F60)
#define MFGGGCLCOLD_NADOLFLPGEN_OFFSET UNITYSDK_OFFSET(0xB8F63D0)
#define MFGGGCLCOLD_ODMCPHCGJNM_OFFSET UNITYSDK_OFFSET(0xB8F6A80)
#define MFGGGCLCOLD_OIOEJBOGGBL_OFFSET UNITYSDK_OFFSET(0xB8F65E0)

	class MFGGGCLCOLD : public ::System::Object
	{
	public:
		static ::System::Void BBPAFFJGJLI(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_BBPAFFJGJLI_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 MHNABLFEMNE(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_MHNABLFEMNE_OFFSET))(a1);
		}

		static ::RPG::Client::RuntimeRegionVolume* NADOLFLPGEN(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::GameObject* a4, ::System::String* a5)
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_NADOLFLPGEN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::RuntimeRegionVolume* OIOEJBOGGBL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::UnityEngine::GameObject* a5, ::System::String* a6)
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_OIOEJBOGGBL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::RuntimeRegionVolume* GGFLPGANAIL(::RPG::GameCore::StageVolumeConfigV2* a1, ::UnityEngine::Transform* a2, ::System::String* a3)
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::RPG::GameCore::StageVolumeConfigV2*, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_GGFLPGANAIL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::RuntimeRegionVolume* GGFLPGANAIL_1(::RPG::GameCore::StageVolumeConfigV2* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::RPG::GameCore::StageVolumeConfigV2*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_GGFLPGANAIL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ODMCPHCGJNM(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_ODMCPHCGJNM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean KODHJIJCKFJ(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::MFGGGCLCOLD_HEECDJDMACG* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::MFGGGCLCOLD_HEECDJDMACG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_KODHJIJCKFJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FHONNDIPNKB(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_FHONNDIPNKB_OFFSET))(a1, a2);
		}

		static ::System::Boolean DBPMKHEFHNO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_DBPMKHEFHNO_OFFSET))(a1);
		}

		static ::System::Boolean MOLPHNGCDDI(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_MOLPHNGCDDI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GFKGDBEINDI(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_GFKGDBEINDI_OFFSET))(a1);
		}

		static ::System::Int32 FPODGDOHDCD(::RPG::Client::RegionVolume* a1, ::UnityEngine::Ray a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::RegionVolume*, ::UnityEngine::Ray, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFGGGCLCOLD_FPODGDOHDCD_OFFSET))(a1, a2, a3);
		}

	};
