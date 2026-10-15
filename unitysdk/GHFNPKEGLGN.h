#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHFNPKEGLGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0F8B0)

inline static constexpr unsigned int GHFNPKEGLGN_TypeDefinitionIndex = 61094;

	class GHFNPKEGLGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CEIJOGLNGND; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* IMCNFPNKKFA; // 0x18
		::System::String* EAIPOEHAPHM; // 0x20
		::System::String* HMCFOJPMFIK; // 0x28
		::System::String* FLPLCECLOLO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFNPKEGLGN_CTOR_OFFSET))(this);
		}

	};
