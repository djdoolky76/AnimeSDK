#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class BACCOPOCMPC;
class ILLJOMOEJGF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHADBDJKANL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB26400)
#define BHADBDJKANL_CFNPDIKJPAA_OFFSET UNITYSDK_OFFSET(0xBB25B90)
#define BHADBDJKANL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB251E0)
#define BHADBDJKANL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB25450)
#define BHADBDJKANL_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBB25720)
#define BHADBDJKANL_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBB259F0)
#define BHADBDJKANL_DOONTICK_OFFSET UNITYSDK_OFFSET(0xBB25A60)
#define BHADBDJKANL_FLELNHONPHB_OFFSET UNITYSDK_OFFSET(0xBB261E0)
#define BHADBDJKANL_KDAMHPHLBKK_OFFSET UNITYSDK_OFFSET(0xBB25790)
#define BHADBDJKANL_MDEJHBOBHCG_OFFSET UNITYSDK_OFFSET(0xBB25EB0)
#define BHADBDJKANL_MGOMLAEAIAC_OFFSET UNITYSDK_OFFSET(0xBB25570)
#define BHADBDJKANL_OOKCHDHELPB_OFFSET UNITYSDK_OFFSET(0xBB25B20)

inline static constexpr unsigned int BHADBDJKANL_TypeDefinitionIndex = 58747;

	class BHADBDJKANL : public ::EDLDHDMLJDH
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* OAOJLKIAHOJ; // 0xA0
		::BACCOPOCMPC* BCKGBNAPOEL; // 0xA8
		::System::Single LJHMMPNPGNG; // 0xB0
		::System::Boolean FJEBDGJCEMM; // 0xB4
		::System::Boolean FNLIMNILPMO; // 0xB5
		::System::Boolean KIAFGDOOKHL; // 0xB6
		static ::System::String** StaticGet_JKMABBEGEAH()
		{
			return (::System::String**)UnitySDK::FromName("", "BHADBDJKANL")->GetStaticField(0x44140);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*))((::PBYTE)hIl2Cpp + BHADBDJKANL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHADBDJKANL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHADBDJKANL_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BHADBDJKANL_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + BHADBDJKANL_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHADBDJKANL_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void OOKCHDHELPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHADBDJKANL_OOKCHDHELPB_OFFSET))(this);
		}

		::System::Void MDEJHBOBHCG(::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*))((::PBYTE)hIl2Cpp + BHADBDJKANL_MDEJHBOBHCG_OFFSET))(this, a1);
		}

		::System::Void KDAMHPHLBKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHADBDJKANL_KDAMHPHLBKK_OFFSET))(this);
		}

		::System::Void MGOMLAEAIAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHADBDJKANL_MGOMLAEAIAC_OFFSET))(this);
		}

		::System::Void FLELNHONPHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHADBDJKANL_FLELNHONPHB_OFFSET))(this, a1);
		}

		::System::Boolean CFNPDIKJPAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHADBDJKANL_CFNPDIKJPAA_OFFSET))(this);
		}

	};
