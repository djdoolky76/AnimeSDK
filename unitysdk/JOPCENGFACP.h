#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANEMGIKMMJI;
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOPCENGFACP_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x14FC7A40)
#define JOPCENGFACP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14FC7B90)
#define JOPCENGFACP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC7990)

inline static constexpr unsigned int JOPCENGFACP_TypeDefinitionIndex = 91873;

class JOPCENGFACP : public ::System::Object
{
public:
	// static const ::System::Int32 KACOJPIAJGN = 0x3; // 0x0
	::MoleMole::Config::ConfigCameraComposer* AFJNAFAOFGH; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PNHJGDHPNKI; // 0x18
	::System::Collections::Generic::List_1<::ANEMGIKMMJI*>* DCBBOJCFFHF; // 0x20
	::System::Collections::Generic::List_1<::ANEMGIKMMJI*>* HHEJJLADEBA; // 0x28
	::System::Boolean AMJMOFDGMFI; // 0x30
	::System::Boolean JFNAHBIJCIJ; // 0x31
	::System::Byte _padding0[0x2];
	::System::Int32 CGEIEGBDCPI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPCENGFACP__CTOR_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPCENGFACP_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPCENGFACP_PHOADBJGFBE_OFFSET))(this);
	}
};
