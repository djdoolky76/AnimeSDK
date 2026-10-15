#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class BICNOEEBFNC;
class LGAGHNJOKHI;
class MNCOPNHONHO;
namespace System { class String; }

#define FJIEMDNHDLA_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x157CE220)
#define FJIEMDNHDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x157CE210)
#define FJIEMDNHDLA_DIIMLHJAHKF_OFFSET UNITYSDK_OFFSET(0x157CE840)
#define FJIEMDNHDLA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x157CEE10)
#define FJIEMDNHDLA_ICDIFELGDHI_OFFSET UNITYSDK_OFFSET(0x157CECE0)
#define FJIEMDNHDLA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x157CE270)
#define FJIEMDNHDLA_KFBBCCCCFKK_OFFSET UNITYSDK_OFFSET(0x157CE970)
#define FJIEMDNHDLA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x157CF3D0)

inline static constexpr unsigned int FJIEMDNHDLA_TypeDefinitionIndex = 76747;

	class FJIEMDNHDLA : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_INITIALIZE_OFFSET))(this);
		}

		::System::Void ICDIFELGDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_ICDIFELGDHI_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_TEARDOWN_OFFSET))(this);
		}

		::System::Void DIIMLHJAHKF(::LGAGHNJOKHI* a1, ::BICNOEEBFNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LGAGHNJOKHI*, ::BICNOEEBFNC*))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_DIIMLHJAHKF_OFFSET))(this, a1, a2);
		}

		::System::Void KFBBCCCCFKK(::LGAGHNJOKHI* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::LGAGHNJOKHI*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FJIEMDNHDLA_KFBBCCCCFKK_OFFSET))(this, a1, a2, a3);
		}

	};
