#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JKJLNLODJFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C702740)
#define JKJLNLODJFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C702780)
#define JKJLNLODJFA___C___UPDATEPREVIEW_SKILL_B__13_0_OFFSET UNITYSDK_OFFSET(0x1C702790)

	class JKJLNLODJFA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x114C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x114C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKJLNLODJFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJLNLODJFA___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint __UpdatePreview_Skill_b__13_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKJLNLODJFA___C___UPDATEPREVIEW_SKILL_B__13_0_OFFSET))(this, a1);
		}

	};
