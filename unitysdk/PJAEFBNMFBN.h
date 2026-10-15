#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJAEFBNMFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC277F90)
#define PJAEFBNMFBN_NGCMBKFFGJK_1_OFFSET UNITYSDK_OFFSET(0xC277BB0)
#define PJAEFBNMFBN_NGCMBKFFGJK_OFFSET UNITYSDK_OFFSET(0xC277840)

	class PJAEFBNMFBN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DJPBMFOFJIB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAEFBNMFBN_CTOR_OFFSET))(this);
		}

		::System::Void NGCMBKFFGJK(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PJAEFBNMFBN_NGCMBKFFGJK_OFFSET))(this, a1, a2);
		}

		::System::Void NGCMBKFFGJK_1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*))((::PBYTE)hIl2Cpp + PJAEFBNMFBN_NGCMBKFFGJK_1_OFFSET))(this, a1, a2);
		}

	};
