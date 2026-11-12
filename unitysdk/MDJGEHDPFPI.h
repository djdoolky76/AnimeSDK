#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDJGEHDPFPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC15C4F0)
#define MDJGEHDPFPI_GET_CARID_OFFSET UNITYSDK_OFFSET(0xC15C470)
#define MDJGEHDPFPI_GET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xC15C4D0)
#define MDJGEHDPFPI_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0xC15C490)
#define MDJGEHDPFPI_GET_PAINTID_OFFSET UNITYSDK_OFFSET(0xC15C4B0)
#define MDJGEHDPFPI_SET_CARID_OFFSET UNITYSDK_OFFSET(0xC15C480)
#define MDJGEHDPFPI_SET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xC15C4E0)
#define MDJGEHDPFPI_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0xC15C4A0)
#define MDJGEHDPFPI_SET_PAINTID_OFFSET UNITYSDK_OFFSET(0xC15C4C0)

inline static constexpr unsigned int MDJGEHDPFPI_TypeDefinitionIndex = 84484;

	class MDJGEHDPFPI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EquippedPartIDs_k__BackingField; // 0x10
		::System::UInt32 _Number_k__BackingField; // 0x18
		::System::UInt32 _CarID_k__BackingField; // 0x1C
		::System::UInt32 _PaintID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_GET_CARID_OFFSET))(this);
		}

		::System::Void set_CarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_SET_CARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Number()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_SET_NUMBER_OFFSET))(this, a1);
		}

		::System::UInt32 get_PaintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_GET_PAINTID_OFFSET))(this);
		}

		::System::Void set_PaintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_SET_PAINTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquippedPartIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_GET_EQUIPPEDPARTIDS_OFFSET))(this);
		}

		::System::Void set_EquippedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDJGEHDPFPI_SET_EQUIPPEDPARTIDS_OFFSET))(this, a1);
		}

	};
