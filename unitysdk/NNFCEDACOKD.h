#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JPDEELEADGJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NNFCEDACOKD_CBELCIMDBIK_OFFSET UNITYSDK_OFFSET(0xBCA7750)
#define NNFCEDACOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA62B0)
#define NNFCEDACOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCA6760)
#define NNFCEDACOKD_EJFMOGGGCJH_OFFSET UNITYSDK_OFFSET(0xBCA7580)
#define NNFCEDACOKD_KNKNFDMLDIF_OFFSET UNITYSDK_OFFSET(0xBCA7AF0)
#define NNFCEDACOKD_MHKMJHMHFBE_OFFSET UNITYSDK_OFFSET(0xBCA7210)
#define NNFCEDACOKD_MMIEFBAGHKH_OFFSET UNITYSDK_OFFSET(0xBCA73B0)
#define NNFCEDACOKD_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0xBCA7040)
#define NNFCEDACOKD_NMIOKEPJFHF_OFFSET UNITYSDK_OFFSET(0xBCA7920)
#define NNFCEDACOKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCA6F90)
#define NNFCEDACOKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCA6D50)
#define NNFCEDACOKD_TICK_OFFSET UNITYSDK_OFFSET(0xBCA6FE0)

	class NNFCEDACOKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* NAOGDGFMBJN; // 0x20
		::JPDEELEADGJ* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* CEAFHJDLDDO; // 0x30
		::KFELGAIGHAP* HMPIBJGEJNP; // 0x38
		::KFELGAIGHAP* KMCIIFCFMKP; // 0x40
		::KFELGAIGHAP* DMLNPMPCIAB; // 0x48
		::KFELGAIGHAP* HCNHHPLEMIJ; // 0x50
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
