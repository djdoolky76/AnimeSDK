#pragma once
#include "unitysdk/unitysdk.h"
class AGKHOGNMPMO;
class IGNPKBNCDEP;
class OFLBAIOGIMO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define OFLBAIOGIMO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBE46100)
#define OFLBAIOGIMO_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xBE46900)
#define OFLBAIOGIMO_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBE46050)
#define OFLBAIOGIMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE46A80)
#define OFLBAIOGIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE46A70)

inline static constexpr unsigned int OFLBAIOGIMO_TypeDefinitionIndex = 49258;

	class OFLBAIOGIMO
	{
	public:
		static ::IGNPKBNCDEP** StaticGet_MFPNICMCKJG()
		{
			return (::IGNPKBNCDEP**)UnitySDK::FromName("", "OFLBAIOGIMO")->GetStaticField(0x64790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFLBAIOGIMO_CCTOR_OFFSET))();
		}

		static ::OFLBAIOGIMO* ACMKLFOMPFC(::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>* a1, ::AGKHOGNMPMO* a2)
		{
			return ((::OFLBAIOGIMO*(*)(::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>*, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ABKBOGIGAEH_OFFSET))(this);
		}

		static ::OFLBAIOGIMO* ACMKLFOMPFC_1(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::OFLBAIOGIMO*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OFLBAIOGIMO_ACMKLFOMPFC_1_OFFSET))(a1);
		}

	};
