#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFHFJMLEMO_BAFPLLAFFGH.h"
class BNFHFJMLEMO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define BNFHFJMLEMO_DJFODHIABPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCB3A0)
#define BNFHFJMLEMO_DJFODHIABPP_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0xBDCCA10)
#define BNFHFJMLEMO_DJFODHIABPP_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0xBDCCAC0)

inline static constexpr unsigned int BNFHFJMLEMO_DJFODHIABPP_TypeDefinitionIndex = 49267;

	class BNFHFJMLEMO_DJFODHIABPP : public ::BNFHFJMLEMO_BAFPLLAFFGH
	{
	public:
		::System::Single LKIJGPAMJNJ; // 0x38
		::System::Single CBNCFCKBJKG; // 0x3C
		::System::Void _ctor(::BNFHFJMLEMO* a1, ::System::String* a2, ::System::Action_1<::UnityEngine::Object*>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::BNFHFJMLEMO*, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*, ::System::Single))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_DJFODHIABPP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean FDHFIHDPHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_DJFODHIABPP_FDHFIHDPHGD_OFFSET))(this);
		}

		::System::Single IDPFIMKAMDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_DJFODHIABPP_IDPFIMKAMDN_OFFSET))(this);
		}

	};
