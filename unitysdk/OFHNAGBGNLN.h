#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDLELPLKDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFHNAGBGNLN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE3A3A0)
#define OFHNAGBGNLN_HHABKKJJGJE_OFFSET UNITYSDK_OFFSET(0xBE39E70)
#define OFHNAGBGNLN_JKICEBFMCKF_OFFSET UNITYSDK_OFFSET(0xBE39FC0)
#define OFHNAGBGNLN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBE3A100)

inline static constexpr unsigned int OFHNAGBGNLN_TypeDefinitionIndex = 49274;

	class OFHNAGBGNLN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::JCDLELPLKDA*>** StaticGet_NFPMPIGNBDJ()
		{
			return (::System::Collections::Generic::List_1<::JCDLELPLKDA*>**)UnitySDK::FromName("", "OFHNAGBGNLN")->GetStaticField(0x62860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHNAGBGNLN_CCTOR_OFFSET))();
		}

		static ::System::Void HHABKKJJGJE(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + OFHNAGBGNLN_HHABKKJJGJE_OFFSET))(a1, a2);
		}

		static ::System::Void JKICEBFMCKF(::System::Action* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + OFHNAGBGNLN_JKICEBFMCKF_OFFSET))(a1, a2);
		}

		static ::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHNAGBGNLN_PAGKOAEOLKA_OFFSET))();
		}

	};
