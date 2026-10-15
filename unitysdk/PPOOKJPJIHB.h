#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPOOKJPJIHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3990D0)
#define PPOOKJPJIHB_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xC399170)
#define PPOOKJPJIHB_JNMKEMLOCNP_OFFSET UNITYSDK_OFFSET(0xC399740)
#define PPOOKJPJIHB__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC399230)
#define PPOOKJPJIHB__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xC399420)
#define PPOOKJPJIHB__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xC399550)

inline static constexpr unsigned int PPOOKJPJIHB_TypeDefinitionIndex = 59873;

	class PPOOKJPJIHB : public ::RPG::Client::AsyncCheckItemBase
	{
	public:
		::System::UInt32 NBKBHKKDMJL; // 0x10
		::System::UInt32 PGIFOKHFKEH; // 0x14
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPOOKJPJIHB_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + PPOOKJPJIHB_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOOKJPJIHB__DOCHECKIMPL_OFFSET))(this);
		}

		::System::Boolean _IsDataReadyImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOOKJPJIHB__ISDATAREADYIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareDataImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOOKJPJIHB__PREPAREDATAIMPL_OFFSET))(this);
		}

		::System::Tuple* JNMKEMLOCNP()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOOKJPJIHB_JNMKEMLOCNP_OFFSET))(this);
		}

	};
