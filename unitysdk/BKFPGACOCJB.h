#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"
class CFALFIPEHJH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKFPGACOCJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B4030)
#define BKFPGACOCJB_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB7B3C70)
#define BKFPGACOCJB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB7B3DE0)
#define BKFPGACOCJB_NEDKCFIHLPJ_OFFSET UNITYSDK_OFFSET(0xB7B3F70)

inline static constexpr unsigned int BKFPGACOCJB_TypeDefinitionIndex = 74205;

	class BKFPGACOCJB : public ::FFPAFGCOKHK
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* KOAGGMPHDGK; // 0x40
		::Il2CppArray<::System::UInt32>* IMCMKJPOKOH; // 0x48
		::System::Single IALPGENFJPA; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFPGACOCJB_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFPGACOCJB_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKFPGACOCJB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NEDKCFIHLPJ(::System::UInt32 a1, ::CFALFIPEHJH* a2, ::CFALFIPEHJH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CFALFIPEHJH*, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + BKFPGACOCJB_NEDKCFIHLPJ_OFFSET))(this, a1, a2, a3);
		}

	};
