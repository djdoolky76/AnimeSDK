#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMNDOAPOPEI_CTOR_OFFSET UNITYSDK_OFFSET(0xDA34F60)
#define CMNDOAPOPEI_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xDA34F90)
#define CMNDOAPOPEI_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xDA35320)
#define CMNDOAPOPEI_JNMKEMLOCNP_OFFSET UNITYSDK_OFFSET(0xDA352E0)
#define CMNDOAPOPEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDA35230)
#define CMNDOAPOPEI__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xDA35020)
#define CMNDOAPOPEI__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xDA350F0)
#define CMNDOAPOPEI__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xDA35190)

inline static constexpr unsigned int CMNDOAPOPEI_TypeDefinitionIndex = 59882;

	class CMNDOAPOPEI : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 AENNMCLOKOA; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMNDOAPOPEI_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CMNDOAPOPEI_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 JNMKEMLOCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI_JNMKEMLOCNP_OFFSET))(this);
		}

		::System::String* GetCheckItemInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNDOAPOPEI_GETCHECKITEMINFO_OFFSET))(this);
		}

	};
