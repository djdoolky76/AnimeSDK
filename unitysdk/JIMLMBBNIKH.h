#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define JIMLMBBNIKH_EBFOHGMMHKL_OFFSET UNITYSDK_OFFSET(0xB1F7140)
#define JIMLMBBNIKH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB1F71C0)
#define JIMLMBBNIKH_LMNHLKKONPD_OFFSET UNITYSDK_OFFSET(0xB1F7550)
#define JIMLMBBNIKH_OFGCNINHECD_OFFSET UNITYSDK_OFFSET(0xB1F76D0)

inline static constexpr unsigned int JIMLMBBNIKH_TypeDefinitionIndex = 67240;

	class JIMLMBBNIKH : public ::System::Object
	{
	public:
		static ::System::Object* EBFOHGMMHKL(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + JIMLMBBNIKH_EBFOHGMMHKL_OFFSET))(a1, a2);
		}

		static ::System::Object* FPKLDCGAJGP(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + JIMLMBBNIKH_FPKLDCGAJGP_OFFSET))(a1, a2);
		}

		static ::System::Type* LMNHLKKONPD(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + JIMLMBBNIKH_LMNHLKKONPD_OFFSET))(a1);
		}

		static ::System::Void OFGCNINHECD(::System::Object* a1, ::System::Reflection::MemberInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + JIMLMBBNIKH_OFGCNINHECD_OFFSET))(a1, a2, a3);
		}

	};
