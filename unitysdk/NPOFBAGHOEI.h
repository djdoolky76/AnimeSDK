#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class InverseMask; }
namespace RPG::GameCore { class ShowTutorialUIMask; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RectTransform; }

#define NPOFBAGHOEI_CIAHKPODCOO_OFFSET UNITYSDK_OFFSET(0xBD123D0)
#define NPOFBAGHOEI_CTOR_OFFSET UNITYSDK_OFFSET(0xBD11560)
#define NPOFBAGHOEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD11580)
#define NPOFBAGHOEI_DOCGPEGDFOM_OFFSET UNITYSDK_OFFSET(0xBD11C80)
#define NPOFBAGHOEI_EHLDEOCIHAM_OFFSET UNITYSDK_OFFSET(0xBD11D50)
#define NPOFBAGHOEI_KFGAHPFJHHM_OFFSET UNITYSDK_OFFSET(0xBD12310)
#define NPOFBAGHOEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD11620)
#define NPOFBAGHOEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD11FD0)
#define NPOFBAGHOEI_PAPJPCLCAHC_OFFSET UNITYSDK_OFFSET(0xBD11EB0)
#define NPOFBAGHOEI_PLOMMNFNBHN_OFFSET UNITYSDK_OFFSET(0xBD11BA0)
#define NPOFBAGHOEI_TICK_OFFSET UNITYSDK_OFFSET(0xBD12020)

inline static constexpr unsigned int NPOFBAGHOEI_TypeDefinitionIndex = 58704;

	class NPOFBAGHOEI : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::InverseMask* AHFPLGOENNH; // 0x18
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x20
		::UnityEngine::RectTransform* AFOCLDFKOCI; // 0x28
		::RPG::GameCore::ShowTutorialUIMask* OFKGLJOAMLD; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Single DJKKCALPBJE; // 0x40
		::System::Int32 POHBPGJFONJ; // 0x44
		::UnityEngine::Vector2 IKKNJMJCDOJ; // 0x48
		::System::Single EHLMEPDCBBC; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialUIMask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialUIMask*))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_TICK_OFFSET))(this, a1);
		}

		::System::Boolean PLOMMNFNBHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_PLOMMNFNBHN_OFFSET))(this);
		}

		::System::Void DOCGPEGDFOM(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_DOCGPEGDFOM_OFFSET))(this, a1, a2);
		}

		::System::Void EHLDEOCIHAM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_EHLDEOCIHAM_OFFSET))(this, a1);
		}

		::System::Boolean CIAHKPODCOO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_CIAHKPODCOO_OFFSET))(this, a1);
		}

		::System::Void PAPJPCLCAHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_PAPJPCLCAHC_OFFSET))(this, a1);
		}

		::System::Boolean KFGAHPFJHHM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPOFBAGHOEI_KFGAHPFJHHM_OFFSET))(this, a1, a2);
		}

	};
