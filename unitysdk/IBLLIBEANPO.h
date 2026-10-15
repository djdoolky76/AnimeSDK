#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKHBPFEMLKM;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IBLLIBEANPO_BJIOGLGGHBI_OFFSET UNITYSDK_OFFSET(0x15E3D7E0)
#define IBLLIBEANPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3D210)
#define IBLLIBEANPO_DGBHECAFNGF_OFFSET UNITYSDK_OFFSET(0x15E3D890)
#define IBLLIBEANPO_MKHPEJFALMD_OFFSET UNITYSDK_OFFSET(0x15E3D840)
#define IBLLIBEANPO_OKFDMJCGLKB_OFFSET UNITYSDK_OFFSET(0x15E3D280)
#define IBLLIBEANPO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15E3D930)

inline static constexpr unsigned int IBLLIBEANPO_TypeDefinitionIndex = 81109;

	class IBLLIBEANPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::UInt32>* JDNNBMOAFOK; // 0x10
		::KKHBPFEMLKM* HNLOJEIEFKC; // 0x18
		::System::Void _ctor(::KKHBPFEMLKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKHBPFEMLKM*))((::PBYTE)hIl2Cpp + IBLLIBEANPO_CTOR_OFFSET))(this, a1);
		}

		::System::Void OKFDMJCGLKB(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IBLLIBEANPO_OKFDMJCGLKB_OFFSET))(this, a1);
		}

		::System::Boolean BJIOGLGGHBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLLIBEANPO_BJIOGLGGHBI_OFFSET))(this);
		}

		::System::UInt32 MKHPEJFALMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLLIBEANPO_MKHPEJFALMD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DGBHECAFNGF()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLLIBEANPO_DGBHECAFNGF_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLLIBEANPO_PJPFIHFAHGO_OFFSET))(this);
		}

	};
