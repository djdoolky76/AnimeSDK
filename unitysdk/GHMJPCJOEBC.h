#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BindPropsCablelines; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GHMJPCJOEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A299C0)
#define GHMJPCJOEBC_FDLHENHIDEE_OFFSET UNITYSDK_OFFSET(0x15A29FD0)
#define GHMJPCJOEBC_GOCLCMMOMOL_OFFSET UNITYSDK_OFFSET(0x15A29BF0)
#define GHMJPCJOEBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A299F0)

inline static constexpr unsigned int GHMJPCJOEBC_TypeDefinitionIndex = 57959;

	class GHMJPCJOEBC
	{
	public:
		::System::UInt32 PEEFHNHDBMF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindPropsCablelines*))((::PBYTE)hIl2Cpp + GHMJPCJOEBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMJPCJOEBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean GOCLCMMOMOL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMJPCJOEBC_GOCLCMMOMOL_OFFSET))(this, a1);
		}

		::System::Void FDLHENHIDEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMJPCJOEBC_FDLHENHIDEE_OFFSET))(this, a1);
		}

	};
