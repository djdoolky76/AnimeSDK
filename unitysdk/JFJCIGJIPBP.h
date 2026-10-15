#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJCIGJIPBP_AADEMJOJEEG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFJCIGJIPBP_AALCCPJCBME_OFFSET UNITYSDK_OFFSET(0x1663BEC0)
#define JFJCIGJIPBP_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0x1663BD40)
#define JFJCIGJIPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1663C220)
#define JFJCIGJIPBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1663C120)
#define JFJCIGJIPBP_GAJGBBFELEL_OFFSET UNITYSDK_OFFSET(0x1663BCE0)
#define JFJCIGJIPBP_JDMAECPHEOG_OFFSET UNITYSDK_OFFSET(0x1663BFB0)
#define JFJCIGJIPBP_OMIMLKMKKDE_OFFSET UNITYSDK_OFFSET(0x1663C090)

inline static constexpr unsigned int JFJCIGJIPBP_TypeDefinitionIndex = 61549;

	class JFJCIGJIPBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DPFJAKAIJMH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* IPIDLEDJDGF; // 0x18
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
