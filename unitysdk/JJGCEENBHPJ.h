#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJANPDNDBJ;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJGCEENBHPJ_AEKOJHIIEKM_OFFSET UNITYSDK_OFFSET(0xB2043C0)
#define JJGCEENBHPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB204590)
#define JJGCEENBHPJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB204500)

inline static constexpr unsigned int JJGCEENBHPJ_TypeDefinitionIndex = 64332;

	class JJGCEENBHPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::KLJANPDNDBJ*>*>* EPKIGJMDIED; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCEENBHPJ_CTOR_OFFSET))(this);
		}

		::System::Void AEKOJHIIEKM(::KLJANPDNDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJANPDNDBJ*))((::PBYTE)hIl2Cpp + JJGCEENBHPJ_AEKOJHIIEKM_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGCEENBHPJ_PJPFIHFAHGO_OFFSET))(this);
		}

	};
