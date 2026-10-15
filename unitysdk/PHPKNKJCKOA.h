#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class SO_MoveTo; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define PHPKNKJCKOA_AAPKNHGHGPA_OFFSET UNITYSDK_OFFSET(0xC252530)
#define PHPKNKJCKOA_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xC252AE0)
#define PHPKNKJCKOA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC252D10)
#define PHPKNKJCKOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2523C0)
#define PHPKNKJCKOA_EBDMKPBFDLB_OFFSET UNITYSDK_OFFSET(0xC2528E0)
#define PHPKNKJCKOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC252430)
#define PHPKNKJCKOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC252BC0)
#define PHPKNKJCKOA_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xC252B30)
#define PHPKNKJCKOA_TICK_OFFSET UNITYSDK_OFFSET(0xC252C80)

inline static constexpr unsigned int PHPKNKJCKOA_TypeDefinitionIndex = 52120;

	class PHPKNKJCKOA
	{
	public:
		::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x40
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x48
		::System::Single NGAEMPHCOAI; // 0x54
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x58
		static ::System::Single* StaticGet_OEJOIIMPMDP()
		{
			return (::System::Single*)UnitySDK::FromName("", "PHPKNKJCKOA")->GetStaticField(0x15B00);
		}

		static ::System::Single* StaticGet_KJPPFFLLMAB()
		{
			return (::System::Single*)UnitySDK::FromName("", "PHPKNKJCKOA")->GetStaticField(0x15B04);
		}

		static ::System::Single* StaticGet_DCIBOJNNDCI()
		{
			return (::System::Single*)UnitySDK::FromName("", "PHPKNKJCKOA")->GetStaticField(0x15B08);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_MoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_MoveTo*))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPKNKJCKOA_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean AAPKNHGHGPA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_AAPKNHGHGPA_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean EBDMKPBFDLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPKNKJCKOA_EBDMKPBFDLB_OFFSET))(this);
		}

	};
