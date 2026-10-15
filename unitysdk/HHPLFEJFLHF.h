#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHPLFEJFLHF;
class KHKMCPLEEEB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define HHPLFEJFLHF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15CC9FC0)
#define HHPLFEJFLHF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15CC97E0)
#define HHPLFEJFLHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CCA0A0)
#define HHPLFEJFLHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC99F0)
#define HHPLFEJFLHF_KGPHPJDJDLA_OFFSET UNITYSDK_OFFSET(0x15CC9B00)
#define HHPLFEJFLHF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15CC9A30)

inline static constexpr unsigned int HHPLFEJFLHF_TypeDefinitionIndex = 49349;

	class HHPLFEJFLHF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KHKMCPLEEEB*>* NGKNDNPPAEC; // 0x10
		::System::Action* NODPAHFJLPH; // 0x18
		::System::Single HNOLFPKINDK; // 0x20
		::System::Single BAGBOHCDFFA; // 0x24
		static ::System::Collections::Generic::Stack_1<::HHPLFEJFLHF*>** StaticGet_MFPNICMCKJG()
		{
			return (::System::Collections::Generic::Stack_1<::HHPLFEJFLHF*>**)UnitySDK::FromName("", "HHPLFEJFLHF")->GetStaticField(0x1C030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPLFEJFLHF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHPLFEJFLHF_CCTOR_OFFSET))();
		}

		static ::HHPLFEJFLHF* ACMKLFOMPFC(::System::Collections::Generic::List_1<::KHKMCPLEEEB*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::HHPLFEJFLHF*(*)(::System::Collections::Generic::List_1<::KHKMCPLEEEB*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HHPLFEJFLHF_ACMKLFOMPFC_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::KHKMCPLEEEB*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KHKMCPLEEEB*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HHPLFEJFLHF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KGPHPJDJDLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPLFEJFLHF_KGPHPJDJDLA_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPLFEJFLHF_ABKBOGIGAEH_OFFSET))(this);
		}

	};
