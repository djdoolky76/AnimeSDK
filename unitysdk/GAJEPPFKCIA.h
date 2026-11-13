#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LHDOFEMLLNP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GAJEPPFKCIA_BAMIHKPNCHO_OFFSET UNITYSDK_OFFSET(0x1B86E330)
#define GAJEPPFKCIA_BBFBDKHEAPC_OFFSET UNITYSDK_OFFSET(0x1B86E3A0)
#define GAJEPPFKCIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B86DEE0)
#define GAJEPPFKCIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B86DD90)
#define GAJEPPFKCIA_HNKHPDCPIOB_OFFSET UNITYSDK_OFFSET(0x1B86E2D0)
#define GAJEPPFKCIA_NAFKLBKMCDK_OFFSET UNITYSDK_OFFSET(0x1B86E210)
#define GAJEPPFKCIA_NJEIDDBFGNG_OFFSET UNITYSDK_OFFSET(0x1B86DFF0)
#define GAJEPPFKCIA_OPKEDIPFHLG_OFFSET UNITYSDK_OFFSET(0x1B86E0E0)
#define GAJEPPFKCIA_PJPLMDFNNLM_OFFSET UNITYSDK_OFFSET(0x1B86E000)
#define GAJEPPFKCIA_PLOPMBILKCA_OFFSET UNITYSDK_OFFSET(0x1B86E150)
#define GAJEPPFKCIA__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B86E400)

inline static constexpr unsigned int GAJEPPFKCIA_TypeDefinitionIndex = 54680;

	class GAJEPPFKCIA : public ::RPG::GameCore::TaskContext
	{
	public:
		::LHDOFEMLLNP* OENHLCNCOAI; // 0xA8
		::Il2CppArray<::System::String*>* LIFFHFDCLMK; // 0xB0
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* JGMLFDLIKJA; // 0xB8
		::Il2CppArray<::RPG::GameCore::GameEntity*>* IBNFKPCLAPE; // 0xC0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a4, ::LHDOFEMLLNP* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::LHDOFEMLLNP*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* NJEIDDBFGNG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_NJEIDDBFGNG_OFFSET))(this);
		}

		::System::Boolean PJPLMDFNNLM(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_PJPLMDFNNLM_OFFSET))(this, a1, a2);
		}

		::System::Boolean OPKEDIPFHLG(::System::Object* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_OPKEDIPFHLG_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLOPMBILKCA(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_PLOPMBILKCA_OFFSET))(this, a1);
		}

		::System::Void NAFKLBKMCDK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_NAFKLBKMCDK_OFFSET))(this, a1);
		}

		::System::Void HNKHPDCPIOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_HNKHPDCPIOB_OFFSET))(this, a1);
		}

		::System::Boolean BAMIHKPNCHO(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_BAMIHKPNCHO_OFFSET))(this, a1, a2);
		}

		::System::Void BBFBDKHEAPC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GAJEPPFKCIA_BBFBDKHEAPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJEPPFKCIA__GETSELFINSTANCE_OFFSET))(this);
		}

	};
