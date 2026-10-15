#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define EIJCHJHFFPM_CTOR_OFFSET UNITYSDK_OFFSET(0x154CCE70)
#define EIJCHJHFFPM_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x154CCEB0)
#define EIJCHJHFFPM_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0x154CCEF0)
#define EIJCHJHFFPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x154CCF30)

inline static constexpr unsigned int EIJCHJHFFPM_TypeDefinitionIndex = 59276;

	class EIJCHJHFFPM : public ::System::Object
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* HAPIOLPHKAG; // 0x10
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + EIJCHJHFFPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJHFFPM_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJHFFPM_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJHFFPM_TOSTRING_OFFSET))(this);
		}

	};
