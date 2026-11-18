#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAGKKKLPKMD;
class PALIHIFCJFF;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCCIEMAJJBI_DCIKKLCHIOF_OFFSET UNITYSDK_OFFSET(0x13A870B0)
#define PCCIEMAJJBI_INITFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x13A86A30)
#define PCCIEMAJJBI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A870A0)

inline static constexpr unsigned int PCCIEMAJJBI_TypeDefinitionIndex = 85347;

class PCCIEMAJJBI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AAGKKKLPKMD*>* IFEMIJPMDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCIEMAJJBI__CTOR_OFFSET))(this);
	}

	::System::Boolean InitFormConfig(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::PALIHIFCJFF*& BLMFPCIIOMN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::PALIHIFCJFF*&))((::PBYTE)hIl2Cpp + PCCIEMAJJBI_INITFORMCONFIG_OFFSET))(this, KECKGDFIALJ, BLMFPCIIOMN);
	}

	::System::Boolean DCIKKLCHIOF(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ, ::PALIHIFCJFF*& BLMFPCIIOMN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::PALIHIFCJFF*&))((::PBYTE)hIl2Cpp + PCCIEMAJJBI_DCIKKLCHIOF_OFFSET))(this, KECKGDFIALJ, BLMFPCIIOMN);
	}
};
