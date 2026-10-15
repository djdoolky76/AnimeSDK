#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCHEAIJPMD_COCJCCJDMGE_OFFSET UNITYSDK_OFFSET(0x164E73A0)
#define INCHEAIJPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x164E7470)
#define INCHEAIJPMD_FLNKDEPJMBF_OFFSET UNITYSDK_OFFSET(0x164E72D0)

inline static constexpr unsigned int INCHEAIJPMD_TypeDefinitionIndex = 73835;

	class INCHEAIJPMD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* HDMFBGKLLCI; // 0x10
		::System::Int32 OPDJPDEOCJM; // 0x18
		::System::Single OIDOGOPLOCL; // 0x1C
		::System::Int32 NCDEGDCPCHN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCHEAIJPMD_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FLNKDEPJMBF()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCHEAIJPMD_FLNKDEPJMBF_OFFSET))(this);
		}

		::System::Void COCJCCJDMGE(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + INCHEAIJPMD_COCJCCJDMGE_OFFSET))(this, a1);
		}

	};
