#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class MonoInflatableFighter; }

#define OCGOBFOOIAB_AGMNDBMIMGH_OFFSET UNITYSDK_OFFSET(0x19A0CA40)
#define OCGOBFOOIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x19A0C670)
#define OCGOBFOOIAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A0CBA0)
#define OCGOBFOOIAB_EBKCHPBADAK_OFFSET UNITYSDK_OFFSET(0x19A0CB10)
#define OCGOBFOOIAB_GET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0x19A0C650)
#define OCGOBFOOIAB_GET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0x19A0C630)
#define OCGOBFOOIAB_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x19A0C580)
#define OCGOBFOOIAB_IJBIKNBKFKE_OFFSET UNITYSDK_OFFSET(0x19A0C5A0)
#define OCGOBFOOIAB_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0x19A0C8B0)
#define OCGOBFOOIAB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19A0C910)
#define OCGOBFOOIAB_KJFMDIONEIA_OFFSET UNITYSDK_OFFSET(0x19A0C7D0)
#define OCGOBFOOIAB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19A0C6A0)
#define OCGOBFOOIAB_SET_ISOVERHIGHCUT_OFFSET UNITYSDK_OFFSET(0x19A0C660)
#define OCGOBFOOIAB_SET_ISUNDERLOWCUT_OFFSET UNITYSDK_OFFSET(0x19A0C640)
#define OCGOBFOOIAB_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x19A0C590)

inline static constexpr unsigned int OCGOBFOOIAB_TypeDefinitionIndex = 70636;

	class OCGOBFOOIAB : public ::System::Object
	{
	public:
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x10
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x18
		::System::Boolean _IsUnderLowCut_k__BackingField; // 0x20
		::System::Boolean _IsOverHighCut_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single JOMGGELMAAL; // 0x24
		::System::Single _Pressure_k__BackingField; // 0x28
		::System::Single GCOKDGBOEAH; // 0x2C
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
