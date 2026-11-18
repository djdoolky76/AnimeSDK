#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFICDBEJFFD_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x1292CBB0)
#define OFICDBEJFFD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1292CAA0)
#define OFICDBEJFFD_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1292CA50)
#define OFICDBEJFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1292C990)

inline static constexpr unsigned int OFICDBEJFFD_TypeDefinitionIndex = 87456;

class OFICDBEJFFD : public ::System::Object
{
public:
	static ::OFICDBEJFFD** StaticGet_NCFKINHMHCF()
	{
		return (::OFICDBEJFFD**)Il2CppClass::FromTypeDefinitionIndex(OFICDBEJFFD_TypeDefinitionIndex)->GetStaticField(0x4C8A0);
	}
	::System::Object* FGEDGEBBMCE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt64, ::Share::EItemType>, ::System::Int32>* LFPGIEIEBIO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* BLJKINLBCDD; // 0x20
	::System::Int32 EOELBDKGIJN; // 0x28
	::System::UInt32 PHIKBGHJCKK; // 0x2C
	::System::Boolean BAGPPGLFHHJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFICDBEJFFD__CTOR_OFFSET))(this);
	}

	static ::OFICDBEJFFD* OMPFLKCBFHF()
	{
		return ((::OFICDBEJFFD*(*)())((::PBYTE)hIl2Cpp + OFICDBEJFFD_OMPFLKCBFHF_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFICDBEJFFD_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void IBBLCAOMCKF(::OFICDBEJFFD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::OFICDBEJFFD*))((::PBYTE)hIl2Cpp + OFICDBEJFFD_IBBLCAOMCKF_OFFSET))(AAOCANGHBDG);
	}
};
