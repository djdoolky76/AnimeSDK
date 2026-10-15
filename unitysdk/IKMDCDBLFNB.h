#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGKDMDDAMLH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKMDCDBLFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1648D090)

inline static constexpr unsigned int IKMDCDBLFNB_TypeDefinitionIndex = 68459;

	class IKMDCDBLFNB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KGKDMDDAMLH*>* LMGGAKNONIB; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* GBNCJLDBLIN; // 0x18
		::System::Int32 GMDBHJKEAEI; // 0x20
		::System::Single BLJMHKKFOJG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMDCDBLFNB_CTOR_OFFSET))(this);
		}

	};
