#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }

#define KOIGANAMAFA_BMENMEPDLLF_OFFSET UNITYSDK_OFFSET(0xBDEB680)
#define KOIGANAMAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEB600)
#define KOIGANAMAFA_DKBOCOFMMGN_OFFSET UNITYSDK_OFFSET(0xBDEB620)
#define KOIGANAMAFA_ELCIEFMELFL_OFFSET UNITYSDK_OFFSET(0xBDEB740)
#define KOIGANAMAFA_ODINOMPCBCC_OFFSET UNITYSDK_OFFSET(0xBDEB6E0)
#define KOIGANAMAFA_PKCLFEIAKBJ_OFFSET UNITYSDK_OFFSET(0xBDEB7B0)

inline static constexpr unsigned int KOIGANAMAFA_TypeDefinitionIndex = 80077;

	class KOIGANAMAFA : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* DLJMMFPMDFD; // 0x10
		::System::Action* FOGCFLHHDIE; // 0x18
		::System::Action* EJDBBNAHNHA; // 0x20
		::System::Func_1<::System::Boolean>* AJEEDOFEJAK; // 0x28
		::System::Action_1<::UnityEngine::GameObject*>* PEJCNLBKIGN; // 0x30
		::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action_1<::System::Int32>* a4, ::System::Action_1<::UnityEngine::GameObject*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*, ::System::Action_1<::System::Int32>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + KOIGANAMAFA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean DKBOCOFMMGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGANAMAFA_DKBOCOFMMGN_OFFSET))(this);
		}

		::System::Void BMENMEPDLLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGANAMAFA_BMENMEPDLLF_OFFSET))(this);
		}

		::System::Void ODINOMPCBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGANAMAFA_ODINOMPCBCC_OFFSET))(this);
		}

		::System::Void ELCIEFMELFL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOIGANAMAFA_ELCIEFMELFL_OFFSET))(this, a1);
		}

		::System::Action_1<::UnityEngine::GameObject*>* PKCLFEIAKBJ()
		{
			return ((::System::Action_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGANAMAFA_PKCLFEIAKBJ_OFFSET))(this);
		}

	};
