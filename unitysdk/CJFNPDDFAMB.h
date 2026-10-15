#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFFEJCJFDJ;
class LBPCONKMBIK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJFNPDDFAMB_CTOR_OFFSET UNITYSDK_OFFSET(0xD204C30)
#define CJFNPDDFAMB_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0xD204C20)
#define CJFNPDDFAMB_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xD204CB0)

inline static constexpr unsigned int CJFNPDDFAMB_TypeDefinitionIndex = 63928;

	class CJFNPDDFAMB : public ::System::Object
	{
	public:
		::CIFFEJCJFDJ* DACMBPLECJN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>* _Records_k__BackingField; // 0x18
		::System::Void _ctor(::CIFFEJCJFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFFEJCJFDJ*))((::PBYTE)hIl2Cpp + CJFNPDDFAMB_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>* get_Records()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBPCONKMBIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFNPDDFAMB_GET_RECORDS_OFFSET))(this);
		}

		::LBPCONKMBIK* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJFNPDDFAMB_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
