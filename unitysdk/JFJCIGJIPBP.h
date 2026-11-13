#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJCIGJIPBP_AADEMJOJEEG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFJCIGJIPBP_AALCCPJCBME_OFFSET UNITYSDK_OFFSET(0x19332500)
#define JFJCIGJIPBP_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0x19332380)
#define JFJCIGJIPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x19332860)
#define JFJCIGJIPBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19332760)
#define JFJCIGJIPBP_GAJGBBFELEL_OFFSET UNITYSDK_OFFSET(0x19332320)
#define JFJCIGJIPBP_JDMAECPHEOG_OFFSET UNITYSDK_OFFSET(0x193325F0)
#define JFJCIGJIPBP_OMIMLKMKKDE_OFFSET UNITYSDK_OFFSET(0x193326D0)

inline static constexpr unsigned int JFJCIGJIPBP_TypeDefinitionIndex = 62946;

	class JFJCIGJIPBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* IPIDLEDJDGF; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* DPFJAKAIJMH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_CTOR_OFFSET))(this);
		}

		::System::Void GAJGBBFELEL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_GAJGBBFELEL_OFFSET))(this, a1);
		}

		::System::Void BFADFAELKLJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_BFADFAELKLJ_OFFSET))(this, a1);
		}

		::System::Boolean AALCCPJCBME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_AALCCPJCBME_OFFSET))(this);
		}

		::System::Void JDMAECPHEOG(::JFJCIGJIPBP_AADEMJOJEEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJCIGJIPBP_AADEMJOJEEG*))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_JDMAECPHEOG_OFFSET))(this, a1);
		}

		::System::Void OMIMLKMKKDE(::JFJCIGJIPBP_AADEMJOJEEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJCIGJIPBP_AADEMJOJEEG*))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_OMIMLKMKKDE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_DISPOSE_OFFSET))(this);
		}

	};
