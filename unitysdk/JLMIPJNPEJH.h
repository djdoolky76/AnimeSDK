#pragma once
#include "unitysdk/unitysdk.h"
class MKNOAOJPALD;
namespace RPG::GameCore { class GroupInitMemberEntityDynamicValues; }
namespace RPG::GameCore { class TaskContext; }

#define JLMIPJNPEJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB24FF00)
#define JLMIPJNPEJH_FNBDNKLMCDI_OFFSET UNITYSDK_OFFSET(0xB2502D0)
#define JLMIPJNPEJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24FF30)

	class JLMIPJNPEJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityDynamicValues* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityDynamicValues*))((::PBYTE)hIl2Cpp + JLMIPJNPEJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIPJNPEJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FNBDNKLMCDI(::MKNOAOJPALD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNOAOJPALD*))((::PBYTE)hIl2Cpp + JLMIPJNPEJH_FNBDNKLMCDI_OFFSET))(this, a1);
		}

	};
