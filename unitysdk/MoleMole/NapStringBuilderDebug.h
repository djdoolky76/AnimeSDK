#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MoleMole { class NapStringBuilderDebug_OAPGGEBDOGN; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_GETSCREENPOS_OFFSET UNITYSDK_OFFSET(0x1F7D8C80)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_RELEASESCREENPOS_OFFSET UNITYSDK_OFFSET(0x1F7D8BC0)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_RETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1F7D9190)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_SBFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1F7D9050)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D9280)

namespace MoleMole
{
	inline static constexpr unsigned int NapStringBuilderDebug_TypeDefinitionIndex = 7852;

	class NapStringBuilderDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>** StaticGet_FIGDECIPPEO()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6F10);
		}
		static ::MoleMole::NapStringBuilderDebug_OAPGGEBDOGN** StaticGet_OnGUIHandlers()
		{
			return (::MoleMole::NapStringBuilderDebug_OAPGGEBDOGN**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6F18);
		}
		static ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>** StaticGet_BOGNNMIAEFD()
		{
			return (::System::Collections::Generic::List_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(NapStringBuilderDebug_TypeDefinitionIndex)->GetStaticField(0x6F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void ReleaseScreenPos(::UnityEngine::Object* IONJNNHMDAB)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_RELEASESCREENPOS_OFFSET))(IONJNNHMDAB);
		}

		static ::UnityEngine::Rect GetScreenPos(::UnityEngine::Object* IONJNNHMDAB, ::System::String* FCCLIEJAKLI, ::UnityEngine::GUIStyle* IFBIKDHCCOF)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Object*, ::System::String*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_GETSCREENPOS_OFFSET))(IONJNNHMDAB, FCCLIEJAKLI, IFBIKDHCCOF);
		}

		static ::System::Text::StringBuilder* SBFromPool()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_SBFROMPOOL_OFFSET))();
		}

		static ::System::Void ReturnToPool(::System::Text::StringBuilder* CKGGMNHMKDB)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_RETURNTOPOOL_OFFSET))(CKGGMNHMKDB);
		}
	};
}
