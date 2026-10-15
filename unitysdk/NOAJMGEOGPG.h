#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;
class KKGMHJNMOID;
namespace System { class String; }

#define NOAJMGEOGPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD8B40)
#define NOAJMGEOGPG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBCD89F0)

inline static constexpr unsigned int NOAJMGEOGPG_TypeDefinitionIndex = 79698;

	class NOAJMGEOGPG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAJMGEOGPG_CTOR_OFFSET))(this);
		}

		::System::String* FPKLDCGAJGP(::KKGMHJNMOID* a1, ::JCMJBMIKIFO* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + NOAJMGEOGPG_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

	};
