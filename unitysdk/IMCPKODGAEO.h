#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
class IMCPKODGAEO_FLFPOKJBPOI;
namespace System::Collections { class Hashtable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define IMCPKODGAEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x164D1F10)
#define IMCPKODGAEO_FHJHGEHOBFG_OFFSET UNITYSDK_OFFSET(0x164D1640)
#define IMCPKODGAEO_HEAEPCJDABF_OFFSET UNITYSDK_OFFSET(0x164D14B0)

	class IMCPKODGAEO : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_FBGDGOIHNGC()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x143E0);
		}

		static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_DHLANOMILKH()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x143E8);
		}

		static ::Il2CppArray<::System::Boolean>** StaticGet_EMFNLMMBGFI()
		{
			return (::Il2CppArray<::System::Boolean>**)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x143F0);
		}

		static ::Il2CppArray<::UnityEngine::Rendering::BlendMode>** StaticGet_AJDNIEDBIBP()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::BlendMode>**)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x143F8);
		}

		static ::UnityEngine::MaterialPropertyBlock** StaticGet_IKLBJPKGKGP()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x14400);
		}

		static ::System::Int32* StaticGet_HJJGGMLHFFF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IMCPKODGAEO")->GetStaticField(0x4CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMCPKODGAEO_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* HEAEPCJDABF(::System::Boolean a1)
		{
			return ((::UnityEngine::Material*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + IMCPKODGAEO_HEAEPCJDABF_OFFSET))(a1);
		}

		static ::UnityEngine::Material* FHJHGEHOBFG(::System::UInt32 a1, ::IMCPKODGAEO_FLFPOKJBPOI* a2)
		{
			return ((::UnityEngine::Material*(*)(::System::UInt32, ::IMCPKODGAEO_FLFPOKJBPOI*))((::PBYTE)hIl2Cpp + IMCPKODGAEO_FHJHGEHOBFG_OFFSET))(a1, a2);
		}

	};
