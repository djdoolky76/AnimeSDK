#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/GKICHLJKDHA_JGLJHGFNCCB.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define GKICHLJKDHA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11DBA780)
#define GKICHLJKDHA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11DBAAB0)
#define GKICHLJKDHA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11DBAA20)
#define GKICHLJKDHA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11DBA850)
#define GKICHLJKDHA_PCBMBAPMHBG_OFFSET UNITYSDK_OFFSET(0x11DBA960)
#define GKICHLJKDHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DBA7D0)
#define GKICHLJKDHA__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBA8F0)

inline static constexpr unsigned int GKICHLJKDHA_TypeDefinitionIndex = 88003;

class GKICHLJKDHA : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23B; // 0x0
	::System::Collections::Generic::Queue_1<::System::Object*>* JLBEOAMHGAI; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKICHLJKDHA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKICHLJKDHA__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKICHLJKDHA_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKICHLJKDHA_ONCLEAN_OFFSET))(this);
	}

	::System::Void PCBMBAPMHBG(::GKICHLJKDHA_JGLJHGFNCCB& BIJNDBBOLIJ)
	{
		return ((::System::Void(*)(::PVOID, ::GKICHLJKDHA_JGLJHGFNCCB&))((::PBYTE)hIl2Cpp + GKICHLJKDHA_PCBMBAPMHBG_OFFSET))(this, BIJNDBBOLIJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKICHLJKDHA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GKICHLJKDHA* JFDOOELFAOA()
	{
		return ((::GKICHLJKDHA*(*)())((::PBYTE)hIl2Cpp + GKICHLJKDHA_JFDOOELFAOA_OFFSET))();
	}
};
