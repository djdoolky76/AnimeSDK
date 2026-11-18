#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class GGFCOMCDOHE;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJBPFFLIECG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x19D67E20)
#define DJBPFFLIECG_CJIBLJCAJED_OFFSET UNITYSDK_OFFSET(0x19D67D00)
#define DJBPFFLIECG_EAEAJPPBFHG_OFFSET UNITYSDK_OFFSET(0x19D68140)
#define DJBPFFLIECG_GHCNMKMMCLP_OFFSET UNITYSDK_OFFSET(0x19D68480)
#define DJBPFFLIECG_JCDIDPAEPFF_OFFSET UNITYSDK_OFFSET(0x19D68230)
#define DJBPFFLIECG_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x19D67AB0)
#define DJBPFFLIECG_MIIHEKIIBDO_OFFSET UNITYSDK_OFFSET(0x19D67990)
#define DJBPFFLIECG_MJLDIOILKLK_OFFSET UNITYSDK_OFFSET(0x19D67AF0)
#define DJBPFFLIECG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D67560)

inline static constexpr unsigned int DJBPFFLIECG_TypeDefinitionIndex = 87791;

class DJBPFFLIECG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::CFMGIKJLMBJ*, ::System::Boolean>*>* IGMHGOFGPCJ; // 0x10
	::System::Collections::Generic::List_1<::System::UInt16>* DALFCCNDFOB; // 0x18
	::GGFCOMCDOHE* AKBHNFNPHBC; // 0x20
	::System::Boolean JNIJALBAMDM; // 0x28

	::System::Void _ctor(::System::Boolean DFANGALCGPL, ::System::Boolean PKLCFPANMPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DJBPFFLIECG__CTOR_OFFSET))(this, DFANGALCGPL, PKLCFPANMPK);
	}

	::System::Void MIIHEKIIBDO(::CFMGIKJLMBJ* NAPFALLANDL, ::System::Boolean NOIMECBKGJH)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJBPFFLIECG_MIIHEKIIBDO_OFFSET))(this, NAPFALLANDL, NOIMECBKGJH);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBPFFLIECG_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void MJLDIOILKLK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DJBPFFLIECG_MJLDIOILKLK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CJIBLJCAJED(::System::UInt16 AMMJIOCMGKE, ::System::Action_1<::CFMGIKJLMBJ*>* PHHDHIBOCKA, ::System::Action_1<::CFMGIKJLMBJ*>* DCGJPNMFIKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::CFMGIKJLMBJ*>*, ::System::Action_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + DJBPFFLIECG_CJIBLJCAJED_OFFSET))(this, AMMJIOCMGKE, PHHDHIBOCKA, DCGJPNMFIKE);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBPFFLIECG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void EAEAJPPBFHG(::System::UInt16 AMMJIOCMGKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + DJBPFFLIECG_EAEAJPPBFHG_OFFSET))(this, AMMJIOCMGKE);
	}

	::System::Void JCDIDPAEPFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBPFFLIECG_JCDIDPAEPFF_OFFSET))(this);
	}

	::System::Void GHCNMKMMCLP(::CFMGIKJLMBJ* NAPFALLANDL, ::System::Boolean NOIMECBKGJH)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJBPFFLIECG_GHCNMKMMCLP_OFFSET))(this, NAPFALLANDL, NOIMECBKGJH);
	}
};
