#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CutSceneSFXItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OKKFJLFMPFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEE8C90)
#define OKKFJLFMPFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE8CD0)
#define OKKFJLFMPFK___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET UNITYSDK_OFFSET(0xBEE8CE0)
#define OKKFJLFMPFK___C___INITCUTSCENEINFO_B__51_0_OFFSET UNITYSDK_OFFSET(0xBEE8CF0)

inline static constexpr unsigned int OKKFJLFMPFK___c_TypeDefinitionIndex = 56370;

	class OKKFJLFMPFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566B0);
		}

		static ::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>** StaticGet___9__51_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566B8);
		}

		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C_CTOR_OFFSET))(this);
		}

		::System::Void __CutsceneAudioBegin_b__30_0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET))(this, a1);
		}

		::System::Int32 __InitCutsceneInfo_b__51_0(::RPG::GameCore::CutSceneSFXItem* a1, ::RPG::GameCore::CutSceneSFXItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CutSceneSFXItem*, ::RPG::GameCore::CutSceneSFXItem*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C___INITCUTSCENEINFO_B__51_0_OFFSET))(this, a1, a2);
		}

	};
