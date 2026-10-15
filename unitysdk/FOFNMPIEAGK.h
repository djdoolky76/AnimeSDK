#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIOHCMPBJB.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOFNMPIEAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C626330)
#define FOFNMPIEAGK_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C6263F0)

inline static constexpr unsigned int FOFNMPIEAGK_TypeDefinitionIndex = 37428;

	class FOFNMPIEAGK : public ::LMIOHCMPBJB
	{
	public:
		::IFBFJDCECML* KKFCJOJLGCO; // 0x20
		::System::Collections::Generic::List_1<::IFBFJDCECML*>* CHJLIMFAGPJ; // 0x28
		::System::UInt32 HDHPNOOMAGE; // 0x30
		::System::UInt32 DCBJLCHENHJ; // 0x34
		::System::Void _ctor(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOFNMPIEAGK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFNMPIEAGK_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
