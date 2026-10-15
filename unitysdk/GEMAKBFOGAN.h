#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GEMAKBFOGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x159D55F0)
#define GEMAKBFOGAN_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x159D5610)
#define GEMAKBFOGAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159D5790)
#define GEMAKBFOGAN__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x159D56A0)

inline static constexpr unsigned int GEMAKBFOGAN_TypeDefinitionIndex = 59876;

	class GEMAKBFOGAN : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 CIBIJLKEIMN; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMAKBFOGAN__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMAKBFOGAN_TOSTRING_OFFSET))(this);
		}

	};
