#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/System/Object.h"
class NNAFEEPMIGK;
namespace System { class String; }

#define NNAFEEPMIGK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x179D51D0)
#define NNAFEEPMIGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x179D52C0)
#define NNAFEEPMIGK_CTOR_OFFSET UNITYSDK_OFFSET(0x179D52B0)

inline static constexpr unsigned int NNAFEEPMIGK_TypeDefinitionIndex = 73739;

	class NNAFEEPMIGK : public ::System::Object
	{
	public:
		::System::String* INJJNCAGKKG; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
		static ::NNAFEEPMIGK** StaticGet_IBHILJLAEDC()
		{
			return (::NNAFEEPMIGK**)UnitySDK::FromName("", "NNAFEEPMIGK")->GetStaticField(0x57200);
		}

		static ::NNAFEEPMIGK** StaticGet_NGFGMAKPKPD()
		{
			return (::NNAFEEPMIGK**)UnitySDK::FromName("", "NNAFEEPMIGK")->GetStaticField(0x57208);
		}

		static ::NNAFEEPMIGK** StaticGet_MOKKBFKOBFH()
		{
			return (::NNAFEEPMIGK**)UnitySDK::FromName("", "NNAFEEPMIGK")->GetStaticField(0x57210);
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNAFEEPMIGK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAFEEPMIGK_CCTOR_OFFSET))();
		}

		static ::NNAFEEPMIGK* ACMKLFOMPFC(::RPG::GameCore::BossHeadEffType a1)
		{
			return ((::NNAFEEPMIGK*(*)(::RPG::GameCore::BossHeadEffType))((::PBYTE)hIl2Cpp + NNAFEEPMIGK_ACMKLFOMPFC_OFFSET))(a1);
		}

	};
