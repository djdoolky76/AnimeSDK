#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"

#define LMICDIBCDJJ_POBIADGODPE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7C8A80)

inline static constexpr unsigned int LMICDIBCDJJ_POBIADGODPE_TypeDefinitionIndex = 73714;

	class LMICDIBCDJJ_POBIADGODPE : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ShaderKeyword* StaticGet_PONILDOBJGI()
		{
			return (::UnityEngine::Rendering::ShaderKeyword*)UnitySDK::FromName("", "POBIADGODPE")->GetStaticField(0x15020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMICDIBCDJJ_POBIADGODPE_CCTOR_OFFSET))();
		}

	};
