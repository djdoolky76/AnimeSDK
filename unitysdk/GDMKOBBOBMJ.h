#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FloatCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Transform; }

#define GDMKOBBOBMJ_AMABPJCAGKC_OFFSET UNITYSDK_OFFSET(0x1EB909A0)
#define GDMKOBBOBMJ_ANDHIEMBENF_OFFSET UNITYSDK_OFFSET(0x1EB90F40)
#define GDMKOBBOBMJ_BADBDPELJHC_OFFSET UNITYSDK_OFFSET(0x1EB90660)
#define GDMKOBBOBMJ_BDBLFFICIDG_OFFSET UNITYSDK_OFFSET(0x1EB90D70)
#define GDMKOBBOBMJ_DANAMGHFPEB_OFFSET UNITYSDK_OFFSET(0x1EB91430)
#define GDMKOBBOBMJ_EDKPCJHLFDJ_OFFSET UNITYSDK_OFFSET(0x1EB90B80)
#define GDMKOBBOBMJ_HCNFKLEPLAD_OFFSET UNITYSDK_OFFSET(0x1EB911B0)
#define GDMKOBBOBMJ_IFHKMIEENHN_OFFSET UNITYSDK_OFFSET(0x1EB91910)
#define GDMKOBBOBMJ_JKIDIEAGOBO_OFFSET UNITYSDK_OFFSET(0x1EB907D0)
#define GDMKOBBOBMJ_MAONAMKFPNE_OFFSET UNITYSDK_OFFSET(0x1EB903E0)
#define GDMKOBBOBMJ_MBNJAMOAPCK_OFFSET UNITYSDK_OFFSET(0x1EB906A0)

inline static constexpr unsigned int GDMKOBBOBMJ_TypeDefinitionIndex = 44014;

	class GDMKOBBOBMJ : public ::System::Object
	{
	public:
		static ::UnityEngine::BoxCollider** StaticGet_DOHGLABBEHK()
		{
			return (::UnityEngine::BoxCollider**)UnitySDK::FromName("", "GDMKOBBOBMJ")->GetStaticField(0x70140);
		}

		static ::UnityEngine::RaycastHit* StaticGet_HOKJFPBANII()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "GDMKOBBOBMJ")->GetStaticField(0x15D40);
		}

		static ::UnityEngine::Ray* StaticGet_KDFOABICELI()
		{
			return (::UnityEngine::Ray*)UnitySDK::FromName("", "GDMKOBBOBMJ")->GetStaticField(0x15D70);
		}

		static ::UnityEngine::Matrix4x4 MAONAMKFPNE(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_MAONAMKFPNE_OFFSET))(a1, a2);
		}

		static ::System::Single BADBDPELJHC(::SingleFloatCurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_BADBDPELJHC_OFFSET))(a1, a2);
		}

		static ::System::Single MBNJAMOAPCK(::FloatCurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_MBNJAMOAPCK_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 JKIDIEAGOBO(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_JKIDIEAGOBO_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 AMABPJCAGKC(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_AMABPJCAGKC_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 EDKPCJHLFDJ(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_EDKPCJHLFDJ_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 BDBLFFICIDG(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_BDBLFFICIDG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ANDHIEMBENF(::Vector3CurveBundle* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_ANDHIEMBENF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 HCNFKLEPLAD(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::Vector3CurveBundle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_HCNFKLEPLAD_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture3D* DANAMGHFPEB(::UnityEngine::TextAsset* a1)
		{
			return ((::UnityEngine::Texture3D*(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_DANAMGHFPEB_OFFSET))(a1);
		}

		static ::System::Single IFHKMIEENHN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GDMKOBBOBMJ_IFHKMIEENHN_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
