#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CHCLDIOHPCN_IBCLBKFOMEM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCC92900)
#define CHCLDIOHPCN_IBCLBKFOMEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC92810)
#define CHCLDIOHPCN_IBCLBKFOMEM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCC92990)
#define CHCLDIOHPCN_IBCLBKFOMEM_INVOKE_OFFSET UNITYSDK_OFFSET(0xCC920B0)

inline static constexpr unsigned int CHCLDIOHPCN_IBCLBKFOMEM_TypeDefinitionIndex = 54352;

	class CHCLDIOHPCN_IBCLBKFOMEM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_IBCLBKFOMEM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_IBCLBKFOMEM_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_IBCLBKFOMEM_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_IBCLBKFOMEM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
