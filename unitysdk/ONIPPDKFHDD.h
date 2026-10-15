#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONIPPDKFHDD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONIPPDKFHDD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF576B0)
#define ONIPPDKFHDD_BPNJBGFNBFB_OFFSET UNITYSDK_OFFSET(0xBF57A90)
#define ONIPPDKFHDD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF57950)
#define ONIPPDKFHDD_DNFHGPCAMHH_OFFSET UNITYSDK_OFFSET(0xBF57B10)
#define ONIPPDKFHDD_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xBF57DA0)
#define ONIPPDKFHDD_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xBF57D80)
#define ONIPPDKFHDD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBF579F0)
#define ONIPPDKFHDD_ILDHLNIEIKK_OFFSET UNITYSDK_OFFSET(0xBF57B90)
#define ONIPPDKFHDD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBF57C70)
#define ONIPPDKFHDD_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0xBF57DB0)
#define ONIPPDKFHDD_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xBF57D90)

inline static constexpr unsigned int ONIPPDKFHDD_TypeDefinitionIndex = 61369;

	class ONIPPDKFHDD : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* NNOJAPCJGLA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* PCKGADHDJFF; // 0x18
		::System::UInt32 _AchievementID_k__BackingField; // 0x20
		::System::Boolean _Disposed_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_CTOR_OFFSET))(this);
		}

		static ::ONIPPDKFHDD* BPLPBPMEODA(::Il2CppArray<::System::String*>* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
		{
			return ((::ONIPPDKFHDD*(*)(::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BPNJBGFNBFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_BPNJBGFNBFB_OFFSET))(this, a1);
		}

		::System::Void DNFHGPCAMHH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_DNFHGPCAMHH_OFFSET))(this, a1);
		}

		::System::Boolean ILDHLNIEIKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_ILDHLNIEIKK_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean get_Disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_Disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_SET_DISPOSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_AchievementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONIPPDKFHDD_SET_ACHIEVEMENTID_OFFSET))(this, a1);
		}

	};
