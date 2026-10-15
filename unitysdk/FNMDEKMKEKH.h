#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
class KKHBPFEMLKM;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FNMDEKMKEKH_AAKNICJHAKM_OFFSET UNITYSDK_OFFSET(0x15885C30)
#define FNMDEKMKEKH_BNAHIKHNBEK_OFFSET UNITYSDK_OFFSET(0x15885EB0)
#define FNMDEKMKEKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15885B10)
#define FNMDEKMKEKH_EAFOEMKFBCB_OFFSET UNITYSDK_OFFSET(0x15885D60)
#define FNMDEKMKEKH_LGDLOLIJMIA_OFFSET UNITYSDK_OFFSET(0x15885CD0)
#define FNMDEKMKEKH_LKEINICJLIP_OFFSET UNITYSDK_OFFSET(0x15885B60)
#define FNMDEKMKEKH_MIGFEPPHOCN_OFFSET UNITYSDK_OFFSET(0x15885BC0)
#define FNMDEKMKEKH_PCIPIDCOOJB_OFFSET UNITYSDK_OFFSET(0x15885C80)

inline static constexpr unsigned int FNMDEKMKEKH_TypeDefinitionIndex = 81085;

	class FNMDEKMKEKH : public ::System::Object
	{
	public:
		::KKHBPFEMLKM* LBNAGLIGKIO; // 0x10
		::System::Void _ctor(::KKHBPFEMLKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKHBPFEMLKM*))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_CTOR_OFFSET))(this, a1);
		}

		::HKAJMEMCBLC* LKEINICJLIP(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_LKEINICJLIP_OFFSET))(this, a1);
		}

		::System::Boolean MIGFEPPHOCN(::System::UInt32 a1, ::HKAJMEMCBLC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_MIGFEPPHOCN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* AAKNICJHAKM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_AAKNICJHAKM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* PCIPIDCOOJB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_PCIPIDCOOJB_OFFSET))(this);
		}

		::System::Single LGDLOLIJMIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_LGDLOLIJMIA_OFFSET))(this);
		}

		::System::Single EAFOEMKFBCB(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_EAFOEMKFBCB_OFFSET))(this, a1);
		}

		::System::Int32 BNAHIKHNBEK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMDEKMKEKH_BNAHIKHNBEK_OFFSET))(this);
		}

	};
