#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class ReaderWriterLock; }
template <typename T> class BPFJNJIFABE_1;
template <typename T> class DMOOKABKODJ_1;

inline static constexpr unsigned int DMOOKABKODJ_1_TypeDefinitionIndex = 64461;

template <typename T>
class DMOOKABKODJ_1 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_ONINLBLMEKI()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMOOKABKODJ_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::DMOOKABKODJ_1<T>** StaticGet_PMKINFHDLFD()
	{
		return (::DMOOKABKODJ_1<T>**)Il2CppClass::FromTypeDefinitionIndex(DMOOKABKODJ_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 IEGBGFAHJIJ = 0x0; // 0x0
	// static const ::System::Int32 ILMKBLAPAMG = 0x1; // 0x0
	// static const ::System::Int32 ACLEEHHDAPH = 0x2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BPFJNJIFABE_1<T>*>* HHJLNLFDGLP; // 0x0
	::System::Threading::ReaderWriterLock* MFCMGAOMJCP; // 0x0
};
