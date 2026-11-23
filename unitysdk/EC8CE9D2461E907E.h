#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EC8CE9D2461E907E_E33669C0444600CC_OFFSET UNITYSDK_OFFSET(0x426A270)

inline static constexpr unsigned int EC8CE9D2461E907E_TypeDefinitionIndex = 13778;

class EC8CE9D2461E907E : public ::System::Object
{
public:
	static ::System::Boolean E33669C0444600CC(::System::Collections::Generic::IEnumerable_1<::System::String*>* AD8845A117909DE0)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + EC8CE9D2461E907E_E33669C0444600CC_OFFSET))(AD8845A117909DE0);
	}
};
