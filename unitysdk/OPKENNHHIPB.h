#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEOFKLDCIKE.h"
#include "unitysdk/System/Object.h"

class CBKCCDGFNHH;
class CHDGLGNLKIP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPKENNHHIPB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15522EF0)
#define OPKENNHHIPB_KDNDHKNBANK_OFFSET UNITYSDK_OFFSET(0x15523100)
#define OPKENNHHIPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15522E50)

inline static constexpr unsigned int OPKENNHHIPB_TypeDefinitionIndex = 58431;

class OPKENNHHIPB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::KEOFKLDCIKE, ::CHDGLGNLKIP*>** StaticGet_AKGADLNFGGC()
	{
		return (::System::Collections::Generic::Dictionary_2<::KEOFKLDCIKE, ::CHDGLGNLKIP*>**)Il2CppClass::FromTypeDefinitionIndex(OPKENNHHIPB_TypeDefinitionIndex)->GetStaticField(0x51AE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPKENNHHIPB__CCTOR_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPKENNHHIPB_BBOMJDBNHIC_OFFSET))();
	}

	static ::System::Void KDNDHKNBANK(::CBKCCDGFNHH* LJBPECKCCEA, ::System::Int32 ACEENLFDLKM)
	{
		return ((::System::Void(*)(::CBKCCDGFNHH*, ::System::Int32))((::PBYTE)hIl2Cpp + OPKENNHHIPB_KDNDHKNBANK_OFFSET))(LJBPECKCCEA, ACEENLFDLKM);
	}
};
