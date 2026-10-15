#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFNDGNFOAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF198F0)
#define AFNDGNFOAKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF19B60)
#define AFNDGNFOAKC_FOKAPDFNOHL_OFFSET UNITYSDK_OFFSET(0xCF1A480)
#define AFNDGNFOAKC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCF19D30)
#define AFNDGNFOAKC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF19DB0)
#define AFNDGNFOAKC_MHMFNGGAHPC_OFFSET UNITYSDK_OFFSET(0xCF1A100)

inline static constexpr unsigned int AFNDGNFOAKC_TypeDefinitionIndex = 78226;

	class AFNDGNFOAKC : public ::System::Object
	{
	public:
		::System::String* HNKNDGFGALM; // 0x10
		::System::Action* CIFOILLJFNF; // 0x18
		::System::Collections::Generic::List_1<::KNFCEJEJINK*>* KGDKFJMNBLE; // 0x20
		::System::Boolean OELBLBCINNB; // 0x28
		::System::Void _ctor(::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* a1, ::ICCLDNDNHPD* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HBLDGJCDJPF*>*, ::ICCLDNDNHPD*, ::System::String*))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_DISPOSE_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::KNFCEJEJINK* MHMFNGGAHPC()
		{
			return ((::KNFCEJEJINK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_MHMFNGGAHPC_OFFSET))(this);
		}

		::System::Void FOKAPDFNOHL(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFNDGNFOAKC_FOKAPDFNOHL_OFFSET))(this, a1);
		}

	};
