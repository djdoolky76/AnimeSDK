#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collider; }

#define FGNAIIKGGNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1576CB90)
#define FGNAIIKGGNK_CDOGGNBAIMO_OFFSET UNITYSDK_OFFSET(0x1576C1C0)
#define FGNAIIKGGNK_EHKJANNLPNC_OFFSET UNITYSDK_OFFSET(0x1576BCB0)
#define FGNAIIKGGNK_JDDHNBGKMGA_OFFSET UNITYSDK_OFFSET(0x1576B460)
#define FGNAIIKGGNK_KJPPKJMLOGJ_OFFSET UNITYSDK_OFFSET(0x1576C620)
#define FGNAIIKGGNK_MEHBHHHNENB_OFFSET UNITYSDK_OFFSET(0x1576B7B0)
#define FGNAIIKGGNK_OGBIIDGLGNG_OFFSET UNITYSDK_OFFSET(0x1576B8E0)

inline static constexpr unsigned int FGNAIIKGGNK_TypeDefinitionIndex = 54758;

	class FGNAIIKGGNK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_LOBGBIGJEEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "FGNAIIKGGNK")->GetStaticField(0x69550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNAIIKGGNK_CCTOR_OFFSET))();
		}

		static ::System::Boolean JDDHNBGKMGA(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_JDDHNBGKMGA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 MEHBHHHNENB(::UnityEngine::Collider* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_MEHBHHHNENB_OFFSET))(a1);
		}

		static ::System::Boolean OGBIIDGLGNG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_OGBIIDGLGNG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 EHKJANNLPNC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_EHKJANNLPNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 CDOGGNBAIMO(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_CDOGGNBAIMO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 KJPPKJMLOGJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + FGNAIIKGGNK_KJPPKJMLOGJ_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
