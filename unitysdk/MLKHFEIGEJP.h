#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLKHFEIGEJP_DIBEEDKDAKJ_1_OFFSET UNITYSDK_OFFSET(0x11F5A960)
#define MLKHFEIGEJP_DIBEEDKDAKJ_OFFSET UNITYSDK_OFFSET(0x11F5A890)
#define MLKHFEIGEJP_DLCABOMJCMP_OFFSET UNITYSDK_OFFSET(0x11F5AA70)
#define MLKHFEIGEJP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F5A880)

inline static constexpr unsigned int MLKHFEIGEJP_TypeDefinitionIndex = 82983;

class MLKHFEIGEJP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKHFEIGEJP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DIBEEDKDAKJ(::System::String* CAIKJLENHJL)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKHFEIGEJP_DIBEEDKDAKJ_OFFSET))(this, CAIKJLENHJL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DIBEEDKDAKJ_1(::Il2CppArray<::System::String*>* LDGOJKOHOAM)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MLKHFEIGEJP_DIBEEDKDAKJ_1_OFFSET))(this, LDGOJKOHOAM);
	}

	::System::Int32 DLCABOMJCMP(::System::String* FKDONKGGAIF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKHFEIGEJP_DLCABOMJCMP_OFFSET))(this, FKDONKGGAIF);
	}
};
