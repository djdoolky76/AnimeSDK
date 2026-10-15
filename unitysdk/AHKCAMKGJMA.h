#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAPKINMFNIL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AHKCAMKGJMA_AKEKJNJAKAA_OFFSET UNITYSDK_OFFSET(0xEB7FBE0)
#define AHKCAMKGJMA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7FB60)
#define AHKCAMKGJMA_EDMBKEEHHPJ_OFFSET UNITYSDK_OFFSET(0xEB803D0)
#define AHKCAMKGJMA_MDAOCEGHBBN_OFFSET UNITYSDK_OFFSET(0xEB80150)
#define AHKCAMKGJMA_MNKDMDIPPPO_OFFSET UNITYSDK_OFFSET(0xEB802C0)
#define AHKCAMKGJMA_PLCGLGKMLMA_OFFSET UNITYSDK_OFFSET(0xEB80320)

inline static constexpr unsigned int AHKCAMKGJMA_TypeDefinitionIndex = 82101;

	class AHKCAMKGJMA : public ::System::Object
	{
	public:
		::CAPKINMFNIL* MPJBKABBEEP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CAPKINMFNIL*>* DGJIGNNCIHK; // 0x18
		::CAPKINMFNIL* INOBONGIJMA; // 0x20
		::System::Boolean APJILDFJCGJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NIKPKOALLML; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_CTOR_OFFSET))(this);
		}

		::System::Void AKEKJNJAKAA(::System::Collections::Generic::IReadOnlyList_1<::CAPKINMFNIL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CAPKINMFNIL*>*))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_AKEKJNJAKAA_OFFSET))(this, a1);
		}

		::System::Void MDAOCEGHBBN(::CAPKINMFNIL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CAPKINMFNIL*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_MDAOCEGHBBN_OFFSET))(this, a1, a2);
		}

		::CAPKINMFNIL* MNKDMDIPPPO(::System::Boolean a1)
		{
			return ((::CAPKINMFNIL*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_MNKDMDIPPPO_OFFSET))(this, a1);
		}

		::CAPKINMFNIL* PLCGLGKMLMA(::System::UInt32 a1)
		{
			return ((::CAPKINMFNIL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_PLCGLGKMLMA_OFFSET))(this, a1);
		}

		::System::Boolean EDMBKEEHHPJ(::System::UInt32 a1, ::CAPKINMFNIL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAPKINMFNIL*))((::PBYTE)hIl2Cpp + AHKCAMKGJMA_EDMBKEEHHPJ_OFFSET))(this, a1, a2);
		}

	};
