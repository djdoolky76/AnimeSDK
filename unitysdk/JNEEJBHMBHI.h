#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JNEEJBHMBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB27C4A0)
#define JNEEJBHMBHI_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB27C4C0)
#define JNEEJBHMBHI_JNMKEMLOCNP_OFFSET UNITYSDK_OFFSET(0xB27C880)
#define JNEEJBHMBHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB27C7D0)
#define JNEEJBHMBHI__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB27C580)
#define JNEEJBHMBHI__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xB27C690)
#define JNEEJBHMBHI__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xB27C730)

inline static constexpr unsigned int JNEEJBHMBHI_TypeDefinitionIndex = 59893;

	class JNEEJBHMBHI : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 AENNMCLOKOA; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNEEJBHMBHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + JNEEJBHMBHI_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJBHMBHI__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJBHMBHI__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJBHMBHI__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJBHMBHI_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 JNMKEMLOCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEJBHMBHI_JNMKEMLOCNP_OFFSET))(this);
		}

	};
