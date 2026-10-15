#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BBIOBFKEKCF.h"
#include "unitysdk/PFDHDMPMEGE.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
class BJPKCHPDJBO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CANPMKJJJNK_CHMGFKCEPPF_OFFSET UNITYSDK_OFFSET(0xC48E080)
#define CANPMKJJJNK_CKOPMNNNLOE_OFFSET UNITYSDK_OFFSET(0xC48E300)
#define CANPMKJJJNK_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xC48DD60)
#define CANPMKJJJNK_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xC48E530)

inline static constexpr unsigned int CANPMKJJJNK_TypeDefinitionIndex = 68467;

	class CANPMKJJJNK : public ::System::Object
	{
	public:
		static ::System::Void EHFLDBMLBPM(::PFDHDMPMEGE a1, ::BJPKCHPDJBO* a2, ::BBIOBFKEKCF a3)
		{
			return ((::System::Void(*)(::PFDHDMPMEGE, ::BJPKCHPDJBO*, ::BBIOBFKEKCF))((::PBYTE)hIl2Cpp + CANPMKJJJNK_EHFLDBMLBPM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KHNCMBEFIKI(::PFDHDMPMEGE a1, ::BJPKCHPDJBO* a2, ::BBIOBFKEKCF a3, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a4)
		{
			return ((::System::Void(*)(::PFDHDMPMEGE, ::BJPKCHPDJBO*, ::BBIOBFKEKCF, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CANPMKJJJNK_KHNCMBEFIKI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CHMGFKCEPPF(::PFDHDMPMEGE a1, ::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* a2)
		{
			return ((::System::Void(*)(::PFDHDMPMEGE, ::Il2CppArray<::RootMotion::IKJob::IKTransformRef>*))((::PBYTE)hIl2Cpp + CANPMKJJJNK_CHMGFKCEPPF_OFFSET))(a1, a2);
		}

		static ::System::Void CKOPMNNNLOE(::PFDHDMPMEGE a1, ::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* a2)
		{
			return ((::System::Void(*)(::PFDHDMPMEGE, ::Il2CppArray<::RootMotion::IKJob::IKTransformRef>*))((::PBYTE)hIl2Cpp + CANPMKJJJNK_CKOPMNNNLOE_OFFSET))(a1, a2);
		}

	};
