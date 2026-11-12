#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/ONLKOENMDNA.h"
class AJLEDLIELON;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KHAKCLAJLOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8FAD0)
#define KHAKCLAJLOB_FGDCNFFPOGI_OFFSET UNITYSDK_OFFSET(0xBC8F6A0)

inline static constexpr unsigned int KHAKCLAJLOB_TypeDefinitionIndex = 50429;

	class KHAKCLAJLOB : public ::ONLKOENMDNA
	{
	public:
		::UnityEngine::GameObject* EMPCGLEGLIE; // 0x58
		::AJLEDLIELON* EMOCJFBHHPP; // 0x60
		::System::String* FADGEPEMDIJ; // 0x68
		static ::System::Int32* StaticGet_PEPNPCCEBOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHAKCLAJLOB")->GetStaticField(0xD760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAKCLAJLOB_CTOR_OFFSET))(this);
		}

		::System::Void FGDCNFFPOGI(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + KHAKCLAJLOB_FGDCNFFPOGI_OFFSET))(this, a1, a2);
		}

	};
