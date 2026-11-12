#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BDEHEINMEJB_CTOR_OFFSET UNITYSDK_OFFSET(0x170BB240)
#define BDEHEINMEJB_ELKLDIAHCAC_OFFSET UNITYSDK_OFFSET(0x170BB090)
#define BDEHEINMEJB_IKHPNGCFIIH_OFFSET UNITYSDK_OFFSET(0x170BB040)
#define BDEHEINMEJB_KHDJCAKIMBC_OFFSET UNITYSDK_OFFSET(0x170BB0E0)
#define BDEHEINMEJB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x170BAFF0)
#define BDEHEINMEJB_NAGOBEJGFIN_OFFSET UNITYSDK_OFFSET(0x170BB180)
#define BDEHEINMEJB_NKOMKJECAFJ_OFFSET UNITYSDK_OFFSET(0x170BB1E0)
#define BDEHEINMEJB_PHABMGMBNMP_OFFSET UNITYSDK_OFFSET(0x170BB130)

inline static constexpr unsigned int BDEHEINMEJB_TypeDefinitionIndex = 66437;

	class BDEHEINMEJB : public ::System::Object
	{
	public:
		::ABPLALCHNFA* KICANALEPGN; // 0x10
		::ABPLALCHNFA* OPNFAKKOIGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void IKHPNGCFIIH(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + BDEHEINMEJB_IKHPNGCFIIH_OFFSET))(this, a1);
		}

		::System::Void ELKLDIAHCAC(::ABPLALCHNFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPLALCHNFA*))((::PBYTE)hIl2Cpp + BDEHEINMEJB_ELKLDIAHCAC_OFFSET))(this, a1);
		}

		::JJDFGMMMCMI KHDJCAKIMBC()
		{
			return ((::JJDFGMMMCMI(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_KHDJCAKIMBC_OFFSET))(this);
		}

		::JJDFGMMMCMI PHABMGMBNMP()
		{
			return ((::JJDFGMMMCMI(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_PHABMGMBNMP_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* NAGOBEJGFIN()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_NAGOBEJGFIN_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* NKOMKJECAFJ()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEHEINMEJB_NKOMKJECAFJ_OFFSET))(this);
		}

	};
