#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGIPGEHBL;
class JPFJJLEPGBC;
namespace System { class String; }

#define NHINJCAIOBB_AJBGDHMMNDM_OFFSET UNITYSDK_OFFSET(0x14899F90)
#define NHINJCAIOBB_ENFNFCFPMDB_OFFSET UNITYSDK_OFFSET(0x1489A2F0)
#define NHINJCAIOBB_IMDIPEEEEKB_OFFSET UNITYSDK_OFFSET(0x14899F10)
#define NHINJCAIOBB_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0x14899D50)

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
