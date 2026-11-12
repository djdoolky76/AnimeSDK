#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JHKMDPDHINO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DC530)
#define JHKMDPDHINO_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB9DC5D0)
#define JHKMDPDHINO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB9DC7B0)
#define JHKMDPDHINO__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB9DC660)

inline static constexpr unsigned int JHKMDPDHINO_TypeDefinitionIndex = 61161;

	class JHKMDPDHINO : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 CDOCEMFOMAI; // 0x10
		::System::UInt32 CIBIJLKEIMN; // 0x14
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHKMDPDHINO_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + JHKMDPDHINO_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMDPDHINO__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKMDPDHINO_TOSTRING_OFFSET))(this);
		}

	};
