#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define DPCFKFGNBKL_AFGGOBJMINL_OFFSET UNITYSDK_OFFSET(0x11FF51F0)
#define DPCFKFGNBKL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF5200)
#define DPCFKFGNBKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FF50F0)
#define DPCFKFGNBKL_IALIPBOLIBB_OFFSET UNITYSDK_OFFSET(0x11FF4BC0)
#define DPCFKFGNBKL_KFOEEKMKGLE_OFFSET UNITYSDK_OFFSET(0x11FF4CA0)
#define DPCFKFGNBKL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x11FF4C50)
#define DPCFKFGNBKL_KKGNPEFNDJP_OFFSET UNITYSDK_OFFSET(0x11FF4890)
#define DPCFKFGNBKL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11FF4EE0)
#define DPCFKFGNBKL_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x11FF4780)
#define DPCFKFGNBKL_LPIOFIGIJLI_OFFSET UNITYSDK_OFFSET(0x11FF4F50)

inline static constexpr unsigned int DPCFKFGNBKL_TypeDefinitionIndex = 56965;

	class DPCFKFGNBKL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>* ADBBMLHMMBH; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* KKPPNNLEIBC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void KKGNPEFNDJP(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_KKGNPEFNDJP_OFFSET))(this, a1, a2);
		}

		::System::Void IALIPBOLIBB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_IALIPBOLIBB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_DISPOSE_OFFSET))(this);
		}

		::System::Void LPIOFIGIJLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_LPIOFIGIJLI_OFFSET))(this);
		}

		::System::Void KFOEEKMKGLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_KFOEEKMKGLE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AFGGOBJMINL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCFKFGNBKL_AFGGOBJMINL_OFFSET))(this);
		}

	};
