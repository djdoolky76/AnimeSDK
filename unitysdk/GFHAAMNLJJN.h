#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GFHAAMNLJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x159F7960)
#define GFHAAMNLJJN_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0x159F7520)

inline static constexpr unsigned int GFHAAMNLJJN_TypeDefinitionIndex = 67908;

	class GFHAAMNLJJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GHEBJCPBHHE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFHAAMNLJJN_CTOR_OFFSET))(this);
		}

		::System::Void MIFJNPKACOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFHAAMNLJJN_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
