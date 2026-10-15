#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFOAEBGJJJG_GAMGPAGCJJP_CTOR_OFFSET UNITYSDK_OFFSET(0xE833B30)
#define DFOAEBGJJJG_GAMGPAGCJJP_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0xE835F00)
#define DFOAEBGJJJG_GAMGPAGCJJP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE8352B0)

inline static constexpr unsigned int DFOAEBGJJJG_GAMGPAGCJJP_TypeDefinitionIndex = 76718;

	class DFOAEBGJJJG_GAMGPAGCJJP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* NEAPJHEDMCI; // 0x10
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* OKPJCMLPCKB; // 0x18
		::System::Int32 EPAGHFGAJCE; // 0x20
		::System::Boolean OOMAMFDJJPM; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 GOIEJJKDFAL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_GAMGPAGCJJP_CTOR_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_GAMGPAGCJJP_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAEBGJJJG_GAMGPAGCJJP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
