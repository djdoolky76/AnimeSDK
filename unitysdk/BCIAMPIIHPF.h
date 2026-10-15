#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }

#define BCIAMPIIHPF_ACAGCCEGDKF_OFFSET UNITYSDK_OFFSET(0x15EA7D10)
#define BCIAMPIIHPF_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0x15EA7CD0)
#define BCIAMPIIHPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA7D70)
#define BCIAMPIIHPF_DPHGGEJNJMC_OFFSET UNITYSDK_OFFSET(0x15EA7A30)
#define BCIAMPIIHPF_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x15EA7D50)
#define BCIAMPIIHPF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15EA7BF0)
#define BCIAMPIIHPF_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15EA7B30)
#define BCIAMPIIHPF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15EA7850)
#define BCIAMPIIHPF_SET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x15EA7D60)

	class BCIAMPIIHPF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* HOENKAPJOLH; // 0x10
		::UnityEngine::ComputeBuffer* DCHOFPFDBNJ; // 0x18
		::UnityEngine::GameObject* EOBLJJBOBIN; // 0x20
		::System::Int32 HCDEOKNIGKG; // 0x28
		::System::Boolean _EnableRuntimeTick_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_CONFIAMBBBC_OFFSET))(this);
		}

		::System::Void ACAGCCEGDKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_ACAGCCEGDKF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DPHGGEJNJMC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_DPHGGEJNJMC_OFFSET))(this);
		}

		::System::Boolean get_EnableRuntimeTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_GET_ENABLERUNTIMETICK_OFFSET))(this);
		}

		::System::Void set_EnableRuntimeTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCIAMPIIHPF_SET_ENABLERUNTIMETICK_OFFSET))(this, a1);
		}

	};
