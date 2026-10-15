#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDNALJJLMJ.h"
#include "unitysdk/OBENABFOGDA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFPPDLJEJJA_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x140C0)
#define KFPPDLJEJJA_LNNAEEICHND_OFFSET UNITYSDK_OFFSET(0x14130)
#define KFPPDLJEJJA_PAJNLHNAKFH_OFFSET UNITYSDK_OFFSET(0x14120)
#define KFPPDLJEJJA_PKELPMDKHCB_OFFSET UNITYSDK_OFFSET(0x14140)

	struct alignas(8) KFPPDLJEJJA
	{
		::System::Boolean CPMJKEFEHNG; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::OBENABFOGDA>* ABMPFJPOBNK; // 0x18
		::Il2CppArray<::FIDNALJJLMJ>* BFNECDGPLKD; // 0x20
		::Il2CppArray<::System::Object*>* JMLLFGFHEPF; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* FCKMPDEABHO; // 0x30
		::System::Boolean CIJDJDICMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPPDLJEJJA_CIJDJDICMMM_OFFSET))(this);
		}

		::System::Boolean PAJNLHNAKFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPPDLJEJJA_PAJNLHNAKFH_OFFSET))(this);
		}

		::System::Boolean LNNAEEICHND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPPDLJEJJA_LNNAEEICHND_OFFSET))(this);
		}

		::System::Void PKELPMDKHCB(::RootMotion::IKJob::IKTransformRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + KFPPDLJEJJA_PKELPMDKHCB_OFFSET))(this, a1);
		}

	};
