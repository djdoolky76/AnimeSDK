#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define JHCCCINHFCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A2CB0)
#define JHCCCINHFCK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB1A2C30)
#define JHCCCINHFCK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB1A2C70)

inline static constexpr unsigned int JHCCCINHFCK_TypeDefinitionIndex = 71185;

	class JHCCCINHFCK : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCCCINHFCK_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCCCINHFCK_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCCCINHFCK_GET_TRANS_OFFSET))(this);
		}

	};
