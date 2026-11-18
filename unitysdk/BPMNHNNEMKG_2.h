#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class BPMNHNNEMKG_2;

inline static constexpr unsigned int BPMNHNNEMKG_2_TypeDefinitionIndex = 48197;

template <typename T1, typename T2>
class BPMNHNNEMKG_2 : public ::System::Object
{
public:
	static ::BPMNHNNEMKG_2<T1, T2>** StaticGet_PMKINFHDLFD()
	{
		return (::BPMNHNNEMKG_2<T1, T2>**)Il2CppClass::FromTypeDefinitionIndex(BPMNHNNEMKG_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::IList_1<T1>* ACDKKCINLON; // 0x0
	::System::Func_2<T1, T2>* MODHJGILAPJ; // 0x0
};
