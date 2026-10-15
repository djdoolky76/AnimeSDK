#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODBFDIJFEKD_FloatPackingPrecision.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Enum; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define ODBFDIJFEKD_CGNPKAKACJO_OFFSET UNITYSDK_OFFSET(0xBD71A90)
#define ODBFDIJFEKD_DCFCBOLFOLJ_OFFSET UNITYSDK_OFFSET(0xBD70D20)
#define ODBFDIJFEKD_DJGKMAIHLAO_OFFSET UNITYSDK_OFFSET(0xBD72040)
#define ODBFDIJFEKD_DLAFOPJHOPI_OFFSET UNITYSDK_OFFSET(0xBD72110)
#define ODBFDIJFEKD_FDAOEGDDIBP_OFFSET UNITYSDK_OFFSET(0xBD71E90)
#define ODBFDIJFEKD_FJFACBEGLJP_OFFSET UNITYSDK_OFFSET(0xBD71D30)
#define ODBFDIJFEKD_GKALFBGJJIE_OFFSET UNITYSDK_OFFSET(0xBD721B0)
#define ODBFDIJFEKD_HAOGHGDBGKL_OFFSET UNITYSDK_OFFSET(0xBD70F30)
#define ODBFDIJFEKD_IMCOHLPFIFN_OFFSET UNITYSDK_OFFSET(0xBD71220)
#define ODBFDIJFEKD_IPHCAGBDGGK_OFFSET UNITYSDK_OFFSET(0xBD71050)
#define ODBFDIJFEKD_JAGDKPNLCAD_OFFSET UNITYSDK_OFFSET(0xBD70ED0)
#define ODBFDIJFEKD_KDJANOAPAFO_OFFSET UNITYSDK_OFFSET(0xBD70C70)
#define ODBFDIJFEKD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xBD71910)
#define ODBFDIJFEKD_LENNLDBFBIK_1_OFFSET UNITYSDK_OFFSET(0xBD71A00)
#define ODBFDIJFEKD_LENNLDBFBIK_OFFSET UNITYSDK_OFFSET(0xBD71980)
#define ODBFDIJFEKD_LJEMBIPDKHG_OFFSET UNITYSDK_OFFSET(0xBD72170)
#define ODBFDIJFEKD_LMBKFPHGGPO_OFFSET UNITYSDK_OFFSET(0xBD70F90)
#define ODBFDIJFEKD_LOAJOHJDABE_OFFSET UNITYSDK_OFFSET(0xBD70E70)
#define ODBFDIJFEKD_MGCLEGHFKCO_OFFSET UNITYSDK_OFFSET(0xBD711A0)
#define ODBFDIJFEKD_NBABPPOGDML_OFFSET UNITYSDK_OFFSET(0xBD717A0)
#define ODBFDIJFEKD_OJBFDJEFHCJ_OFFSET UNITYSDK_OFFSET(0xBD70FF0)
#define ODBFDIJFEKD_PAGPNCFMJIM_OFFSET UNITYSDK_OFFSET(0xBD710B0)
#define ODBFDIJFEKD_PFLPBLBKAHE_OFFSET UNITYSDK_OFFSET(0xBD71120)

inline static constexpr unsigned int ODBFDIJFEKD_TypeDefinitionIndex = 49008;

	class ODBFDIJFEKD : public ::System::Object
	{
	public:
		static ::ODBFDIJFEKD_FloatPackingPrecision* StaticGet_APDDMGINMPM()
		{
			return (::ODBFDIJFEKD_FloatPackingPrecision*)UnitySDK::FromName("", "ODBFDIJFEKD")->GetStaticField(0x13E80);
		}

		// static const ::System::Object JJOIJAOMNMO; // 0x0
		static ::System::String* KDJANOAPAFO(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_KDJANOAPAFO_OFFSET))(a1);
		}

		static ::System::Boolean DCFCBOLFOLJ(::System::Enum* a1, ::System::Enum* a2)
		{
			return ((::System::Boolean(*)(::System::Enum*, ::System::Enum*))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_DCFCBOLFOLJ_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 LOAJOHJDABE(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_LOAJOHJDABE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 JAGDKPNLCAD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_JAGDKPNLCAD_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 HAOGHGDBGKL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_HAOGHGDBGKL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 LMBKFPHGGPO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_LMBKFPHGGPO_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 OJBFDJEFHCJ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_OJBFDJEFHCJ_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 IPHCAGBDGGK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_IPHCAGBDGGK_OFFSET))(a1);
		}

		static ::System::Single PAGPNCFMJIM(::UnityEngine::Bounds a1)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_PAGPNCFMJIM_OFFSET))(a1);
		}

		static ::System::Single PFLPBLBKAHE(::UnityEngine::Bounds a1)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_PFLPBLBKAHE_OFFSET))(a1);
		}

		static ::UnityEngine::Color MGCLEGHFKCO(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_MGCLEGHFKCO_OFFSET))(a1);
		}

		static ::System::Void IMCOHLPFIFN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_IMCOHLPFIFN_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Plane NBABPPOGDML(::UnityEngine::Plane a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Plane(*)(::UnityEngine::Plane, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_NBABPPOGDML_OFFSET))(a1, a2);
		}

		static ::System::Boolean KKKIONIDKFA(::UnityEngine::Plane a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Plane))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_KKKIONIDKFA_OFFSET))(a1);
		}

		static ::System::Void LENNLDBFBIK(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_LENNLDBFBIK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LENNLDBFBIK_1(::UnityEngine::Material* a1, ::UnityEngine::Rendering::ShaderKeyword a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Rendering::ShaderKeyword, ::System::Boolean))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_LENNLDBFBIK_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Matrix4x4 CGNPKAKACJO(::UnityEngine::Gradient* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Gradient*, ::System::Int32))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_CGNPKAKACJO_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Color>* FDAOEGDDIBP(::UnityEngine::Gradient* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::UnityEngine::Gradient*, ::System::Int32))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_FDAOEGDDIBP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 DJGKMAIHLAO(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_DJGKMAIHLAO_OFFSET))(a1);
		}

		static ::System::Single FJFACBEGLJP(::UnityEngine::Color a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_FJFACBEGLJP_OFFSET))(a1, a2);
		}

		static ::ODBFDIJFEKD_FloatPackingPrecision DLAFOPJHOPI()
		{
			return ((::ODBFDIJFEKD_FloatPackingPrecision(*)())((::PBYTE)hIl2Cpp + ODBFDIJFEKD_DLAFOPJHOPI_OFFSET))();
		}

		static ::System::Void LJEMBIPDKHG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODBFDIJFEKD_LJEMBIPDKHG_OFFSET))();
		}

		static ::System::Void GKALFBGJJIE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + ODBFDIJFEKD_GKALFBGJJIE_OFFSET))(a1);
		}

	};
