#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLFHEOCDC;
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Threading { class Thread; }

#define CFPLMIJMBLJ_HADEPEEANED_OFFSET UNITYSDK_OFFSET(0x145B4BE0)
#define CFPLMIJMBLJ_IJEEIGODPCE_OFFSET UNITYSDK_OFFSET(0x145B4B90)
#define CFPLMIJMBLJ_JPMMAPEPMMA_OFFSET UNITYSDK_OFFSET(0x145B4DF0)
#define CFPLMIJMBLJ_LIELEBAGNBL_OFFSET UNITYSDK_OFFSET(0x145B3F10)
#define CFPLMIJMBLJ_OEFDHOIIDDI_OFFSET UNITYSDK_OFFSET(0x145B4210)
#define CFPLMIJMBLJ_PCJKBHGHEBF_OFFSET UNITYSDK_OFFSET(0x145B4430)
#define CFPLMIJMBLJ_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x145B4180)
#define CFPLMIJMBLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x145B3E80)

inline static constexpr unsigned int CFPLMIJMBLJ_TypeDefinitionIndex = 79176;

class CFPLMIJMBLJ : public ::System::Object
{
public:
	::System::Threading::Thread* MEJDACIELNI; // 0x10
	::System::Net::Sockets::TcpClient* JJNOABNKPAD; // 0x18
	::Il2CppArray<::System::Byte>* EABAGMHBAAL; // 0x20
	::System::Collections::Concurrent::ConcurrentQueue_1<::MEKLFHEOCDC*>* DHDKMMHEKDN; // 0x28
	::System::String* IENIFKGICJK; // 0x30
	::Il2CppArray<::System::Byte>* KOPFGBIHCNC; // 0x38
	::System::Int32 FOIHNOHIFJF; // 0x40
	::System::Int32 CNCOBGICEHE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ__CTOR_OFFSET))(this);
	}

	::System::Void LIELEBAGNBL(::System::String* FGDBMLPJDFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_LIELEBAGNBL_OFFSET))(this, FGDBMLPJDFA);
	}

	::System::Void OEFDHOIIDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_OEFDHOIIDDI_OFFSET))(this);
	}

	::System::Boolean IJEEIGODPCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_IJEEIGODPCE_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void PCJKBHGHEBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_PCJKBHGHEBF_OFFSET))(this);
	}

	::System::Void HADEPEEANED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_HADEPEEANED_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKLFHEOCDC*>* JPMMAPEPMMA()
	{
		return ((::System::Collections::Generic::List_1<::MEKLFHEOCDC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPLMIJMBLJ_JPMMAPEPMMA_OFFSET))(this);
	}
};
