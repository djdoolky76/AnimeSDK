#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCLGAONFCME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDKFEAFGBEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C3B710)
#define HDKFEAFGBEF_GET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x15C3B6F0)
#define HDKFEAFGBEF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C3B680)
#define HDKFEAFGBEF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C3B430)
#define HDKFEAFGBEF_SET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x15C3B700)

	class HDKFEAFGBEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FCLGAONFCME*>* _LongTermRewards_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKFEAFGBEF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKFEAFGBEF_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKFEAFGBEF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FCLGAONFCME*>* get_LongTermRewards()
		{
			return ((::System::Collections::Generic::List_1<::FCLGAONFCME*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKFEAFGBEF_GET_LONGTERMREWARDS_OFFSET))(this);
		}

		::System::Void set_LongTermRewards(::System::Collections::Generic::List_1<::FCLGAONFCME*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FCLGAONFCME*>*))((::PBYTE)hIl2Cpp + HDKFEAFGBEF_SET_LONGTERMREWARDS_OFFSET))(this, a1);
		}

	};
