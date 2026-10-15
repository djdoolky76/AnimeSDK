#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMILHGPLJHC;
class JIAFOPELMJJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Object; }

#define OHBNCJLLEPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5ED70)
#define OHBNCJLLEPK_FKODDOIPPFP_OFFSET UNITYSDK_OFFSET(0xBE5EED0)
#define OHBNCJLLEPK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBE5EE50)
#define OHBNCJLLEPK_IDEAMFEECKP_OFFSET UNITYSDK_OFFSET(0xBE5F320)
#define OHBNCJLLEPK_JAADKPKIKPJ_OFFSET UNITYSDK_OFFSET(0xBE5F250)
#define OHBNCJLLEPK_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0xBE5EF30)
#define OHBNCJLLEPK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE5EDA0)
#define OHBNCJLLEPK_NAMIPFEIDHB_OFFSET UNITYSDK_OFFSET(0xBE5ED60)

inline static constexpr unsigned int OHBNCJLLEPK_TypeDefinitionIndex = 61232;

	class OHBNCJLLEPK : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x10
		::UnityEngine::Object* APMPLCCLAIH; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* IOHKBDHIFKA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_CTOR_OFFSET))(this);
		}

		::JIAFOPELMJJ* NAMIPFEIDHB()
		{
			return ((::JIAFOPELMJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_NAMIPFEIDHB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FKODDOIPPFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_FKODDOIPPFP_OFFSET))(this);
		}

		::EMILHGPLJHC* KHFHNDEBGDH(::System::Boolean a1)
		{
			return ((::EMILHGPLJHC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHBNCJLLEPK_KHFHNDEBGDH_OFFSET))(this, a1);
		}

		static ::System::Void JAADKPKIKPJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBNCJLLEPK_JAADKPKIKPJ_OFFSET))();
		}

		static ::System::Void IDEAMFEECKP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBNCJLLEPK_IDEAMFEECKP_OFFSET))();
		}

	};
