#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHOHPNEGHHN_KDNJACJEHIB;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Object; }

#define KHOHPNEGHHN_BBONOCCDJHA_1_OFFSET UNITYSDK_OFFSET(0x1DA91720)
#define KHOHPNEGHHN_BBONOCCDJHA_OFFSET UNITYSDK_OFFSET(0x1DA91430)
#define KHOHPNEGHHN_BFMLFNLPAMM_OFFSET UNITYSDK_OFFSET(0x1DA918C0)
#define KHOHPNEGHHN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA90DE0)
#define KHOHPNEGHHN_COPPAFJHMHJ_OFFSET UNITYSDK_OFFSET(0x1DA90FD0)
#define KHOHPNEGHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91920)
#define KHOHPNEGHHN_DAAIGDBGJCL_OFFSET UNITYSDK_OFFSET(0x1DA91550)
#define KHOHPNEGHHN_FGBPMMJMPJN_OFFSET UNITYSDK_OFFSET(0x1DA91370)
#define KHOHPNEGHHN_JFOCEMGIEPH_OFFSET UNITYSDK_OFFSET(0x1DA91850)
#define KHOHPNEGHHN_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DA90EE0)
#define KHOHPNEGHHN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DA90F90)

inline static constexpr unsigned int KHOHPNEGHHN_TypeDefinitionIndex = 44276;

	class KHOHPNEGHHN : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::UInt32>* IIEMHLCPMOA; // 0x10
		::RPG::PoolList_1<::System::Object*>* IEDCPLLIBHO; // 0x18
		::System::Single JBJFDLGCJNG; // 0x20
		::System::Int32 MPDOECPLMMP; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_ONRECYCLE_OFFSET))(this);
		}

		::System::Boolean COPPAFJHMHJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_COPPAFJHMHJ_OFFSET))(this, a1);
		}

		::System::Boolean FGBPMMJMPJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_FGBPMMJMPJN_OFFSET))(this);
		}

		::System::Boolean BBONOCCDJHA(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_BBONOCCDJHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BBONOCCDJHA_1(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_BBONOCCDJHA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JFOCEMGIEPH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_JFOCEMGIEPH_OFFSET))(this, a1);
		}

		::System::Boolean BFMLFNLPAMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_BFMLFNLPAMM_OFFSET))(this, a1);
		}

		::KHOHPNEGHHN_KDNJACJEHIB* DAAIGDBGJCL(::System::UInt32 a1)
		{
			return ((::KHOHPNEGHHN_KDNJACJEHIB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_DAAIGDBGJCL_OFFSET))(this, a1);
		}

	};
