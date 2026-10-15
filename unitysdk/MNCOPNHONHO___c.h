#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class MNCOPNHONHO;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MNCOPNHONHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA036F0)
#define MNCOPNHONHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA03730)
#define MNCOPNHONHO___C__CREATECAMERAVIEW_B__126_0_OFFSET UNITYSDK_OFFSET(0xBA03740)
#define MNCOPNHONHO___C__REPORTGAMEEND_B__326_0_OFFSET UNITYSDK_OFFSET(0xBA03760)

inline static constexpr unsigned int MNCOPNHONHO___c_TypeDefinitionIndex = 76689;

	class MNCOPNHONHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x109E0);
		}

		static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__326_0()
		{
			return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x109E8);
		}

		static ::System::Action** StaticGet___9__126_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x109F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCOPNHONHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C_CTOR_OFFSET))(this);
		}

		::System::Void _CreateCameraView_b__126_0(::MNCOPNHONHO* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__CREATECAMERAVIEW_B__126_0_OFFSET))(this, a1, a2);
		}

		::System::String* _ReportGameEnd_b__326_0(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__REPORTGAMEEND_B__326_0_OFFSET))(this, a1);
		}

	};
