#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGMCNPJHBJ;
class DNGMCNPJHBJ_MCMNFKBLEEH;
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNGMCNPJHBJ_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0x126E5FC0)
#define DNGMCNPJHBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x126E5FB0)
#define DNGMCNPJHBJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x126E61D0)

inline static constexpr unsigned int DNGMCNPJHBJ_TypeDefinitionIndex = 67079;

	class DNGMCNPJHBJ : public ::System::Object
	{
	public:
		::DNGMCNPJHBJ_MCMNFKBLEEH* NHKEFNDNGPE; // 0x10
		::System::Int32 AHELPPOMLOE; // 0x18
		::System::Void _ctor(::DNGMCNPJHBJ_MCMNFKBLEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNGMCNPJHBJ_MCMNFKBLEEH*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_CTOR_OFFSET))(this, a1);
		}

		::System::String* ACMPHJJOOHE(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
