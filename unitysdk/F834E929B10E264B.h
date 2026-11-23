#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/ABC/SideWalkSegment.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define F834E929B10E264B_B27B497866DBE384_OFFSET UNITYSDK_OFFSET(0x387C400)
#define F834E929B10E264B_EA9B039A92BBC83B_OFFSET UNITYSDK_OFFSET(0x1831260)
#define F834E929B10E264B_EB5CF80A188DB7A4_OFFSET UNITYSDK_OFFSET(0x169C070)
#define F834E929B10E264B_EC6BABBF7BA3EA3B_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F834E929B10E264B_F27361CB9068D811_OFFSET UNITYSDK_OFFSET(0x165A410)
#define F834E929B10E264B_F5DC992153D5E7DD_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F834E929B10E264B_FB5C7AB5B76FF711_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define F834E929B10E264B_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x387C1A0)

inline static constexpr unsigned int F834E929B10E264B_TypeDefinitionIndex = 18031;

class F834E929B10E264B : public ::System::Object
{
public:
	::System::Int32 BD51525E545513CA; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A34B303840BEA2B7; // 0x18
	::System::Int32 E1F902515233A337; // 0x20
	::System::Byte _padding1[0x4];
	::Il2CppArray<::System::Single>* AB6D313E99149947; // 0x28
	::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>* F82E2DB57F03438C; // 0x30
	::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>* BCE3B838C1644329; // 0x38

	::System::Int32 EC6BABBF7BA3EA3B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_EC6BABBF7BA3EA3B_OFFSET))(this);
	}

	::System::Int32 EA9B039A92BBC83B()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_EA9B039A92BBC83B_OFFSET))(this);
	}

	::Il2CppArray<::System::Single>* EB5CF80A188DB7A4()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_EB5CF80A188DB7A4_OFFSET))(this);
	}

	::System::Type* B27B497866DBE384()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_B27B497866DBE384_OFFSET))(this);
	}

	::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>* FB5C7AB5B76FF711()
	{
		return ((::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_FB5C7AB5B76FF711_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::F834E929B10E264B* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F834E929B10E264B*))((::PBYTE)hIl2Cpp + F834E929B10E264B_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>* F27361CB9068D811()
	{
		return ((::Il2CppArray<::HoudiniEngineUnity::ABC::SideWalkSegment>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_F27361CB9068D811_OFFSET))(this);
	}

	::System::String* F5DC992153D5E7DD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F834E929B10E264B_F5DC992153D5E7DD_OFFSET))(this);
	}
};
