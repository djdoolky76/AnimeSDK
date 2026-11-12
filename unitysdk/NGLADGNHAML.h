#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKFCPCNGNEC.h"
#include "unitysdk/OCKCNOOHILK.h"
class BGKBEIOJOFH;
class ONIGPALDGNK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define NGLADGNHAML_CTOR_OFFSET UNITYSDK_OFFSET(0xC488850)
#define NGLADGNHAML_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0xC489120)
#define NGLADGNHAML_ENEILDHIDON_OFFSET UNITYSDK_OFFSET(0xC488DB0)
#define NGLADGNHAML_JCLLIEODOAL_OFFSET UNITYSDK_OFFSET(0xC488860)

inline static constexpr unsigned int NGLADGNHAML_TypeDefinitionIndex = 77084;

	class NGLADGNHAML : public ::System::Object
	{
	public:
		::BGKBEIOJOFH* FKKLAPJGLDB; // 0x10
		::ONIGPALDGNK* KOENNKLADCN; // 0x18
		::System::Void _ctor(::ONIGPALDGNK* a1, ::BGKBEIOJOFH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ONIGPALDGNK*, ::BGKBEIOJOFH*))((::PBYTE)hIl2Cpp + NGLADGNHAML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* JCLLIEODOAL(::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>*))((::PBYTE)hIl2Cpp + NGLADGNHAML_JCLLIEODOAL_OFFSET))(this, a1);
		}

		::CKFCPCNGNEC ENEILDHIDON(::OCKCNOOHILK a1)
		{
			return ((::CKFCPCNGNEC(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + NGLADGNHAML_ENEILDHIDON_OFFSET))(this, a1);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NGLADGNHAML_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
