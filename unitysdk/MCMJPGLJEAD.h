#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWWForm; }

#define MCMJPGLJEAD_HAHPHBCDJDL_OFFSET UNITYSDK_OFFSET(0xB8884C0)
#define MCMJPGLJEAD_HPNALECGMKC_OFFSET UNITYSDK_OFFSET(0xB888730)
#define MCMJPGLJEAD_JMBFEFDBFNK_OFFSET UNITYSDK_OFFSET(0xB8885D0)

inline static constexpr unsigned int MCMJPGLJEAD_TypeDefinitionIndex = 49667;

	class MCMJPGLJEAD : public ::System::Object
	{
	public:
		static ::System::Collections::IEnumerator* HAHPHBCDJDL(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::String* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::System::Action*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MCMJPGLJEAD_HAHPHBCDJDL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::WWWForm* JMBFEFDBFNK(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::UnityEngine::WWWForm*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MCMJPGLJEAD_JMBFEFDBFNK_OFFSET))(a1);
		}

		static ::System::String* HPNALECGMKC(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MCMJPGLJEAD_HPNALECGMKC_OFFSET))(a1);
		}

	};
