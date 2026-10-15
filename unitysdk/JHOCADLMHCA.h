#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading::Tasks { class Task; }

#define JHOCADLMHCA_BLMKJJMHNAB_OFFSET UNITYSDK_OFFSET(0xB1C0C50)
#define JHOCADLMHCA_CGONMPFAKIA_OFFSET UNITYSDK_OFFSET(0xB1C0E80)
#define JHOCADLMHCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C0930)
#define JHOCADLMHCA_EMBHENAIACG_OFFSET UNITYSDK_OFFSET(0xB1C0940)
#define JHOCADLMHCA_GOJGPFJBNBJ_OFFSET UNITYSDK_OFFSET(0xB1C0A40)
#define JHOCADLMHCA_IPINNKCAHCF_OFFSET UNITYSDK_OFFSET(0xB1C0B60)
#define JHOCADLMHCA_JPNIGCPKIGO_OFFSET UNITYSDK_OFFSET(0xB1C0D60)
#define JHOCADLMHCA_MGJIKCNIFBN_OFFSET UNITYSDK_OFFSET(0xB1C1140)
#define JHOCADLMHCA_MNGNNPJFCOA_OFFSET UNITYSDK_OFFSET(0xB1C1250)
#define JHOCADLMHCA_NPAMMCLMLKA_OFFSET UNITYSDK_OFFSET(0xB1C0FC0)

	class JHOCADLMHCA : public ::System::Object
	{
	public:
		::System::String* EOGGNKAHNJF; // 0x10
		::System::String* LBIEIMLONCE; // 0x18
		// static const ::System::String* BHAMKDDIOGF; // 0x0
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task* EMBHENAIACG(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_EMBHENAIACG_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task* GOJGPFJBNBJ(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_GOJGPFJBNBJ_OFFSET))(this, a1, a2);
		}

		::System::Threading::Tasks::Task* IPINNKCAHCF(::System::String* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_IPINNKCAHCF_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* BLMKJJMHNAB(::System::String* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_BLMKJJMHNAB_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* JPNIGCPKIGO(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_JPNIGCPKIGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* CGONMPFAKIA(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_CGONMPFAKIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* NPAMMCLMLKA(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_NPAMMCLMLKA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task* MGJIKCNIFBN(::System::String* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JHOCADLMHCA_MGJIKCNIFBN_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* MNGNNPJFCOA()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOCADLMHCA_MNGNNPJFCOA_OFFSET))(this);
		}

	};
