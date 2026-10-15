#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/DNFDBKCPBNM.h"
namespace RPG::Client::Promises { class IPromise; }

#define AIBIGMJANAN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB93FD0)
#define AIBIGMJANAN_GEHGMDLOPHM_OFFSET UNITYSDK_OFFSET(0xEB93FE0)
#define AIBIGMJANAN_GNEMLAHPOFK_OFFSET UNITYSDK_OFFSET(0xEB93DE0)

inline static constexpr unsigned int AIBIGMJANAN_TypeDefinitionIndex = 62783;

	class AIBIGMJANAN : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBIGMJANAN_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GNEMLAHPOFK(::DNFDBKCPBNM a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt32))((::PBYTE)hIl2Cpp + AIBIGMJANAN_GNEMLAHPOFK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GEHGMDLOPHM(::DNFDBKCPBNM a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt32))((::PBYTE)hIl2Cpp + AIBIGMJANAN_GEHGMDLOPHM_OFFSET))(this, a1, a2);
		}

	};
