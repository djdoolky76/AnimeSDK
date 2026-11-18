#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class PreloadObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CALJMJMHHPJ_AMIOHAGGIMP_OFFSET UNITYSDK_OFFSET(0x1141CA90)
#define CALJMJMHHPJ_IOCMHEJAIOM_OFFSET UNITYSDK_OFFSET(0x1141C920)

inline static constexpr unsigned int CALJMJMHHPJ_TypeDefinitionIndex = 59590;

class CALJMJMHHPJ : public ::System::Object
{
public:
	static ::System::Int32 IOCMHEJAIOM(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* PNIJMAKFFPE, ::System::Func_2<::MoleMole::PreloadObject*, ::System::Boolean>* FJDOCPKEACA)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>*, ::System::Func_2<::MoleMole::PreloadObject*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_IOCMHEJAIOM_OFFSET))(PNIJMAKFFPE, FJDOCPKEACA);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* AMIOHAGGIMP(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* PNIJMAKFFPE)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*(*)(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>*))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_AMIOHAGGIMP_OFFSET))(PNIJMAKFFPE);
	}
};
