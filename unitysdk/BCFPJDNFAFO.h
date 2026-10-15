#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RuntimeAtlasManager; }

#define BCFPJDNFAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA6A30)
#define BCFPJDNFAFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA6BE0)
#define BCFPJDNFAFO_JHFBGGNCCLN_OFFSET UNITYSDK_OFFSET(0x15EA6C70)
#define BCFPJDNFAFO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EA6A40)

	class BCFPJDNFAFO : public ::System::Object
	{
	public:
		::UnityEngine::UI::RuntimeAtlasManager* NECFCKBGIIJ; // 0x10
		::UnityEngine::ComputeShader* AAFAJOFGPCN; // 0x18
		::UnityEngine::Texture* JCPDDABHJPI; // 0x20
		::UnityEngine::Material* ILKIEOPBAGE; // 0x28
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
