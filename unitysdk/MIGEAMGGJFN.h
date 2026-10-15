#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonUnitMemoryStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MIGEAMGGJFN_JNCGDICPOAJ.h"
class LDJLOIJHLOC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIGEAMGGJFN_AOEANLEHBJD_1_OFFSET UNITYSDK_OFFSET(0xB94E1F0)
#define MIGEAMGGJFN_AOEANLEHBJD_OFFSET UNITYSDK_OFFSET(0xB94E180)
#define MIGEAMGGJFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB94E570)
#define MIGEAMGGJFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB94D8C0)
#define MIGEAMGGJFN_KAAIHDNBDHB_OFFSET UNITYSDK_OFFSET(0xB94E410)
#define MIGEAMGGJFN_LFIGCCIMAFI_OFFSET UNITYSDK_OFFSET(0xB94D9B0)
#define MIGEAMGGJFN_OOGCDFGOFIM_1_OFFSET UNITYSDK_OFFSET(0xB94DD50)
#define MIGEAMGGJFN_OOGCDFGOFIM_OFFSET UNITYSDK_OFFSET(0xB94D930)

inline static constexpr unsigned int MIGEAMGGJFN_TypeDefinitionIndex = 62212;

	class MIGEAMGGJFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DONPDOLJFJN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_DISPOSE_OFFSET))(this);
		}

		::System::Void OOGCDFGOFIM(::LDJLOIJHLOC* a1, ::RPG::GameCore::SummonUnitMemoryStrategy a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LDJLOIJHLOC*, ::RPG::GameCore::SummonUnitMemoryStrategy, ::System::Object*))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_OOGCDFGOFIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOGCDFGOFIM_1(::MIGEAMGGJFN_JNCGDICPOAJ a1, ::RPG::GameCore::SummonUnitMemoryStrategy a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MIGEAMGGJFN_JNCGDICPOAJ, ::RPG::GameCore::SummonUnitMemoryStrategy, ::System::Object*))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_OOGCDFGOFIM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* AOEANLEHBJD(::LDJLOIJHLOC* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::LDJLOIJHLOC*))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_AOEANLEHBJD_OFFSET))(this, a1);
		}

		::System::Object* AOEANLEHBJD_1(::MIGEAMGGJFN_JNCGDICPOAJ a1)
		{
			return ((::System::Object*(*)(::PVOID, ::MIGEAMGGJFN_JNCGDICPOAJ))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_AOEANLEHBJD_1_OFFSET))(this, a1);
		}

		::System::Void KAAIHDNBDHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_KAAIHDNBDHB_OFFSET))(this);
		}

		::MIGEAMGGJFN_JNCGDICPOAJ LFIGCCIMAFI(::LDJLOIJHLOC* a1)
		{
			return ((::MIGEAMGGJFN_JNCGDICPOAJ(*)(::PVOID, ::LDJLOIJHLOC*))((::PBYTE)hIl2Cpp + MIGEAMGGJFN_LFIGCCIMAFI_OFFSET))(this, a1);
		}

	};
