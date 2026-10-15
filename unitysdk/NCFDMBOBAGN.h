#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class HEOLKMLMPML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCFDMBOBAGN_ACMPHJJOOHE_1_OFFSET UNITYSDK_OFFSET(0xBB05E80)
#define NCFDMBOBAGN_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xBB05970)
#define NCFDMBOBAGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB06180)
#define NCFDMBOBAGN_JEBBIJBOFCL_OFFSET UNITYSDK_OFFSET(0xBB06020)
#define NCFDMBOBAGN_PKJLGKGIAGN_OFFSET UNITYSDK_OFFSET(0xBB05B10)

inline static constexpr unsigned int NCFDMBOBAGN_TypeDefinitionIndex = 65313;

	class NCFDMBOBAGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HEOLKMLMPML*>* OHHACMNMMAN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDMBOBAGN_CTOR_OFFSET))(this);
		}

		::System::String* ACMPHJJOOHE(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::HEOLKMLMPML* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::HEOLKMLMPML*))((::PBYTE)hIl2Cpp + NCFDMBOBAGN_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::String* ACMPHJJOOHE_1(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::System::Collections::Generic::IEnumerable_1<::HEOLKMLMPML*>*))((::PBYTE)hIl2Cpp + NCFDMBOBAGN_ACMPHJJOOHE_1_OFFSET))(this, a1, a2);
		}

		::System::String* PKJLGKGIAGN(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + NCFDMBOBAGN_PKJLGKGIAGN_OFFSET))(this, a1, a2);
		}

		::System::String* JEBBIJBOFCL(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + NCFDMBOBAGN_JEBBIJBOFCL_OFFSET))(this, a1, a2);
		}

	};
