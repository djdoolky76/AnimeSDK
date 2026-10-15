#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define FFAOGKGJGPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1572EEF0)
#define FFAOGKGJGPO_FCDNCJCCMFD_OFFSET UNITYSDK_OFFSET(0x1572EFB0)
#define FFAOGKGJGPO_GET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x1572EF40)
#define FFAOGKGJGPO_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0x1572F000)
#define FFAOGKGJGPO_JINMEMHADCJ_OFFSET UNITYSDK_OFFSET(0x1572F130)
#define FFAOGKGJGPO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1572F060)
#define FFAOGKGJGPO_KKKKNGADDHP_OFFSET UNITYSDK_OFFSET(0x1572EF60)
#define FFAOGKGJGPO_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1572F0B0)
#define FFAOGKGJGPO_PFMCNHJGDBM_OFFSET UNITYSDK_OFFSET(0x1572EF00)
#define FFAOGKGJGPO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1572F0F0)
#define FFAOGKGJGPO_SET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x1572EF50)

inline static constexpr unsigned int FFAOGKGJGPO_TypeDefinitionIndex = 66683;

	class FFAOGKGJGPO : public ::System::Object
	{
	public:
		::RPG::Client::PlayerModule* EOBLJJBOBIN; // 0x10
		::System::Boolean _IsEntered_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::PlayerModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LogicStateType PFMCNHJGDBM()
		{
			return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_PFMCNHJGDBM_OFFSET))(this);
		}

		::System::Boolean get_IsEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_GET_ISENTERED_OFFSET))(this);
		}

		::System::Void set_IsEntered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_SET_ISENTERED_OFFSET))(this, a1);
		}

		::System::Boolean KKKKNGADDHP(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_KKKKNGADDHP_OFFSET))(this, a1);
		}

		::System::Boolean FCDNCJCCMFD(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_FCDNCJCCMFD_OFFSET))(this, a1);
		}

		::System::Int32 HNPOGLCAHPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JINMEMHADCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAOGKGJGPO_JINMEMHADCJ_OFFSET))(this);
		}

	};
