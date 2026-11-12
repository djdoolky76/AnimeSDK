#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MGIKEJFECDM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1D4450)
#define MGIKEJFECDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1D43B0)
#define MGIKEJFECDM_EPJNHIIKAEJ_OFFSET UNITYSDK_OFFSET(0xC1D43F0)
#define MGIKEJFECDM_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xC1D4440)

inline static constexpr unsigned int MGIKEJFECDM_TypeDefinitionIndex = 54794;

	class MGIKEJFECDM : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIKEJFECDM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIKEJFECDM_DISPOSE_OFFSET))(this);
		}

		::System::Void EPJNHIIKAEJ(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + MGIKEJFECDM_EPJNHIIKAEJ_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIKEJFECDM_MLMGEFIOION_OFFSET))(this);
		}

	};
