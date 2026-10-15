#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AEFKGOPKOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB14F6E0)
#define AEFKGOPKOKD_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB14F650)
#define AEFKGOPKOKD__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB14F700)

inline static constexpr unsigned int AEFKGOPKOKD_TypeDefinitionIndex = 59884;

	class AEFKGOPKOKD : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 CLHLFGJGGCH; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEFKGOPKOKD_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + AEFKGOPKOKD_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFKGOPKOKD__DOCHECKIMPL_OFFSET))(this);
		}

	};
