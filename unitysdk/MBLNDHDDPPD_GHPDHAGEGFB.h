#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MBLNDHDDPPD_GHPDHAGEGFB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB86D3F0)
#define MBLNDHDDPPD_GHPDHAGEGFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB86D300)
#define MBLNDHDDPPD_GHPDHAGEGFB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB86D430)
#define MBLNDHDDPPD_GHPDHAGEGFB_INVOKE_OFFSET UNITYSDK_OFFSET(0xB864B00)

inline static constexpr unsigned int MBLNDHDDPPD_GHPDHAGEGFB_TypeDefinitionIndex = 54354;

	class MBLNDHDDPPD_GHPDHAGEGFB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GHPDHAGEGFB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GHPDHAGEGFB_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GHPDHAGEGFB_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GHPDHAGEGFB_ENDINVOKE_OFFSET))(this, a1);
		}

	};
