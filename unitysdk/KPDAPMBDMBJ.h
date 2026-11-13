#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPDAPMBDMBJ_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1911D470)
#define KPDAPMBDMBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1911D2F0)
#define KPDAPMBDMBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1911D630)
#define KPDAPMBDMBJ_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1911D360)

inline static constexpr unsigned int KPDAPMBDMBJ_TypeDefinitionIndex = 61898;

	class KPDAPMBDMBJ : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* EEFHKHPMOJL; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* MEEPDDMNLCH; // 0x18
		::System::Func_1<::System::Single>* HIBGPIHFIEL; // 0x20
		::System::Single HFPNGJJFDPJ; // 0x28
		::System::Boolean JFKEGGGMDJG; // 0x2C
		::System::Void _ctor(::System::Func_1<::System::Single>* a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + KPDAPMBDMBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KPDAPMBDMBJ_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPDAPMBDMBJ_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDAPMBDMBJ_DISPOSE_OFFSET))(this);
		}

	};
