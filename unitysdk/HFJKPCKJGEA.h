#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFJKPCKJGEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7AB20)
#define HFJKPCKJGEA_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x15C7AC10)
#define HFJKPCKJGEA_GET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x15C7AE50)
#define HFJKPCKJGEA_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x15C7AE30)
#define HFJKPCKJGEA_SET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x15C7AE60)
#define HFJKPCKJGEA_SET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x15C7AE40)
#define HFJKPCKJGEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C7AD50)
#define HFJKPCKJGEA__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x15C7ACA0)

inline static constexpr unsigned int HFJKPCKJGEA_TypeDefinitionIndex = 59885;

	class HFJKPCKJGEA : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _OfferingLevel_k__BackingField; // 0x10
		::System::UInt32 _OfferingType_k__BackingField; // 0x14
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKPCKJGEA__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 get_OfferingType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_GET_OFFERINGTYPE_OFFSET))(this);
		}

		::System::Void set_OfferingType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_SET_OFFERINGTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OfferingLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_GET_OFFERINGLEVEL_OFFSET))(this);
		}

		::System::Void set_OfferingLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFJKPCKJGEA_SET_OFFERINGLEVEL_OFFSET))(this, a1);
		}

	};
