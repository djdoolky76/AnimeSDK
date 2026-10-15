#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NamedCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define KGKHBCCDPIC_AABNJGJKPJN_OFFSET UNITYSDK_OFFSET(0xB3F5AE0)

	class KGKHBCCDPIC : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationCurve* AABNJGJKPJN(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>*, ::System::String*))((::PBYTE)hIl2Cpp + KGKHBCCDPIC_AABNJGJKPJN_OFFSET))(a1, a2);
		}

	};
