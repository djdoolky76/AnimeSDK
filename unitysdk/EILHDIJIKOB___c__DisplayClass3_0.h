#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFPAJBFOHLN;

#define EILHDIJIKOB___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154C4010)
#define EILHDIJIKOB___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET UNITYSDK_OFFSET(0x154C4050)

inline static constexpr unsigned int EILHDIJIKOB___c__DisplayClass3_0_TypeDefinitionIndex = 65032;

	class EILHDIJIKOB___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 sectionID; // 0x10
		::System::UInt32 chapterID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILHDIJIKOB___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExpertInNode_b__0(::IFPAJBFOHLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFPAJBFOHLN*))((::PBYTE)hIl2Cpp + EILHDIJIKOB___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET))(this, a1);
		}

	};
