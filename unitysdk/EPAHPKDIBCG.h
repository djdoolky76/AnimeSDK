#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define EPAHPKDIBCG_CTOR_OFFSET UNITYSDK_OFFSET(0x155C2610)
#define EPAHPKDIBCG_GET_REASON_OFFSET UNITYSDK_OFFSET(0x155C2600)

inline static constexpr unsigned int EPAHPKDIBCG_TypeDefinitionIndex = 69405;

	class EPAHPKDIBCG : public ::System::Exception
	{
	public:
		::System::String* _Reason_k__BackingField; // 0x88
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPAHPKDIBCG_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAHPKDIBCG_GET_REASON_OFFSET))(this);
		}

	};
