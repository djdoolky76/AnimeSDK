#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RuntimeAtlasManager; }

#define BCFPJDNFAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1709F170)
#define BCFPJDNFAFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1709F320)
#define BCFPJDNFAFO_JHFBGGNCCLN_OFFSET UNITYSDK_OFFSET(0x1709F3B0)
#define BCFPJDNFAFO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1709F180)

inline static constexpr unsigned int BCFPJDNFAFO_TypeDefinitionIndex = 74720;

	class BCFPJDNFAFO : public ::System::Object
	{
	public:
		::UnityEngine::UI::RuntimeAtlasManager* NECFCKBGIIJ; // 0x10
		::UnityEngine::Texture* JCPDDABHJPI; // 0x18
		::UnityEngine::Material* ILKIEOPBAGE; // 0x20
		::UnityEngine::ComputeShader* AAFAJOFGPCN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFPJDNFAFO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFPJDNFAFO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFPJDNFAFO_DISPOSE_OFFSET))(this);
		}

		::System::Void JHFBGGNCCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFPJDNFAFO_JHFBGGNCCLN_OFFSET))(this);
		}

	};
