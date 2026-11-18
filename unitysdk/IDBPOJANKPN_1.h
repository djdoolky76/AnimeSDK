#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

inline static constexpr unsigned int IDBPOJANKPN_1_TypeDefinitionIndex = 28652;

template <typename T>
class IDBPOJANKPN_1 : public ::System::Object
{
public:
	::System::Boolean IFHPNDPONAL; // 0x0
	::Il2CppArray<T>* MEOHKIGFMDL; // 0x0
	::System::Int32 OGFPEPEEHLP; // 0x0
	::System::Collections::Generic::Dictionary_2<T, ::System::UInt32>* FGKIKOIHMAB; // 0x0
	::System::Collections::Generic::IEqualityComparer_1<T>* JAMFCIKKILO; // 0x0
};
