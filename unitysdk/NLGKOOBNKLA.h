#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace Entitas { template <typename T> class IGroup_1; }

#define NLGKOOBNKLA_BCLMKJKEPCE_OFFSET UNITYSDK_OFFSET(0x1D91E260)
#define NLGKOOBNKLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91DDB0)
#define NLGKOOBNKLA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D91DF10)
#define NLGKOOBNKLA_NOHCHOKDGBK_OFFSET UNITYSDK_OFFSET(0x1D91E070)

inline static constexpr unsigned int NLGKOOBNKLA_TypeDefinitionIndex = 38371;

	class NLGKOOBNKLA : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::IFBFJDCECML*>* KGPHOAEPHHP; // 0x18
		::Entitas::IGroup_1<::IFBFJDCECML*>* NCGEECDENGP; // 0x20
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x28
		::System::Int32 DNOAKANJKHB; // 0x30
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NLGKOOBNKLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGKOOBNKLA_EXECUTE_OFFSET))(this);
		}

		::System::Void NOHCHOKDGBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLGKOOBNKLA_NOHCHOKDGBK_OFFSET))(this);
		}

		::System::Void BCLMKJKEPCE(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + NLGKOOBNKLA_BCLMKJKEPCE_OFFSET))(this, a1);
		}

	};
