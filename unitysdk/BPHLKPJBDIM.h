#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFAOGKGJGPO.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define BPHLKPJBDIM_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A41E0)
#define BPHLKPJBDIM_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0xC1A4290)
#define BPHLKPJBDIM_KKKKNGADDHP_OFFSET UNITYSDK_OFFSET(0xC1A4240)
#define BPHLKPJBDIM_PFMCNHJGDBM_OFFSET UNITYSDK_OFFSET(0xC1A41F0)

inline static constexpr unsigned int BPHLKPJBDIM_TypeDefinitionIndex = 66685;

	class BPHLKPJBDIM : public ::FFAOGKGJGPO
	{
	public:
		::System::Void _ctor(::RPG::Client::PlayerModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + BPHLKPJBDIM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LogicStateType PFMCNHJGDBM()
		{
			return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHLKPJBDIM_PFMCNHJGDBM_OFFSET))(this);
		}

		::System::Boolean KKKKNGADDHP(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BPHLKPJBDIM_KKKKNGADDHP_OFFSET))(this, a1);
		}

		::System::Int32 HNPOGLCAHPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHLKPJBDIM_HNPOGLCAHPK_OFFSET))(this);
		}

	};
