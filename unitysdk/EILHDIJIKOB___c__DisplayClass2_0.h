#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFPAJBFOHLN;

#define EILHDIJIKOB___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19A9F500)
#define EILHDIJIKOB___C__DISPLAYCLASS2_0__HASEXPERTINNODE_B__0_OFFSET UNITYSDK_OFFSET(0x19A9F760)

inline static constexpr unsigned int EILHDIJIKOB___c__DisplayClass2_0_TypeDefinitionIndex = 66631;

	class EILHDIJIKOB___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 sectionID; // 0x10
		::System::UInt32 chapterID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILHDIJIKOB___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasExpertInNode_b__0(::IFPAJBFOHLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFPAJBFOHLN*))((::PBYTE)hIl2Cpp + EILHDIJIKOB___C__DISPLAYCLASS2_0__HASEXPERTINNODE_B__0_OFFSET))(this, a1);
		}

	};
