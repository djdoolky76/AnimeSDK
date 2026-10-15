#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
class MBAHJMANGHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPGMGEOGOHE_BEAKDNEPOAA_OFFSET UNITYSDK_OFFSET(0x15DC6D50)
#define HPGMGEOGOHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC7300)
#define HPGMGEOGOHE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15DC6A30)
#define HPGMGEOGOHE_IJPCANPOACH_OFFSET UNITYSDK_OFFSET(0x15DC7150)
#define HPGMGEOGOHE_PNOKNPFACNE_OFFSET UNITYSDK_OFFSET(0x15DC6AE0)

	class HPGMGEOGOHE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGMGEOGOHE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EPADPABCFGH*>* HKKFFCBJOKM(::MBAHJMANGHN* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPADPABCFGH*>*(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EPADPABCFGH*>* PNOKNPFACNE(::MBAHJMANGHN* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPADPABCFGH*>*(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE_PNOKNPFACNE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EPADPABCFGH*>* BEAKDNEPOAA(::MBAHJMANGHN* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPADPABCFGH*>*(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE_BEAKDNEPOAA_OFFSET))(this, a1);
		}

		static ::System::Void IJPCANPOACH(::System::Collections::Generic::List_1<::EPADPABCFGH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::EPADPABCFGH*>*))((::PBYTE)hIl2Cpp + HPGMGEOGOHE_IJPCANPOACH_OFFSET))(a1);
		}

	};
