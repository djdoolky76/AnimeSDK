#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class MonoInflatableFighter; }

#define OCGOBFOOIAB_AGMNDBMIMGH_OFFSET UNITYSDK_OFFSET(0xC666330)
#define OCGOBFOOIAB_CTOR_OFFSET UNITYSDK_OFFSET(0xC665F60)
#define OCGOBFOOIAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC666490)
#define OCGOBFOOIAB_EBKCHPBADAK_OFFSET UNITYSDK_OFFSET(0xC666400)
#define OCGOBFOOIAB_GET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0xC665F40)
#define OCGOBFOOIAB_GET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0xC665F20)
#define OCGOBFOOIAB_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xC665E70)
#define OCGOBFOOIAB_IJBIKNBKFKE_OFFSET UNITYSDK_OFFSET(0xC665E90)
#define OCGOBFOOIAB_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xC6661A0)
#define OCGOBFOOIAB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC666200)
#define OCGOBFOOIAB_KJFMDIONEIA_OFFSET UNITYSDK_OFFSET(0xC6660C0)
#define OCGOBFOOIAB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC665F90)
#define OCGOBFOOIAB_SET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0xC665F50)
#define OCGOBFOOIAB_SET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0xC665F30)
#define OCGOBFOOIAB_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0xC665E80)

inline static constexpr unsigned int OCGOBFOOIAB_TypeDefinitionIndex = 70636;

	class OCGOBFOOIAB : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x10
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
		::System::Boolean _IsUnderLowCut_k__BackingField; // 0x20
		::System::Boolean _IsOverHighCut_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single _Pressure_k__BackingField; // 0x24
		::System::Single GCOKDGBOEAH; // 0x28
		::System::Single JOMGGELMAAL; // 0x2C
		::System::Void _ctor(::ACGKMEPLIBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Pressure()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_GET_PRESSURE_OFFSET))(this);
		}

		::System::Void set_Pressure(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_SET_PRESSURE_OFFSET))(this, a1);
		}

		::System::Single IJBIKNBKFKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_IJBIKNBKFKE_OFFSET))(this);
		}

		::System::Boolean get_IsUnderLowCut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_GET_ISUNDERLOWCUT_OFFSET))(this);
		}

		::System::Void set_IsUnderLowCut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_SET_ISUNDERLOWCUT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverHighCut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_GET_ISOVERHIGHCUT_OFFSET))(this);
		}

		::System::Void set_IsOverHighCut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_SET_ISOVERHIGHCUT_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGMNDBMIMGH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_AGMNDBMIMGH_OFFSET))(this, a1);
		}

		::System::Void EBKCHPBADAK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_EBKCHPBADAK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_DISPOSE_OFFSET))(this);
		}

		::System::Void KJFMDIONEIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCGOBFOOIAB_KJFMDIONEIA_OFFSET))(this, a1);
		}

	};
