#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }

#define LNAKIEMEDGI_ANDOLMMMEHL_OFFSET UNITYSDK_OFFSET(0xB7D54E0)
#define LNAKIEMEDGI_BMPAJEJFCDN_OFFSET UNITYSDK_OFFSET(0xB7D5480)
#define LNAKIEMEDGI_FHJFAACBEPM_OFFSET UNITYSDK_OFFSET(0xB7D5150)
#define LNAKIEMEDGI_GDHLLAEFMJH_OFFSET UNITYSDK_OFFSET(0xB7D53C0)
#define LNAKIEMEDGI_HBPBKHEMPEA_OFFSET UNITYSDK_OFFSET(0xB7D5370)
#define LNAKIEMEDGI_HOGOBFFHMPO_OFFSET UNITYSDK_OFFSET(0xB7D51B0)
#define LNAKIEMEDGI_IDEEBMEBLFM_OFFSET UNITYSDK_OFFSET(0xB7D5290)
#define LNAKIEMEDGI_IFEHIGHECNJ_OFFSET UNITYSDK_OFFSET(0xB7D5090)
#define LNAKIEMEDGI_ILLNIJDLKIG_OFFSET UNITYSDK_OFFSET(0xB7D5630)
#define LNAKIEMEDGI_KHGKIBOBPMF_OFFSET UNITYSDK_OFFSET(0xB7D5030)
#define LNAKIEMEDGI_LMFDONKACOG_OFFSET UNITYSDK_OFFSET(0xB7D50F0)
#define LNAKIEMEDGI_MGPJOMBFFCB_OFFSET UNITYSDK_OFFSET(0xB7D55B0)
#define LNAKIEMEDGI_PIOGGIODLIL_OFFSET UNITYSDK_OFFSET(0xB7D52A0)

	class LNAKIEMEDGI : public ::System::Object
	{
	public:
		static ::UnityEngine::Shader** StaticGet_JKMDBPBGECK()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LNAKIEMEDGI")->GetStaticField(0x6C4F0);
		}

		// static const ::System::String* BIINLHCCLEN; // 0x0
		// static const ::System::String* CMFHCOJNKDK; // 0x0
		// static const ::System::String* LHBBOAKOGKM; // 0x0
		static ::UnityEngine::Mesh* KHGKIBOBPMF(::System::String* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_KHGKIBOBPMF_OFFSET))(a1);
		}

		static ::UnityEngine::Material* IFEHIGHECNJ(::System::String* a1)
		{
			return ((::UnityEngine::Material*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_IFEHIGHECNJ_OFFSET))(a1);
		}

		static ::UnityEngine::Shader* LMFDONKACOG(::System::String* a1)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_LMFDONKACOG_OFFSET))(a1);
		}

		static ::UnityEngine::ComputeShader* FHJFAACBEPM(::System::String* a1)
		{
			return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_FHJFAACBEPM_OFFSET))(a1);
		}

		static ::System::Void HOGOBFFHMPO(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_HOGOBFFHMPO_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Material* IDEEBMEBLFM()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + LNAKIEMEDGI_IDEEBMEBLFM_OFFSET))();
		}

		static ::UnityEngine::Shader* PIOGGIODLIL()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + LNAKIEMEDGI_PIOGGIODLIL_OFFSET))();
		}

		static ::System::String* HBPBKHEMPEA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_HBPBKHEMPEA_OFFSET))(a1);
		}

		static ::System::String* GDHLLAEFMJH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_GDHLLAEFMJH_OFFSET))(a1);
		}

		static ::System::String* BMPAJEJFCDN(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_BMPAJEJFCDN_OFFSET))(a1);
		}

		static ::System::String* ANDOLMMMEHL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_ANDOLMMMEHL_OFFSET))(a1);
		}

		static ::System::String* MGPJOMBFFCB(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_MGPJOMBFFCB_OFFSET))(a1);
		}

		static ::System::String* ILLNIJDLKIG(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LNAKIEMEDGI_ILLNIJDLKIG_OFFSET))(a1);
		}

	};
