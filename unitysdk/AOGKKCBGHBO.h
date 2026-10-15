#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::CrowdAnimator { class SkinnedMeshData; }
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define AOGKKCBGHBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x158A0D40)
#define AOGKKCBGHBO_FHJFAACBEPM_OFFSET UNITYSDK_OFFSET(0x158A0650)
#define AOGKKCBGHBO_MCHMLDGMINI_OFFSET UNITYSDK_OFFSET(0x158A06B0)

inline static constexpr unsigned int AOGKKCBGHBO_TypeDefinitionIndex = 73727;

	class AOGKKCBGHBO : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EEEMBMAHNMJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOGKKCBGHBO")->GetStaticField(0x5B50);
		}

		static ::System::Boolean* StaticGet_DPHNNDMOCPJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOGKKCBGHBO")->GetStaticField(0x5B51);
		}

		static ::System::Int32* StaticGet_NNADHCHDDBE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AOGKKCBGHBO")->GetStaticField(0x5B54);
		}

		// static const ::System::String* HOAFODJBPLL; // 0x0
		// static const ::System::String* HKIMHMBFNBB; // 0x0
		// static const ::System::String* NDKEHKILJIE; // 0x0
		// static const ::System::String* BLEDIIGHOEH; // 0x0
		// static const ::System::String* ACPNABKGIDE; // 0x0
		// static const ::System::String* FAKPCABCIGK; // 0x0
		// static const ::System::String* OLGHLHFONID; // 0x0
		// static const ::System::String* MKJGHONPCKG; // 0x0
		// static const ::System::String* GOPBCJLAKAD; // 0x0
		// static const ::System::String* GGELHNGBKKG; // 0x0
		// static const ::System::String* FNAOEPPMJMH; // 0x0
		// static const ::System::String* GAOBOPJHFKH; // 0x0
		// static const ::System::String* MGOFNPJAHCL; // 0x0
		// static const ::System::Object IKHGOFPKMPL; // 0x0
		// static const ::System::Object CCAFDCIMAOG; // 0x0
		// static const ::System::Object FJGLHKFNIEE; // 0x0
		// static const ::System::Object KLGALKGLLNJ; // 0x0
		// static const ::System::Object EJILHMLDEJI; // 0x0
		// static const ::System::Object NECJDPIBOIC; // 0x0
		// static const ::System::Object PJAGAJHHLFD; // 0x0
		// static const ::System::Object PCGHJEKBDII; // 0x0
		// static const ::System::Object GMJAOGILEPK; // 0x0
		// static const ::System::Object FDIFODCEKFM; // 0x0
		// static const ::System::Object EGMILPLIGGA; // 0x0
		// static const ::System::Object CLKEACLBBMN; // 0x0
		// static const ::System::Object BEFLKBKBKJC; // 0x0
		// static const ::System::Object EDINGBLEIGN; // 0x0
		// static const ::System::Object BJNOOEIGCLP; // 0x0
		// static const ::System::Object EEPJNJGLJAK; // 0x0
		// static const ::System::Object EPODLKIMCAM; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOGKKCBGHBO_CCTOR_OFFSET))();
		}

		static ::UnityEngine::ComputeShader* FHJFAACBEPM(::System::String* a1)
		{
			return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + AOGKKCBGHBO_FHJFAACBEPM_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* MCHMLDGMINI(::UnityEngine::Mesh* a1, ::RPG::Client::CrowdAnimator::SkinnedMeshData* a2)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Mesh*, ::RPG::Client::CrowdAnimator::SkinnedMeshData*))((::PBYTE)hIl2Cpp + AOGKKCBGHBO_MCHMLDGMINI_OFFSET))(a1, a2);
		}

	};
