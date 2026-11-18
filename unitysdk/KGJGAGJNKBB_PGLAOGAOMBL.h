#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGHDIOCBPHD;

#define KGJGAGJNKBB_PGLAOGAOMBL_HAMHGECFHNB_OFFSET UNITYSDK_OFFSET(0x1F724A60)
#define KGJGAGJNKBB_PGLAOGAOMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F724A50)

inline static constexpr unsigned int KGJGAGJNKBB_PGLAOGAOMBL_TypeDefinitionIndex = 96409;

class KGJGAGJNKBB_PGLAOGAOMBL : public ::System::Object
{
public:
	::EGHDIOCBPHD* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGAGJNKBB_PGLAOGAOMBL__CTOR_OFFSET))(this);
	}

	::System::Void HAMHGECFHNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGAGJNKBB_PGLAOGAOMBL_HAMHGECFHNB_OFFSET))(this);
	}
};
