#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define BCJKLJAAPOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9F180)
#define BCJKLJAAPOM_ELKFFEIOGDN_OFFSET UNITYSDK_OFFSET(0x15E9EF20)
#define BCJKLJAAPOM_KLBBJGPFJCF_OFFSET UNITYSDK_OFFSET(0x15E9EFE0)
#define BCJKLJAAPOM_LJFBNBDBFMG_OFFSET UNITYSDK_OFFSET(0x15E9EE80)
#define BCJKLJAAPOM_OCJGEGMPLIC_OFFSET UNITYSDK_OFFSET(0x15E9ECE0)

inline static constexpr unsigned int BCJKLJAAPOM_TypeDefinitionIndex = 68260;

	class BCJKLJAAPOM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJKLJAAPOM_CTOR_OFFSET))(this);
		}

		::System::Int32 OCJGEGMPLIC(::System::Int64 a1, ::System::Double a2, ::System::Action* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Double, ::System::Action*))((::PBYTE)hIl2Cpp + BCJKLJAAPOM_OCJGEGMPLIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJFBNBDBFMG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCJKLJAAPOM_LJFBNBDBFMG_OFFSET))(this, a1);
		}

		::System::Boolean ELKFFEIOGDN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJKLJAAPOM_ELKFFEIOGDN_OFFSET))(this, a1);
		}

		::System::Int32 KLBBJGPFJCF(::System::Int64 a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Action*))((::PBYTE)hIl2Cpp + BCJKLJAAPOM_KLBBJGPFJCF_OFFSET))(this, a1, a2);
		}

	};
