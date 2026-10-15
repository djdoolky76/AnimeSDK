#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
namespace System { class Exception; }
namespace System { class String; }

#define HEIKCKBKNDF_BEPKNCMGJMI_OFFSET UNITYSDK_OFFSET(0x15C529A0)
#define HEIKCKBKNDF_BNBHHHOOCAE_OFFSET UNITYSDK_OFFSET(0x15C52820)
#define HEIKCKBKNDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C52810)
#define HEIKCKBKNDF_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x15C528F0)
#define HEIKCKBKNDF_DEMNDCPCGGE_OFFSET UNITYSDK_OFFSET(0x15C52950)
#define HEIKCKBKNDF_MBLPPGINPHE_OFFSET UNITYSDK_OFFSET(0x15C529F0)

	class HEIKCKBKNDF : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::LMFOOOLDECA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_CTOR_OFFSET))(this, a1);
		}

		::System::Void BNBHHHOOCAE(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_BNBHHHOOCAE_OFFSET))(this, a1);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_DCADIANHPFD_OFFSET))(this, a1);
		}

		::System::Void DEMNDCPCGGE(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_DEMNDCPCGGE_OFFSET))(this, a1);
		}

		::System::Void BEPKNCMGJMI(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_BEPKNCMGJMI_OFFSET))(this, a1, a2);
		}

		::System::Void MBLPPGINPHE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + HEIKCKBKNDF_MBLPPGINPHE_OFFSET))(this, a1, a2);
		}

	};
