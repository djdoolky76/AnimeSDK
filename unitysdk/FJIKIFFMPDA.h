#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FJIKIFFMPDA_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x157CFA10)
#define FJIKIFFMPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x157CF740)
#define FJIKIFFMPDA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x157CFF60)
#define FJIKIFFMPDA_INGPMHHKAGG_OFFSET UNITYSDK_OFFSET(0x157D0B90)
#define FJIKIFFMPDA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x157CFBC0)
#define FJIKIFFMPDA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x157CFC00)

inline static constexpr unsigned int FJIKIFFMPDA_TypeDefinitionIndex = 76827;

	class FJIKIFFMPDA : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::INMMPMDELKE*>* KFBHHFIFHCJ; // 0x18
		::BABNOKHOBCF* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::INMMPMDELKE*>* HKJNGDKDMNN; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* AHIFNJJGHOJ; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* GPAGLKMGBCK; // 0x38
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_EXECUTE_OFFSET))(this);
		}

		::System::Void INGPMHHKAGG(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FJIKIFFMPDA_INGPMHHKAGG_OFFSET))(this, a1);
		}

	};
