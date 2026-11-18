#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLIJIMBLONP;
class PKLAICEMAHO;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFLBAFBKJIL_HMECLEIFEJI_OFFSET UNITYSDK_OFFSET(0x10F29810)
#define EFLBAFBKJIL_JJPAKNHGGPK_OFFSET UNITYSDK_OFFSET(0x10F29660)
#define EFLBAFBKJIL_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x10F297D0)
#define EFLBAFBKJIL_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x10F29620)
#define EFLBAFBKJIL_OGPBEDJNFGN_OFFSET UNITYSDK_OFFSET(0x10F29710)
#define EFLBAFBKJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x10F29580)

inline static constexpr unsigned int EFLBAFBKJIL_TypeDefinitionIndex = 70410;

class EFLBAFBKJIL : public ::System::Object
{
public:
	::PKLAICEMAHO* MIGAOFOKENO; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* BAEBCJNMBMI; // 0x18

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + EFLBAFBKJIL__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Void JJPAKNHGGPK(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* IGMPIBHFBKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EFLBAFBKJIL_JJPAKNHGGPK_OFFSET))(this, IGMPIBHFBKK);
	}

	::System::Void OGPBEDJNFGN(::MLIJIMBLONP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MLIJIMBLONP*))((::PBYTE)hIl2Cpp + EFLBAFBKJIL_OGPBEDJNFGN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLBAFBKJIL_KBMFKANENAJ_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLBAFBKJIL_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HMECLEIFEJI(::System::UInt32 INEPJABHIIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFLBAFBKJIL_HMECLEIFEJI_OFFSET))(this, INEPJABHIIG);
	}
};
