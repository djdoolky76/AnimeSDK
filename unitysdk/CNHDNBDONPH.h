#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFAOGKGJGPO.h"
#include "unitysdk/RPG/Client/LogicStateType.h"
namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define CNHDNBDONPH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4FCC0)
#define CNHDNBDONPH_FCDNCJCCMFD_OFFSET UNITYSDK_OFFSET(0xDA4FDD0)
#define CNHDNBDONPH_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0xDA4FD70)
#define CNHDNBDONPH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDA4FE20)
#define CNHDNBDONPH_KKKKNGADDHP_OFFSET UNITYSDK_OFFSET(0xDA4FD20)
#define CNHDNBDONPH_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xDA508C0)
#define CNHDNBDONPH_PFMCNHJGDBM_OFFSET UNITYSDK_OFFSET(0xDA4FCD0)

inline static constexpr unsigned int CNHDNBDONPH_TypeDefinitionIndex = 66671;

	class CNHDNBDONPH : public ::FFAOGKGJGPO
	{
	public:
		::System::Void _ctor(::RPG::Client::PlayerModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + CNHDNBDONPH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LogicStateType PFMCNHJGDBM()
		{
			return ((::RPG::Client::LogicStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHDNBDONPH_PFMCNHJGDBM_OFFSET))(this);
		}

		::System::Boolean KKKKNGADDHP(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CNHDNBDONPH_KKKKNGADDHP_OFFSET))(this, a1);
		}

		::System::Int32 HNPOGLCAHPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHDNBDONPH_HNPOGLCAHPK_OFFSET))(this);
		}

		::System::Boolean FCDNCJCCMFD(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CNHDNBDONPH_FCDNCJCCMFD_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CNHDNBDONPH_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHDNBDONPH_OPCKNBHNBOA_OFFSET))(this);
		}

	};
