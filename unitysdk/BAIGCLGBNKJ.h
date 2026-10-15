#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BAIGCLGBNKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E6CD30)
#define BAIGCLGBNKJ_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x15E6CD50)
#define BAIGCLGBNKJ__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x15E6CDE0)

	class BAIGCLGBNKJ : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 OLONOGJLCJJ; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAIGCLGBNKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + BAIGCLGBNKJ_FILLRSPCMDIDSTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIGCLGBNKJ__DOCHECKIMPL_OFFSET))(this);
		}

	};
