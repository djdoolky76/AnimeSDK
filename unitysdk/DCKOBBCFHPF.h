#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIJOKMHJKLJ;
namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

#define DCKOBBCFHPF_ABONECHELAF_OFFSET UNITYSDK_OFFSET(0xE247870)
#define DCKOBBCFHPF_CTOR_OFFSET UNITYSDK_OFFSET(0xE2476B0)
#define DCKOBBCFHPF_FMHLPILDNEJ_OFFSET UNITYSDK_OFFSET(0xE247A90)
#define DCKOBBCFHPF_HBAOMEBJKGM_OFFSET UNITYSDK_OFFSET(0xE248950)
#define DCKOBBCFHPF_INLKNGLDCBE_OFFSET UNITYSDK_OFFSET(0xE2487F0)
#define DCKOBBCFHPF_MKBCONICHED_OFFSET UNITYSDK_OFFSET(0xE247D70)
#define DCKOBBCFHPF_NGCIAACBNGC_OFFSET UNITYSDK_OFFSET(0xE248450)

inline static constexpr unsigned int DCKOBBCFHPF_TypeDefinitionIndex = 60573;

	class DCKOBBCFHPF : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* DPJCOAJKIGD; // 0x10
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void ABONECHELAF(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_ABONECHELAF_OFFSET))(this, a1);
		}

		::System::Void FMHLPILDNEJ(::System::Collections::Generic::HashSet_1<::OIJOKMHJKLJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::OIJOKMHJKLJ*>*))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_FMHLPILDNEJ_OFFSET))(this, a1);
		}

		::System::String* MKBCONICHED(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_MKBCONICHED_OFFSET))(this, a1);
		}

		::System::Void NGCIAACBNGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_NGCIAACBNGC_OFFSET))(this);
		}

		::System::Void INLKNGLDCBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_INLKNGLDCBE_OFFSET))(this);
		}

		::System::String* HBAOMEBJKGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKOBBCFHPF_HBAOMEBJKGM_OFFSET))(this);
		}

	};
