#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGIPGEHBL;
class JPFJJLEPGBC;
namespace System { class String; }

#define NHINJCAIOBB_AJBGDHMMNDM_OFFSET UNITYSDK_OFFSET(0xC4A4220)
#define NHINJCAIOBB_ENFNFCFPMDB_OFFSET UNITYSDK_OFFSET(0xC4A4570)
#define NHINJCAIOBB_IMDIPEEEEKB_OFFSET UNITYSDK_OFFSET(0xC4A41A0)
#define NHINJCAIOBB_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xC4A3FE0)

inline static constexpr unsigned int NHINJCAIOBB_TypeDefinitionIndex = 61922;

	class NHINJCAIOBB : public ::System::Object
	{
	public:
		static ::JAIGIPGEHBL* KHJNHDOJDDP(::JPFJJLEPGBC* a1)
		{
			return ((::JAIGIPGEHBL*(*)(::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + NHINJCAIOBB_KHJNHDOJDDP_OFFSET))(a1);
		}

		static ::System::Boolean IMDIPEEEEKB(::JPFJJLEPGBC* a1)
		{
			return ((::System::Boolean(*)(::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + NHINJCAIOBB_IMDIPEEEEKB_OFFSET))(a1);
		}

		static ::System::Void AJBGDHMMNDM(::JPFJJLEPGBC* a1, ::JAIGIPGEHBL* a2)
		{
			return ((::System::Void(*)(::JPFJJLEPGBC*, ::JAIGIPGEHBL*))((::PBYTE)hIl2Cpp + NHINJCAIOBB_AJBGDHMMNDM_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* ENFNFCFPMDB(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NHINJCAIOBB_ENFNFCFPMDB_OFFSET))(a1, a2);
		}

	};
