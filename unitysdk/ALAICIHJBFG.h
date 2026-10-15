#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNGFAOHODAP;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALAICIHJBFG_CADOANPEKMF_OFFSET UNITYSDK_OFFSET(0x12CE0940)
#define ALAICIHJBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE05B0)
#define ALAICIHJBFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CE1070)
#define ALAICIHJBFG_EKKAEGBDDAO_OFFSET UNITYSDK_OFFSET(0x12CE0870)
#define ALAICIHJBFG_ENAFKFCOEFF_OFFSET UNITYSDK_OFFSET(0x12CE0E40)
#define ALAICIHJBFG_EPPPFEDJKEN_OFFSET UNITYSDK_OFFSET(0x12CE0D60)
#define ALAICIHJBFG_FFOCKMDNMKP_OFFSET UNITYSDK_OFFSET(0x12CE1220)
#define ALAICIHJBFG_HJKKBAFOFHP_OFFSET UNITYSDK_OFFSET(0x12CE0700)
#define ALAICIHJBFG_JCGLGJMKOAB_OFFSET UNITYSDK_OFFSET(0x12CE1130)
#define ALAICIHJBFG_NNKLDODLBNP_OFFSET UNITYSDK_OFFSET(0x12CE0810)
#define ALAICIHJBFG_OMCPGPADEIP_OFFSET UNITYSDK_OFFSET(0x12CE05C0)

	class ALAICIHJBFG : public ::System::Object
	{
	public:
		::GNGFAOHODAP* GMBMMEIDNHM; // 0x10
		::System::UInt32 DFHMPHMOHJM; // 0x18
		::System::Boolean CKCHMOOIPAA; // 0x1C
		::System::Boolean BFMCDPGPLNK; // 0x1D
		::System::Void _ctor(::System::Boolean a1, ::GNGFAOHODAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::GNGFAOHODAP*))((::PBYTE)hIl2Cpp + ALAICIHJBFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OMCPGPADEIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAICIHJBFG_OMCPGPADEIP_OFFSET))(this, a1);
		}

		::System::Void HJKKBAFOFHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_HJKKBAFOFHP_OFFSET))(this);
		}

		::System::Void NNKLDODLBNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_NNKLDODLBNP_OFFSET))(this);
		}

		::System::Void EKKAEGBDDAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALAICIHJBFG_EKKAEGBDDAO_OFFSET))(this, a1);
		}

		::System::Void CADOANPEKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_CADOANPEKMF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_DISPOSE_OFFSET))(this);
		}

		::System::Void JCGLGJMKOAB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALAICIHJBFG_JCGLGJMKOAB_OFFSET))(this, a1);
		}

		::System::Void FFOCKMDNMKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALAICIHJBFG_FFOCKMDNMKP_OFFSET))(this, a1);
		}

		::System::UInt32 EPPPFEDJKEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_EPPPFEDJKEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>* ENAFKFCOEFF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FloorSavedValueOverride*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG_ENAFKFCOEFF_OFFSET))(this);
		}

	};
