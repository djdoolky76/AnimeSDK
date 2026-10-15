#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOIIFAENPNH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJDDCKJFGLB_CTOR_OFFSET UNITYSDK_OFFSET(0x164591B0)
#define IJDDCKJFGLB_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x16459150)
#define IJDDCKJFGLB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x164590B0)

inline static constexpr unsigned int IJDDCKJFGLB_TypeDefinitionIndex = 72077;

	class IJDDCKJFGLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IOIIFAENPNH*>* OHPGEHKFABM; // 0x10
		::System::Collections::Generic::List_1<::IOIIFAENPNH*>* HPAPACKPNJD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDDCKJFGLB_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDDCKJFGLB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDDCKJFGLB_HIDEJDELEEB_OFFSET))(this);
		}

	};
