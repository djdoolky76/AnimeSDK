#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CFNALNFLBIN;
namespace RPG::Client { class IRIManager; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define SHADERPERFTESTIRI_CTOR_OFFSET UNITYSDK_OFFSET(0xE9697C0)
#define SHADERPERFTESTIRI_EFFBPCOJJGP_OFFSET UNITYSDK_OFFSET(0xE968B70)
#define SHADERPERFTESTIRI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE9696B0)
#define SHADERPERFTESTIRI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE968DE0)

	class ShaderPerfTestIRI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* TestMesh; // 0x18
		::UnityEngine::Material* TestMat; // 0x20
		::CFNALNFLBIN* JOOGPAFFGNM; // 0x28
		::System::UInt64 ALJBKHKHDIF; // 0x30
		static ::RPG::Client::IRIManager** StaticGet_KJEGMPNCGEH()
		{
			return (::RPG::Client::IRIManager**)UnitySDK::FromName("", "ShaderPerfTestIRI")->GetStaticField(0xB2F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRIManager* EFFBPCOJJGP()
		{
			return ((::RPG::Client::IRIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_EFFBPCOJJGP_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFTESTIRI_ONDISABLE_OFFSET))(this);
		}

	};
