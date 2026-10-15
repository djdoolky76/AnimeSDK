#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLLPNJOEDHF_CTOR_OFFSET UNITYSDK_OFFSET(0xC303DD0)
#define PLLPNJOEDHF_LNEMCMANEJE_1_OFFSET UNITYSDK_OFFSET(0xC303C50)
#define PLLPNJOEDHF_LNEMCMANEJE_OFFSET UNITYSDK_OFFSET(0xC303A80)
#define PLLPNJOEDHF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC303D40)
#define PLLPNJOEDHF_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC303940)

inline static constexpr unsigned int PLLPNJOEDHF_TypeDefinitionIndex = 64337;

	class PLLPNJOEDHF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>*>* ENGBCOGDBFH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLPNJOEDHF_CTOR_OFFSET))(this);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + PLLPNJOEDHF_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void LNEMCMANEJE(::System::Int32 a1, ::System::Action_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PLLPNJOEDHF_LNEMCMANEJE_OFFSET))(this, a1, a2);
		}

		::System::Void LNEMCMANEJE_1(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + PLLPNJOEDHF_LNEMCMANEJE_1_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLPNJOEDHF_PJPFIHFAHGO_OFFSET))(this);
		}

	};
