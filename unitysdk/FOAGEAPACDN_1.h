#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int FOAGEAPACDN_1_TypeDefinitionIndex = 59356;

template <typename T>
class FOAGEAPACDN_1 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_HAMBLAALMDJ()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FOAGEAPACDN_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::System::Object*>* ACDKKCINLON; // 0x0
	T CJFMIMMDDGF; // 0x0
	::System::Action* JFBAFIHFHDO; // 0x0
};
