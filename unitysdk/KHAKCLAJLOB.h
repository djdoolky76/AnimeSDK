#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/ONLKOENMDNA.h"
class AJLEDLIELON;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define KHAKCLAJLOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F58B0)
#define KHAKCLAJLOB_FGDCNFFPOGI_OFFSET UNITYSDK_OFFSET(0xB3F5480)

inline static constexpr unsigned int KHAKCLAJLOB_TypeDefinitionIndex = 49353;

	class KHAKCLAJLOB : public ::ONLKOENMDNA
	{
	public:
		::AJLEDLIELON* EMOCJFBHHPP; // 0x58
		::UnityEngine::GameObject* EMPCGLEGLIE; // 0x60
		::System::String* FADGEPEMDIJ; // 0x68
		static ::System::Int32* StaticGet_PEPNPCCEBOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KHAKCLAJLOB")->GetStaticField(0x10ED0);
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
