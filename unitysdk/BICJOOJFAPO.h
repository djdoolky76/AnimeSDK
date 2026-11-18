#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFJBHBKDMJO.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BICJOOJFAPO_AOHAFHBKLMF_OFFSET UNITYSDK_OFFSET(0x1691CCA0)
#define BICJOOJFAPO_GMENIJHCIII_OFFSET UNITYSDK_OFFSET(0x1691CF90)
#define BICJOOJFAPO_NIKIALBPEHI_OFFSET UNITYSDK_OFFSET(0x1691CCB0)
#define BICJOOJFAPO_NPKBDILPMHJ_OFFSET UNITYSDK_OFFSET(0x1691CF80)
#define BICJOOJFAPO_PILPKINFMBA_OFFSET UNITYSDK_OFFSET(0x1691CC50)
#define BICJOOJFAPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1691CF20)

inline static constexpr unsigned int BICJOOJFAPO_TypeDefinitionIndex = 62364;

class BICJOOJFAPO : public ::HFJBHBKDMJO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO__CTOR_OFFSET))(this);
	}

	::System::Void PILPKINFMBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO_PILPKINFMBA_OFFSET))(this);
	}

	::System::Boolean AOHAFHBKLMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO_AOHAFHBKLMF_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* NIKIALBPEHI()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO_NIKIALBPEHI_OFFSET))(this);
	}

	::System::Void NPKBDILPMHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO_NPKBDILPMHJ_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GMENIJHCIII()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BICJOOJFAPO_GMENIJHCIII_OFFSET))(this);
	}
};
