#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class FileStream; }

#define MCGFKJLAKBN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D755CA0)
#define MCGFKJLAKBN_CHHEBNFAMIG_OFFSET UNITYSDK_OFFSET(0x1D755F70)
#define MCGFKJLAKBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D755B90)
#define MCGFKJLAKBN_DNIHELIKBGA_OFFSET UNITYSDK_OFFSET(0x1D755C90)
#define MCGFKJLAKBN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D755B20)
#define MCGFKJLAKBN_PMHCOODEDDN_OFFSET UNITYSDK_OFFSET(0x1D755E00)
#define MCGFKJLAKBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D755C80)

inline static constexpr unsigned int MCGFKJLAKBN_TypeDefinitionIndex = 8458;

class MCGFKJLAKBN : public ::System::Object
{
public:
	::System::IO::FileStream* EKBBCNALHFL; // 0x10
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>* OBELNEEDJKG; // 0x18
	::System::Boolean NOIJGPOEJCO; // 0x20
	::System::Boolean DMHGKDHDCIB; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGFKJLAKBN__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_DISPOSE_OFFSET))(this);
	}

	::System::Boolean DNIHELIKBGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_DNIHELIKBGA_OFFSET))(this);
	}

	::System::Boolean BBOMJDBNHIC(::System::String* BBMAJMJPGBH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_BBOMJDBNHIC_OFFSET))(this, BBMAJMJPGBH);
	}

	::System::Void PMHCOODEDDN(::System::String* JNKMJEPFKDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_PMHCOODEDDN_OFFSET))(this, JNKMJEPFKDC);
	}

	::System::Void CHHEBNFAMIG(::System::Object* LGAABHLIHKE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCGFKJLAKBN_CHHEBNFAMIG_OFFSET))(this, LGAABHLIHKE);
	}
};
