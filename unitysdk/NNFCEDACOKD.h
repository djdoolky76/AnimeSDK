#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JPDEELEADGJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NNFCEDACOKD_CBELCIMDBIK_OFFSET UNITYSDK_OFFSET(0x179E25A0)
#define NNFCEDACOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x179E11F0)
#define NNFCEDACOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179E16A0)
#define NNFCEDACOKD_EJFMOGGGCJH_OFFSET UNITYSDK_OFFSET(0x179E2420)
#define NNFCEDACOKD_KNKNFDMLDIF_OFFSET UNITYSDK_OFFSET(0x179E28A0)
#define NNFCEDACOKD_MHKMJHMHFBE_OFFSET UNITYSDK_OFFSET(0x179E2100)
#define NNFCEDACOKD_MMIEFBAGHKH_OFFSET UNITYSDK_OFFSET(0x179E22A0)
#define NNFCEDACOKD_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0x179E1F80)
#define NNFCEDACOKD_NMIOKEPJFHF_OFFSET UNITYSDK_OFFSET(0x179E2720)
#define NNFCEDACOKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179E1ED0)
#define NNFCEDACOKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179E1C90)
#define NNFCEDACOKD_TICK_OFFSET UNITYSDK_OFFSET(0x179E1F20)

inline static constexpr unsigned int NNFCEDACOKD_TypeDefinitionIndex = 54119;

	class NNFCEDACOKD : public ::GELIALJDFBL
	{
	public:
		::JPDEELEADGJ* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* NAOGDGFMBJN; // 0x20
		::KFELGAIGHAP* KMCIIFCFMKP; // 0x28
		::KFELGAIGHAP* HCNHHPLEMIJ; // 0x30
		::KFELGAIGHAP* HMPIBJGEJNP; // 0x38
		::KFELGAIGHAP* CEAFHJDLDDO; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::KFELGAIGHAP* DMLNPMPCIAB; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JPDEELEADGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JPDEELEADGJ*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFCEDACOKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFCEDACOKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFCEDACOKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNFCEDACOKD_TICK_OFFSET))(this, a1);
		}

		::System::Void NFNECIHEOAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_NFNECIHEOAF_OFFSET))(this, a1);
		}

		::System::Void MMIEFBAGHKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_MMIEFBAGHKH_OFFSET))(this, a1);
		}

		::System::Void EJFMOGGGCJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_EJFMOGGGCJH_OFFSET))(this, a1);
		}

		::System::Void CBELCIMDBIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_CBELCIMDBIK_OFFSET))(this, a1);
		}

		::System::Void NMIOKEPJFHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_NMIOKEPJFHF_OFFSET))(this, a1);
		}

		::System::Void KNKNFDMLDIF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_KNKNFDMLDIF_OFFSET))(this, a1);
		}

		::System::Boolean MHKMJHMHFBE(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFCEDACOKD_MHKMJHMHFBE_OFFSET))(this, a1);
		}

	};
