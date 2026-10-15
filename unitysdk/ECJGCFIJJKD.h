#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJKPHOMIME;
class ECCFPCCFGNG;
class ECJGCFIJJKD;
class GGHEGHCAIEH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECJGCFIJJKD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12D0E610)
#define ECJGCFIJJKD_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0E6B0)
#define ECJGCFIJJKD_GET_EXAMCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0E5B0)
#define ECJGCFIJJKD_GET_EXAMINER_OFFSET UNITYSDK_OFFSET(0x12D0E590)
#define ECJGCFIJJKD_GET_ISRETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x12D0E5D0)
#define ECJGCFIJJKD_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x12D0E570)
#define ECJGCFIJJKD_GET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0x12D0E5F0)
#define ECJGCFIJJKD_SET_EXAMCONFIG_OFFSET UNITYSDK_OFFSET(0x12D0E5C0)
#define ECJGCFIJJKD_SET_EXAMINER_OFFSET UNITYSDK_OFFSET(0x12D0E5A0)
#define ECJGCFIJJKD_SET_ISRETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x12D0E5E0)
#define ECJGCFIJJKD_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x12D0E580)
#define ECJGCFIJJKD_SET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0x12D0E600)

inline static constexpr unsigned int ECJGCFIJJKD_TypeDefinitionIndex = 80250;

	class ECJGCFIJJKD : public ::System::Object
	{
	public:
		::GGHEGHCAIEH* _ExamConfig_k__BackingField; // 0x10
		::DBJKPHOMIME* _Examiner_k__BackingField; // 0x18
		::ECCFPCCFGNG* _Product_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMechIDs_k__BackingField; // 0x28
		::System::Boolean _IsReturnToMaze_k__BackingField; // 0x30
		::System::Void _ctor(::ECCFPCCFGNG* a1, ::DBJKPHOMIME* a2, ::GGHEGHCAIEH* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ECCFPCCFGNG*, ::DBJKPHOMIME*, ::GGHEGHCAIEH*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::ECCFPCCFGNG* get_Product()
		{
			return ((::ECCFPCCFGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_GET_PRODUCT_OFFSET))(this);
		}

		::System::Void set_Product(::ECCFPCCFGNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCFPCCFGNG*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_SET_PRODUCT_OFFSET))(this, a1);
		}

		::DBJKPHOMIME* get_Examiner()
		{
			return ((::DBJKPHOMIME*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_GET_EXAMINER_OFFSET))(this);
		}

		::System::Void set_Examiner(::DBJKPHOMIME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJKPHOMIME*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_SET_EXAMINER_OFFSET))(this, a1);
		}

		::GGHEGHCAIEH* get_ExamConfig()
		{
			return ((::GGHEGHCAIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_GET_EXAMCONFIG_OFFSET))(this);
		}

		::System::Void set_ExamConfig(::GGHEGHCAIEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHEGHCAIEH*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_SET_EXAMCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReturnToMaze()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_GET_ISRETURNTOMAZE_OFFSET))(this);
		}

		::System::Void set_IsReturnToMaze(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_SET_ISRETURNTOMAZE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockMechIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_GET_UNLOCKMECHIDS_OFFSET))(this);
		}

		::System::Void set_UnlockMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_SET_UNLOCKMECHIDS_OFFSET))(this, a1);
		}

		static ::ECJGCFIJJKD* BPLPBPMEODA(::ECCFPCCFGNG* a1, ::DBJKPHOMIME* a2, ::GGHEGHCAIEH* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::ECJGCFIJJKD*(*)(::ECCFPCCFGNG*, ::DBJKPHOMIME*, ::GGHEGHCAIEH*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ECJGCFIJJKD_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

	};
