#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEIGMBOLDOF;
namespace System { class Object; }
namespace UnityEngine::Events { class UnityAction; }

inline static constexpr unsigned int KPNFPHJPOMM___O_TypeDefinitionIndex = 49183;

	class KPNFPHJPOMM___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet__0___OnGetPooledManagedLight()
		{
			return (::UnityEngine::Events::UnityAction**)UnitySDK::FromName("", "<>O")->GetStaticField(0x65F80);
		}

		static ::UnityEngine::Events::UnityAction** StaticGet__1___OnReleasePooledManagedLight()
		{
			return (::UnityEngine::Events::UnityAction**)UnitySDK::FromName("", "<>O")->GetStaticField(0x65F88);
		}

		static ::System::Object** StaticGet__2___OnDiscardLoadedBlock()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>O")->GetStaticField(0x65F90);
		}

	};
