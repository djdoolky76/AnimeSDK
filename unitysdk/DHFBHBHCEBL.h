#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvSkillAddServerCheckSkillResultCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DHFBHBHCEBL_ACPBDNFIHDF_OFFSET UNITYSDK_OFFSET(0xEBCD400)
#define DHFBHBHCEBL_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xEBCD260)
#define DHFBHBHCEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBCCF00)
#define DHFBHBHCEBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBCD320)
#define DHFBHBHCEBL_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xEBCD150)
#define DHFBHBHCEBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBCCF90)
#define DHFBHBHCEBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBCD210)

inline static constexpr unsigned int DHFBHBHCEBL_TypeDefinitionIndex = 52509;

	class DHFBHBHCEBL
	{
	public:
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x28
		::System::UInt32 GDMJNMFOKIO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_DISPOSE_OFFSET))(this);
		}

		::System::Void ACPBDNFIHDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_ACPBDNFIHDF_OFFSET))(this, a1);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHBHCEBL_AIJLDADIBNM_OFFSET))(this);
		}

	};
