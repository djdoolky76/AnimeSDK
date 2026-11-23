#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EC00AF6EBD418F0F; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define B99B42BF63078477_E718B67127721864_1_OFFSET UNITYSDK_OFFSET(0x3E66FB0)
#define B99B42BF63078477_E718B67127721864_OFFSET UNITYSDK_OFFSET(0x3E66FB0)

inline static constexpr unsigned int B99B42BF63078477_TypeDefinitionIndex = 14941;

class B99B42BF63078477 : public ::System::Object
{
public:
	::System::Boolean E718B67127721864(::System::EC00AF6EBD418F0F* B80ACB93A9EE7636, ::System::Collections::Generic::IList_1<::System::String*>*& A41D73F9532FD0AD, ::System::Int32& B4F4FFEFB11AD03A)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::EC00AF6EBD418F0F*, ::System::Collections::Generic::IList_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + B99B42BF63078477_E718B67127721864_OFFSET))(this, B80ACB93A9EE7636, A41D73F9532FD0AD, B4F4FFEFB11AD03A);
	}

	::System::Boolean E718B67127721864_1(::System::EC00AF6EBD418F0F* B80ACB93A9EE7636, ::System::Collections::Generic::IList_1<::System::String*>*& A41D73F9532FD0AD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::EC00AF6EBD418F0F*, ::System::Collections::Generic::IList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + B99B42BF63078477_E718B67127721864_1_OFFSET))(this, B80ACB93A9EE7636, A41D73F9532FD0AD);
	}
};
