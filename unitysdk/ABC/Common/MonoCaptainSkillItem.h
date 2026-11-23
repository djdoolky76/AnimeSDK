#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define ABC_COMMON_MONOCAPTAINSKILLITEM_A41DBDA70C19CE08_OFFSET UNITYSDK_OFFSET(0x2073320)
#define ABC_COMMON_MONOCAPTAINSKILLITEM_AC1102CBF080C848_OFFSET UNITYSDK_OFFSET(0x20734E0)
#define ABC_COMMON_MONOCAPTAINSKILLITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x2073600)
#define ABC_COMMON_MONOCAPTAINSKILLITEM_E450BEAFA193ADE5_OFFSET UNITYSDK_OFFSET(0x2073550)
#define ABC_COMMON_MONOCAPTAINSKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Common
{
	inline static constexpr unsigned int MonoCaptainSkillItem_TypeDefinitionIndex = 8439;

	class MonoCaptainSkillItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* EB5FF5FADD481CB9; // 0x20
		::ABC::UI::MonoLocalizedTmp* ABF3D4C6D9DBBA5F; // 0x28
		::UnityEngine::Animation* E1D4957409F06003; // 0x30
		::ABC::UI::MonoButton* A259F11891ED0508; // 0x38
		::System::Action* B6B90A2020A97123; // 0x40
		::System::Boolean ABCB89912544F076; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOCAPTAINSKILLITEM__CTOR_OFFSET))(this);
		}

		::System::Void E3D815C5535F6868(::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::System::String* F79B4D487F303AB2, ::System::Action* E8679FD1EECFC87D)
		{
			return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOCAPTAINSKILLITEM_E3D815C5535F6868_OFFSET))(this, E7102EB4CD1D28DD, F79B4D487F303AB2, E8679FD1EECFC87D);
		}

		::System::Void E450BEAFA193ADE5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOCAPTAINSKILLITEM_E450BEAFA193ADE5_OFFSET))(this);
		}

		::System::Void AC1102CBF080C848()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOCAPTAINSKILLITEM_AC1102CBF080C848_OFFSET))(this);
		}

		::System::Void A41DBDA70C19CE08()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOCAPTAINSKILLITEM_A41DBDA70C19CE08_OFFSET))(this);
		}
	};
}
