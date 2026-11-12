#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHECPCFDDGI_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define NHECPCFDDGI_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0x1FF16350)
#define NHECPCFDDGI_CNDLJPAPIJC_OFFSET UNITYSDK_OFFSET(0x1FF39790)
#define NHECPCFDDGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF39990)
#define NHECPCFDDGI_DBIMDIBHNLK_OFFSET UNITYSDK_OFFSET(0x1FF39900)
#define NHECPCFDDGI_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x1FF39220)
#define NHECPCFDDGI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1FF39690)
#define NHECPCFDDGI_IKOPLANACID_OFFSET UNITYSDK_OFFSET(0x1FF397E0)
#define NHECPCFDDGI_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1FF182D0)
#define NHECPCFDDGI_KNKEPBPNPCE_OFFSET UNITYSDK_OFFSET(0x1FF37270)
#define NHECPCFDDGI_LENLFBEKAED_OFFSET UNITYSDK_OFFSET(0x1FF39940)
#define NHECPCFDDGI_LOCLIGNNNKO_OFFSET UNITYSDK_OFFSET(0x1FF39870)
#define NHECPCFDDGI_PMKMEAAGKAP_OFFSET UNITYSDK_OFFSET(0x1FF39410)

inline static constexpr unsigned int NHECPCFDDGI_TypeDefinitionIndex = 45284;

	class NHECPCFDDGI : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* MIEFAAFDECI; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* OPNIGKCEFKF; // 0x18
		::System::Exception* GAJFANNBGJK; // 0x20
		::NHECPCFDDGI_State DLNIGFGLPLJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask FHLALJENMHB()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_FHLALJENMHB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_HFKFNFKIEON_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid IKOPLANACID(::Cysharp::Threading::Tasks::UniTaskCompletionSource* a1, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + NHECPCFDDGI_IKOPLANACID_OFFSET))(this, a1, a2);
		}

		::System::Void ACGBIOICLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_ACGBIOICLEO_OFFSET))(this);
		}

		::System::Void PMKMEAAGKAP(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NHECPCFDDGI_PMKMEAAGKAP_OFFSET))(this, a1);
		}

		::System::Void KHFHNDEBGDH(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + NHECPCFDDGI_KHFHNDEBGDH_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid LOCLIGNNNKO(::Cysharp::Threading::Tasks::UniTask a1, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + NHECPCFDDGI_LOCLIGNNNKO_OFFSET))(this, a1, a2);
		}

		::System::Void DBIMDIBHNLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_DBIMDIBHNLK_OFFSET))(this);
		}

		::System::Boolean CNDLJPAPIJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_CNDLJPAPIJC_OFFSET))(this);
		}

		::System::Boolean LENLFBEKAED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_LENLFBEKAED_OFFSET))(this);
		}

		::System::Boolean KNKEPBPNPCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECPCFDDGI_KNKEPBPNPCE_OFFSET))(this);
		}

	};
